﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 15;
			int a[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
			t = Sum(a, n);
			Assert::AreEqual(49, t);
		}
	};
}