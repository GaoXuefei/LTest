#ifndef LTEST11_H_INCLUDED
#define LTEST11_H_INCLUDED

#include <string>
#include <functional>

using namespace std;

template<typename LT, typename FunctType>
void boolLambdaAdd(string testName, FunctType test){
    LT::addTestFunction(testName, test);
}

template<typename LT, typename FunctType>
void voidLambdaAdd(string testName, FunctType test){
    function<bool()> foo = [&](){test(); return true;};
    LT::addTestFunction(testName, foo);
}

template<typename LT, typename FunctType>
void boolFunctionAdd(string testName, FunctType test){
    LT::addTestFunction(testName, test);
}

template<typename LT, typename FunctType>
void voidFunctionAdd(string testName, FunctType test){
    function<bool()> foo = [=](){test(); return true;};
    LT::addTestFunction(testName, foo);
}

#endif // LTEST11_H_INCLUDED
