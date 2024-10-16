#include "pch.h"
#include "CppUnitTest.h"
#include "../PDC_LAB2/main.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestImplication)
        {
           
            Assert::AreEqual(fn(false, false, false), true);  // !p -> true
            Assert::AreEqual(fn(false, false, true), true);   // !p -> true
            Assert::AreEqual(fn(false, true, false), true);   // !p -> true
            Assert::AreEqual(fn(false, true, true), true);    // !p -> true
            Assert::AreEqual(fn(true, false, false), false);  // p -> false (q && r == false)
            Assert::AreEqual(fn(true, false, true), false);   // p -> false (q && r == false)
            Assert::AreEqual(fn(true, true, false), false);   // p -> false (q && r == false)
            Assert::AreEqual(fn(true, true, true), true);     // p -> true (q && r == true)
        }
    };
}
