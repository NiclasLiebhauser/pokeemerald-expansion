#ifndef AQUA_COMP_HOOKS_H
#define AQUA_COMP_HOOKS_H

#include "gba/types.h"

void aqua_comp_init_new_game(void);
bool8 aqua_comp_set_up_dream_toggle(void);
void aqua_comp_toggle_dream_mode(u8 task_id);

#endif /* AQUA_COMP_HOOKS_H */
