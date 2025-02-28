#include "wokermanager.h"
// #include <iostream>
// using namespace std;

class WorkerManager
{
public:
    WorkerManager();
    void Show_Menu();
    void Exit_System();
    ~WorkerManager();
};

WorkerManager::WorkerManager()
{

}
void WorkerManager::Show_Menu()
{
    cout<<"******************************"<<endl;
    cout<<"***** welcome to us menu *****"<<endl;
    cout<<"******       0.exit      *****"<<endl;
    cout<<"******       1.add       *****"<<endl;
    cout<<"******       2.show      *****"<<endl;
    cout<<"******       3.delete    *****"<<endl;
    cout<<"******       4.modify    *****"<<endl;
    cout<<"******       5.find      *****"<<endl;
    cout<<"******       6.sort      *****"<<endl;
    cout<<"******       7.clear     *****"<<endl;
    cout<<"******************************"<<endl;
    cout<<endl;
    cout<<"please input you choice:";
}
void WorkerManager::Exit_System()
{
    cout<<"think to use"<<endl;
}
WorkerManager::~WorkerManager()
{

}