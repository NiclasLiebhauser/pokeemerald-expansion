#include "global.h"
#include "item_ball.h"
#include "event_data.h"
#include "constants/event_objects.h"
#include "constants/items.h"
#include "random.h"

static u32 GetItemBallAmountFromTemplate(u32);
static u32 GetItemBallIdFromTemplate(u32);
static struct ItemPool GetRandomItem(u32, u32);
static u32 GetRandomRarity(void);
static u32 GetRandomCategory(void);

static const u32 ItemRarities[][2] =
{
    {ITEM_RARITY_COMMON, 25},
    {ITEM_RARITY_UNCOMMON, 20},
    {ITEM_RARITY_RARE, 15},
    {ITEM_RARITY_ULTRA_RARE, 10},
    {ITEM_RARITY_LEGENDARY, 5}
};

static const u32 ItemCategories[] =
{
    ITEM_CATEGORY_BALL,
    ITEM_CATEGORY_CONSUMEABLE,
    ITEM_CATEGORY_EVOLUTION,
    ITEM_CATEGORY_TM,
    ITEM_CATEGORY_MONEY,
    //ITEM_CATEGORY_HELD
};

static const struct ItemPool ItemPoolBalls[] =
{
    {ITEM_POKE_BALL, ITEM_RARITY_COMMON, 3},
    {ITEM_FRIEND_BALL, ITEM_RARITY_COMMON, 3},
    {ITEM_HEAL_BALL, ITEM_RARITY_COMMON, 3},
    {ITEM_LEVEL_BALL, ITEM_RARITY_COMMON, 3},
    {ITEM_LUXURY_BALL, ITEM_RARITY_COMMON, 3},
    {ITEM_NEST_BALL, ITEM_RARITY_COMMON, 3},
    {ITEM_POKE_BALL, ITEM_RARITY_UNCOMMON, 8},
    {ITEM_GREAT_BALL, ITEM_RARITY_UNCOMMON, 3},
    {ITEM_DIVE_BALL, ITEM_RARITY_UNCOMMON, 3},
    {ITEM_DREAM_BALL, ITEM_RARITY_UNCOMMON, 3},
    {ITEM_HEAVY_BALL, ITEM_RARITY_UNCOMMON, 3},
    {ITEM_LOVE_BALL, ITEM_RARITY_UNCOMMON, 3},
    {ITEM_LURE_BALL, ITEM_RARITY_UNCOMMON, 3},
    {ITEM_REPEAT_BALL, ITEM_RARITY_UNCOMMON, 3},
    {ITEM_GREAT_BALL, ITEM_RARITY_RARE, 8},
    {ITEM_ULTRA_BALL, ITEM_RARITY_RARE, 3},
    {ITEM_NET_BALL, ITEM_RARITY_RARE, 3},
    {ITEM_TIMER_BALL, ITEM_RARITY_RARE, 3},
    {ITEM_ULTRA_BALL, ITEM_RARITY_ULTRA_RARE, 8},
    {ITEM_DUSK_BALL, ITEM_RARITY_ULTRA_RARE, 3},
    {ITEM_QUICK_BALL, ITEM_RARITY_ULTRA_RARE, 3},
    {ITEM_MASTER_BALL, ITEM_RARITY_LEGENDARY, 1}
};

static const struct ItemPool ItemPoolConsumeables[] =
{
    {ITEM_FRESH_WATER, ITEM_RARITY_COMMON, 1},
    {ITEM_LEMONADE, ITEM_RARITY_COMMON, 1},
    {ITEM_POTION, ITEM_RARITY_COMMON, 1},
    {ITEM_ANTIDOTE, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_AWAKENING, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_BURN_HEAL, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_ETHER, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_ICE_HEAL, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_LAVA_COOKIE, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_MOOMOO_MILK, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_PARALYZE_HEAL, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_SODA_POP, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_SUPER_POTION, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_ELIXIR, ITEM_RARITY_RARE, 1},
    {ITEM_HYPER_POTION, ITEM_RARITY_RARE, 1},
    {ITEM_REVIVE, ITEM_RARITY_RARE, 1},
    {ITEM_MAX_ETHER, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_FULL_HEAL, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_MAX_POTION, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_FULL_RESTORE, ITEM_RARITY_LEGENDARY, 1},
    {ITEM_MAX_REVIVE, ITEM_RARITY_LEGENDARY, 1},
    {ITEM_SACRED_ASH, ITEM_RARITY_LEGENDARY, 1},
    {ITEM_MAX_ELIXIR, ITEM_RARITY_LEGENDARY, 1}
};

static const struct ItemPool ItemPoolEvolutionItems[] =
{
    {ITEM_FIRE_STONE, ITEM_RARITY_COMMON, 1},
    {ITEM_LEAF_STONE, ITEM_RARITY_COMMON, 1},
    {ITEM_ICE_STONE, ITEM_RARITY_COMMON, 1},
    {ITEM_WATER_STONE, ITEM_RARITY_COMMON, 1},
    {ITEM_THUNDER_STONE, ITEM_RARITY_COMMON, 1},
    {ITEM_SUN_STONE, ITEM_RARITY_COMMON, 1},
    {ITEM_DAWN_STONE, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_DUSK_STONE, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_SHINY_STONE, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_OVAL_STONE, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_DEEP_SEA_SCALE, ITEM_RARITY_RARE, 1},
    {ITEM_DEEP_SEA_TOOTH, ITEM_RARITY_RARE, 1},
    {ITEM_GALARICA_CUFF, ITEM_RARITY_RARE, 1},
    {ITEM_GALARICA_WREATH, ITEM_RARITY_RARE, 1},
    {ITEM_ELECTIRIZER, ITEM_RARITY_RARE, 1},
    {ITEM_KINGS_ROCK, ITEM_RARITY_RARE, 1},
    {ITEM_LINKING_CORD, ITEM_RARITY_RARE, 1},
    {ITEM_MAGMARIZER, ITEM_RARITY_RARE, 1},
    {ITEM_METAL_COAT, ITEM_RARITY_RARE, 1},
    {ITEM_PROTECTOR, ITEM_RARITY_RARE, 1},
    {ITEM_RAZOR_CLAW, ITEM_RARITY_RARE, 1},
    {ITEM_RAZOR_FANG, ITEM_RARITY_RARE, 1},
    {ITEM_REAPER_CLOTH, ITEM_RARITY_RARE, 1},
    {ITEM_UPGRADE, ITEM_RARITY_RARE, 1},
    {ITEM_PRISM_SCALE, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_PEAT_BLOCK, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_DRAGON_SCALE, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_BLACK_AUGURITE, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_DUBIOUS_DISC, ITEM_RARITY_LEGENDARY, 1}
};

static const struct ItemPool ItemPoolTms[] =
{
    {ITEM_TM11, ITEM_RARITY_COMMON, 1},
    {ITEM_TM02, ITEM_RARITY_COMMON, 1},
    {ITEM_TM09, ITEM_RARITY_COMMON, 1},
    {ITEM_TM18, ITEM_RARITY_COMMON, 1},
    {ITEM_TM13, ITEM_RARITY_COMMON, 1},
    {ITEM_TM23, ITEM_RARITY_COMMON, 1},
    {ITEM_TM35, ITEM_RARITY_COMMON, 1},
    {ITEM_TM07, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM34, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM37, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM39, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM40, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM42, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM46, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM49, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_TM24, ITEM_RARITY_RARE, 1},
    {ITEM_TM19, ITEM_RARITY_RARE, 1},
    {ITEM_TM22, ITEM_RARITY_RARE, 1},
    {ITEM_TM28, ITEM_RARITY_RARE, 1},
    {ITEM_TM29, ITEM_RARITY_RARE, 1},
    {ITEM_TM30, ITEM_RARITY_RARE, 1},
    {ITEM_TM36, ITEM_RARITY_RARE, 1},
    {ITEM_TM47, ITEM_RARITY_RARE, 1},
    {ITEM_TM06, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM02, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM08, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM14, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM15, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM25, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM26, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM31, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM38, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM50, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_TM04, ITEM_RARITY_LEGENDARY, 1},
};

static const struct ItemPool ItemPoolMoney[] =
{
    {ITEM_TINY_MUSHROOM, ITEM_RARITY_COMMON, 1},
    {ITEM_PEARL, ITEM_RARITY_COMMON, 1},
    {ITEM_STARDUST, ITEM_RARITY_COMMON, 1},
    {ITEM_RARE_BONE, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_BIG_MUSHROOM, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_BIG_PEARL, ITEM_RARITY_UNCOMMON, 1},
    {ITEM_NUGGET, ITEM_RARITY_RARE, 1},
    {ITEM_STAR_PIECE, ITEM_RARITY_RARE, 1},
    {ITEM_PEARL_STRING, ITEM_RARITY_RARE, 1},
    {ITEM_BALM_MUSHROOM, ITEM_RARITY_RARE, 1},
    {ITEM_BOTTLE_CAP, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_COMET_SHARD, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_BIG_NUGGET, ITEM_RARITY_ULTRA_RARE, 1},
    {ITEM_GOLD_BOTTLE_CAP, ITEM_RARITY_LEGENDARY, 1},
};

static u32 GetItemBallAmountFromTemplate(u32 itemBallId)
{
    u32 amount = gMapHeader.events->objectEvents[itemBallId].movementRangeX;

    if (amount > MAX_BAG_ITEM_CAPACITY)
        return MAX_BAG_ITEM_CAPACITY;

    return (amount == 0) ? 1 : amount;
}

static u32 GetItemBallIdFromTemplate(u32 itemBallId)
{
    u32 itemId = gMapHeader.events->objectEvents[itemBallId].trainerRange_berryTreeId;

    return (itemId >= ITEMS_COUNT) ? (ITEM_NONE + 1) : itemId;
}

void GetItemBallIdAndAmountFromTemplate(void)
{
    u32 itemBallId = (gSpecialVar_LastTalked - 1);
    gSpecialVar_Result = GetItemBallIdFromTemplate(itemBallId);
    gSpecialVar_0x8009 = GetItemBallAmountFromTemplate(itemBallId);
}

static u32 GetRandomRarity(void)
{
    u16 i;
    u32 random;
    u32 maxWeight = 0;
    u32 poolSize = sizeof(ItemRarities) / sizeof(ItemRarities[0]);

    for(i = 0; i < poolSize; i++)
    {
        maxWeight+=ItemRarities[i][1];
    }

    random = RandomUniformDefault(RNG_NONE, 0, maxWeight - 1);

    for(i = 0; i < poolSize; i++)
    {
        if(random <= ItemRarities[i][1])
        {
            return ItemRarities[i][0];
        }
        random-=ItemRarities[i][1];
    }

    return ItemRarities[0][0];
}

static u32 GetRandomCategory(void)
{
    u32 poolSize = (sizeof(ItemCategories) / sizeof(ItemCategories[0])) - 1;  
    u32 random = RandomUniformDefault(RNG_NONE, 0, poolSize);
    return ItemCategories[random];
}

static struct ItemPool GetRandomItem(u32 itemCategory, u32 rarity)
{
    u16 i;
    u32 random;
    u32 poolSize;
    u32 minRarity = 0;
    u32 maxRarity = 0;

    switch (itemCategory)
    {
    case ITEM_CATEGORY_BALL:
        poolSize = (sizeof(ItemPoolBalls) / sizeof(ItemPoolBalls[0]));
        minRarity = 0;
        maxRarity = poolSize - 1;
        if(rarity != 0)
        {
            for(i = 0; i < poolSize; i++)
            {
                DebugPrintfLevel(4, "Rarity: %d", ItemPoolBalls[i].Rarity);
                if(rarity == ItemPoolBalls[i].Rarity && minRarity == 0)
                {
                    minRarity = i;
                    break;
                }
            }
        }
        random = RandomUniformDefault(RNG_NONE, minRarity, maxRarity);
        return ItemPoolBalls[random];
        break;

    case ITEM_CATEGORY_MONEY:
        poolSize = (sizeof(ItemPoolMoney) / sizeof(ItemPoolMoney[0]));
        minRarity = 0;
        maxRarity = poolSize - 1;
        if(rarity != 0)
        {
            for(i = 0; i < poolSize; i++)
            {
                if(rarity == ItemPoolMoney[i].Rarity && minRarity == 0)
                {
                    minRarity = i;
                    break;
                }
            }
        }
        random = RandomUniformDefault(RNG_NONE, minRarity, maxRarity);
        return ItemPoolMoney[random];
        break;
    
    case ITEM_CATEGORY_EVOLUTION:
        poolSize = (sizeof(ItemPoolEvolutionItems) / sizeof(ItemPoolEvolutionItems[0]));
        minRarity = 0;
        maxRarity = poolSize - 1;
        if(rarity != 0)
        {
            for(i = 0; i < poolSize; i++)
            {
                if(rarity == ItemPoolEvolutionItems[i].Rarity && minRarity == 0)
                {
                    minRarity = i;
                    break;
                }
            }
        }
        random = RandomUniformDefault(RNG_NONE, minRarity, maxRarity);
        return ItemPoolEvolutionItems[random];
        break;

    case ITEM_CATEGORY_TM:
        poolSize = (sizeof(ItemPoolTms) / sizeof(ItemPoolTms[0]));
        minRarity = 0;
        maxRarity = poolSize - 1;
        if(rarity != 0)
        {
            for(i = 0; i < poolSize; i++)
            {
                if(rarity == ItemPoolTms[i].Rarity && minRarity == 0)
                {
                    minRarity = i;
                    break;
                }
            }
        }
        random = RandomUniformDefault(RNG_NONE, minRarity, maxRarity);
        return ItemPoolTms[random];
        break;

    case ITEM_CATEGORY_CONSUMEABLE:
        poolSize = (sizeof(ItemPoolConsumeables) / sizeof(ItemPoolConsumeables[0]));
        minRarity = 0;
        maxRarity = poolSize - 1;
        if(rarity != 0)
        {
            for(i = 0; i < poolSize; i++)
            {
                if(rarity == ItemPoolConsumeables[i].Rarity && minRarity == 0)
                {
                    minRarity = i;
                    break;
                }
            }
        }
        random = RandomUniformDefault(RNG_NONE, minRarity, maxRarity);
        return ItemPoolConsumeables[random];
        break;

    default:
        poolSize = (sizeof(ItemPoolBalls) / sizeof(ItemPoolBalls[0])) - 1;
        random = RandomUniformDefault(RNG_NONE, 0, poolSize);
        return ItemPoolBalls[random];
        break;
    }
} 

void GetRandomItemIdAndAmountFromTemplate(void)
{
    struct ItemPool itemPool;
    u32 itemBallId = (gSpecialVar_LastTalked - 1);
    u32 category = gMapHeader.events->objectEvents[itemBallId].trainerRange_berryTreeId;
    u32 rarity = gMapHeader.events->objectEvents[itemBallId].movementRangeX;

    if(rarity == 0)
    {
        rarity = GetRandomRarity();
    }

    if(category == 0)
    {
        category = GetRandomCategory();
    }

    itemPool = GetRandomItem(category, rarity);

    gSpecialVar_Result = itemPool.ItemId;
    gSpecialVar_0x8009 = itemPool.Amount;
}