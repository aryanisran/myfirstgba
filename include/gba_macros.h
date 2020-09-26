#pragma once

#ifndef __GBA_MACROS_H__
#define __GBA_MACROS_H__

#if __GBA_MACROS__
#define __attribute__(q)
#define __builtin_strcmp(a,b) 0
#define __builtin_strlen(a) 0
#define __builtin_memcpy(a,b) 0
#define __builtin_va_list void*
#define __builtin_va_start(a,b)
#define __extension__
#endif

#ifndef	NULL
#define	NULL	(void*)0
#endif

#endif //__GBA_MACROS_H__
