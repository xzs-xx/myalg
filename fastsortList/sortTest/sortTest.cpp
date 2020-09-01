#include "pch.h"
#include "CppUnitTest.h"
#include "../fastsortList/fastsortList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

bool cmp(int a, int b)
{
	return a >= b;
};
namespace sortTest
{
	TEST_CLASS(sortTest)
	{
	public:
		TEST_METHOD_INITIALIZE(TestMethod0){
			Logger::WriteMessage("���Կ�ʼ");
		};
		TEST_METHOD_CLEANUP(TestMethodn) {
			Logger::WriteMessage("���Խ���");
		};
		TEST_METHOD(TestMethod1)
		{
			int i;
			int a[] = { 1, 4, 2, 6, 3, 5 ,7};
			fastsortList f;
			f.quickSort(a, 0, 6, cmp);
			for (i = 0; i < 7; i++)
			{
				Assert::AreEqual(a[i], i + 1);
			}
			Logger::WriteMessage("���Է���1");
		};
		
	};
}
