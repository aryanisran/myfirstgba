#ifndef __BALL_H__
#define __BALL_H__

#include "gba_types.h"

typedef struct Ball
{
	s32 x, y, xDir, yDir, size;
	u16 color;
}Ball;

#endif //__BALL_H__