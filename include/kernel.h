#ifndef KERNEL_H
#define KERNEL_H

#include "task.h"
#include "file.h"
#include "event-monitor.h"
#include <stddef.h>

#if 1 // for lab27 test; we copy from kernel.c
#define MAX_CMDNAME 19
#define MAX_ARGC 19
#define MAX_CMDHELP 1023
#define HISTORY_COUNT 8
#define CMDBUF_SIZE 64
#define MAX_ENVCOUNT 16
#define MAX_ENVNAME 15
#define MAX_ENVVALUE 63
#endif

#endif
