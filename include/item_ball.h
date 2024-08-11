#ifndef GUARD_ITEM_BALL_H
#define GUARD_ITEM_BALL_H

void GetItemBallIdAndAmountFromTemplate(void);
void GetRandomItemIdAndAmountFromTemplate(void);

// Random Item Categories
#define ITEM_CATEGORY_BALL              1
#define ITEM_CATEGORY_CONSUMEABLE       2
#define ITEM_CATEGORY_EVOLUTION         3
#define ITEM_CATEGORY_TM                4
#define ITEM_CATEGORY_MONEY             5
#define ITEM_CATEGORY_HELD              6

// Random Item Rarity Levels
#define ITEM_RARITY_COMMON          1
#define ITEM_RARITY_UNCOMMON        2    
#define ITEM_RARITY_RARE            3
#define ITEM_RARITY_ULTRA_RARE      4      
#define ITEM_RARITY_LEGENDARY       5    

struct ItemPool {
    u32 ItemId;
    u32 Rarity;
    u32 Amount;
};

#endif //GUARD_ITEM_BALL_H
