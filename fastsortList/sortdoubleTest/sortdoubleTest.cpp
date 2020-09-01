#include "pch.h"
#include "CppUnitTest.h"
#include "../fastsortList/fastsortList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

bool cmpdouble(double a, double b)
{
	return a >= b;
};
namespace sortdoubleTest
{
	TEST_CLASS(sortdoubleTest)
	{
	public:
		TEST_METHOD_INITIALIZE(TestMethod0) {
			Logger::WriteMessage("测试开始");
		};
		TEST_METHOD_CLEANUP(TestMethodn) {
			Logger::WriteMessage("测试结束");
		};
		TEST_METHOD(TestMethod1)
		{
			int i;
			double a[] = { 1.2, 3.4, 0.1, 1.1, 2.2, 2.9 };
			double b[] = { 0.1, 1.1, 1.2, 2.2, 2.9, 3.4 };
			fastsortList f;
			f.quickSort(a, 0, 5, cmpdouble);
			for (i = 0; i < 6; i++)
			{
				Assert::AreEqual(a[i], b[i]);
			}
			Logger::WriteMessage("测试方法2");

		}
	};
}
