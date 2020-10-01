#ifndef __PADDLE_H__
#define __PADDLE_H__

#include "gba_types.h"

typedef struct Paddle
{
	s32 x, y, width, height;
	u16 color;
}Paddle;

#endif //__PADDLE_H__