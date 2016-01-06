#include <iostream>
using namespace std;

template<class param>
param funkcja(param a)
{
	//a = 3;
	return a;
};

//float funkcja(float a)
//{
//	a = 0;
//	return a;
//};

void main()
{
	float i = 65.54656;
	cout << i << endl;
	float j = funkcja<float>(i);
	cout << j << endl;

















	getchar();
}