#include "pch.h"
#include"../fastsortList/fastsortList.h"
bool cmp(int a, int b)
{
	return a >= b;
}
TEST(TestCaseName, TestName) {

	int a[] = {3,5,2,4,1};
	int b[] = {1,2,3,4,5};
	fastsortList f;
	f.quickSort(a, 0, 4, cmp);
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(a[i], b[i]);
	}
}