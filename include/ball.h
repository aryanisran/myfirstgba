#ifndef __BALL_H__
#define __BALL_H__

#include "gba_types.h"

typedef struct Ball
{
	s32 x, y, xDir, yDir, size;
	u16 color;
}Ball;

extern void StartBall(Ball* a_ball);
extern void InitBall(Ball* a_ball, s32 a_x, s32 a_y, s32 a_size, u16 a_color);
extern void MoveBall(Ball* a_ball);
extern void ClearBall(Ball* a_ball);
extern void DrawBall(Ball* a_ball);

#endif //__BALL_H__