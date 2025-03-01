#include "employer.h"

//Employer构造
Employer::Employer(int id,string name,int depid)
{
    this->id=id;
    this->name=name;
    this->depid=depid;
}
//显示个人信息
void Employer::ShowInfo()
{
    cout<<"职工编号："<<this->id
        <<"\t职工姓名："<<this->name
        <<"\t岗位："<<this->GetDeptName()<<endl;
}
//获取岗位名称
string Employer::GetDeptName()
{
    return string("员工");
}