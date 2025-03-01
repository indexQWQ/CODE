#pragma once
#ifndef WOKERMANAGER_H
#define WOKERMANAGER_H
#include "woker.h"
#include "employer.h"
#include "manager.h"
#include "boss.h"

#define FILESTREAM "C:\\Users\\Lenovo\\OneDrive\\desktop\\555.txt"
class WorkerManager
{
public:
    WorkerManager();
    void Show_Menu();
    void Exit_System();
    void Add_Syetem();
    void Show_System();
    void Save();
    int Get_count();
    void Init_System();
    void Delete_System();
    int Isexit(int id);
    void Mod_System();
    void Find_System();
    void Sort_System();
    void Clear_System();
    //记录人数
    int count;
    //员工数组指针
    Woker** array;
    bool FILEEMPTY;
    ~WorkerManager();
};

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

#include "wokermanager.cpp"



#endif