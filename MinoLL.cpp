#include"MinoLL.h"
char LL_arr[4][4][4] = {{{'0','0','0','0'},
						{'0','0','1','0'},
						{'0','0','1','0'},
						{'0','1','1','0'}},
	 				   {{'0','0','0','0'},
						{'0','0','0','0'},
						{'0','1','1','1'},
						{'0','0','0','1'}},
	 				   {{'0','0','0','0'},
						{'0','0','1','1'},
						{'0','0','1','0'},
						{'0','0','1','0'}},
	 				   {{'0','0','0','0'},
						{'0','0','0','0'},
						{'0','1','0','0'},
						{'0','1','1','1'}}};
MinoLL::MinoLL():Mino(1){}
void MinoLL::paint()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			cout << LL_arr[rotate_index][i][j];
		cout << endl;
	}
}

