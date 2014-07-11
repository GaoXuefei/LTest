#ifndef TESTCASE_H_INCLUDED
#define TESTCASE_H_INCLUDED

#include "LTest.h"
#include <string>
#include <list>

string str = "hallo";
list<string> ExternTestSuiteExample = {
    LTest::addTest("testCase", [&](){cout<<"testCase"<<str<<endl;}),
    LTest::addTest("testCase2", [](){cout<<"testCase2"<<endl;}),

    LTest::addTest("fail cout", [](){cout<<"testCase2"<<endl;return false;})
};


#endif // TESTCASE_H_INCLUDED
