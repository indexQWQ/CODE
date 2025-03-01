#pragma once 

#include "woker.h"

class Boss:public Woker
{
public:
    //Employer构造
    Boss(int id,string name,int depid);
    //显示个人信息
    virtual void ShowInfo();
    //获取岗位名称
    virtual string GetDeptName();
};

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "boss.cpp"