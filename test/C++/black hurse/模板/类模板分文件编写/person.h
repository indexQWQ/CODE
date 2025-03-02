#pragma once
template<class T1,class T2>
class person
{
public:
    person(T1 age,T2 name);
    void show();
    T1 age;
    T2 name;
};

#include <iostream>
#include <string>
using namespace std;