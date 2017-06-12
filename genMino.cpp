#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 7
#define MINO_S 0
#define MINO_I 1
#define MINO_T 2
#define MINO_L 3
#define MINO_LL 4
#define MINO_SS 5
#define MINO_O 6
Mino * genMino()
{
	int mino_type;
	Mino * ptr;

	mino_type = random() %  NUM_MINO;
	//mino_type = random() % 2 + 4;
	switch(mino_type) {
		case MINO_S:
			ptr = new MinoS();
			break;
		case MINO_I:
			ptr = new MinoI();
			break;
		case MINO_T:
			ptr = new MinoT();
			break;
		case MINO_L:
			ptr = new MinoL();
			break;
		case MINO_LL:
			ptr = new MinoLL();
			break;
		case MINO_SS:
			ptr = new MinoSS();
			break;
		case MINO_O:
                        ptr = new MinoO();
                        break;
	}
	return ptr;
}

