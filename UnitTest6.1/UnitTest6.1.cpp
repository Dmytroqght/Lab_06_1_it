#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\Lab_06_1_it\Lab_06_1_it.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab06_1_Tests
{
    TEST_CLASS(UnitTestLab06_1)
    {
    public:
        TEST_METHOD(TestCheckCriterion)
        {
            Assert::IsTrue(checkCriterion(10));
            Assert::IsTrue(checkCriterion(-3));
            Assert::IsFalse(checkCriterion(-4));
            Assert::IsFalse(checkCriterion(0));
        }

        TEST_METHOD(TestCountElementsIterative)
        {
            int arr[] = { 10, -3, -4, 0, 5 };
            Assert::AreEqual(3, countElementsIterative(arr, 5));
        }

        TEST_METHOD(TestSumElementsIterative)
        {
            int arr[] = { 10, -3, -4, 0, 5 };
            Assert::AreEqual(12, sumElementsIterative(arr, 5));
        }

        TEST_METHOD(TestReplaceElementsIterative)
        {
            int arr[] = { 10, -3, -4, 0, 5 };
            int expected[] = { 0, 0, -4, 0, 0 };
            replaceElementsIterative(arr, 5);
            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], arr[i]);
        }

        TEST_METHOD(TestFillArrayIterative)
        {
            int arr[ARRAY_SIZE];
            fillArrayIterative(arr, ARRAY_SIZE, MIN_VALUE, MAX_VALUE);
            for (int i = 0; i < ARRAY_SIZE; i++)
                Assert::IsTrue(arr[i] >= MIN_VALUE && arr[i] <= MAX_VALUE);
        }
    };
}
