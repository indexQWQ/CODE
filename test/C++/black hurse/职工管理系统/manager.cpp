#include "manager.h"

//Employer构造
Manager::Manager(int id,string name,int depid)
{
    this->id=id;
    this->name=name;
    this->depid=depid;
}
//显示个人信息
void Manager::ShowInfo()
{
    cout<<"职工编号："<<this->id
        <<"\t职工姓名："<<this->name
        <<"\t岗位："<<this->GetDeptName()<<endl;
}
//获取岗位名称
string Manager::GetDeptName()
{
    return string("经理");
}