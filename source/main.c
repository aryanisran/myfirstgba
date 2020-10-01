#include "gba_macros.h"
#include "gba_types.h"
#include "gba_gfx.h"
#include "gba_drawing.h"
#include "gba_mathUtil.h"

//include Pong related structures and functions
#include "ball.h"
#include "paddle.h"

int main()
{
	//set GBA rendering context to MODE 3 Bitmap Rendering
	REG_DISPCNT = VIDEOMODE_3 | BGMODE_2;

	gba_seed_rand(14);
	Paddle p1;
	InitPaddle(&p1, 10, 60, 8, 40, setColor(0, 0, 31));
	Paddle p2;
	InitPaddle(&p2, SCREEN_W - 18, 60, 8, 40, setColor(31, 0, 0));
	Ball ball;
	InitBall(&ball, 115, 75, 10, setColor(31, 31, 31));
	while(1){//loop forever
		vsync();
		ClearBall(&ball);
		ClearPaddle(&p1);
		ClearPaddle(&p2);

		MoveBall(&ball);

		drawLine(10, 4, 230, 4, setColor(31, 31, 31));
		drawLine(230, 156, 10, 156, setColor(31, 31, 31));
		DrawBall(&ball);
		DrawPaddle(&p1);
		DrawPaddle(&p2);
	}

	return 0;
}