#include<iostream>
#include"fastsortList.h"

using namespace std;
bool cmp(int a,int b)
{
	return a >= b;
}

int main()
{
	fastsortList f;
	int a[5] = { 1,4,2,3,5 };
	f.quickSort(a,0,4,cmp);
	f.printsort(a, 5);
	return 0;
}
