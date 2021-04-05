#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4_1/Circle.cpp"
#include "../Lab_4_1/Rectangle.cpp"
#include "../Lab_4_1/Trapeze.cpp"
#include "../Lab_4_1/Figure.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest41
{
	TEST_CLASS(Labtest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Circle A(4);
			int S = A.Perimeter();
			Assert::AreEqual(S, 25);
		}

		TEST_METHOD(TestMethod2)
		{
			Rectangle B(4, 5);
			Assert::AreEqual(B.Square(), 20.0);
		}

		TEST_METHOD(TestMethod3)
		{
			Trapeze C(7, 5, 3, 4);
			Assert::AreEqual(C.Perimeter(), 19.0);
		}
	};
}
