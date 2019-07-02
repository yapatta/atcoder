#include <iostream>

using namespace std;

int main(void)
{
	//左辺参照(lvalueの値はxの値に依存(右辺値が束縛されている)、lvalueはxのエイリアス)
	int x = 4;
	int& lvalue = x;
	cout << lvalue << endl;
	x = 0;
	cout << lvalue << endl;
	int y = 6;
	int&& rvalue = y;
	rvalue = 7;
	cout << y << endl;
	//左辺参照


	return 0;
}