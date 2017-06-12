#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"
using namespace std;
int main()
{
cout<<"print 3 mino randomly from 7 type"<<endl;
	Mino * mino_ptr;
	Mino * mino_ptr3;
	srandom(time(NULL));
	for(int i = 0;i<3;++i)
	{
	mino_ptr3 = genMino();
	mino_ptr3->paint();
	delete mino_ptr3;
	}
cout<<"new 2 mino:"<<endl;	
	mino_ptr = new MinoT();
	mino_ptr->paint();
	delete mino_ptr;

	Mino * mino2_ptr;
	mino2_ptr = new MinoO();
	mino2_ptr->paint();
	delete mino2_ptr;
	return 0;
}

