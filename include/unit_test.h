#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include "kernel.h"

extern char cmd[HISTORY_COUNT][CMDBUF_SIZE];
extern int cur_his;

/* Start of remove for lab25 code */
//extern evar_entry env_var[MAX_ENVCOUNT];
//extern int env_count;
/* End of remove for lab25 code */

void unit_test();

#endif
