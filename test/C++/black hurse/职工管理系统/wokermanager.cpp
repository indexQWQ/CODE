#include "wokermanager.h"


WorkerManager::WorkerManager()
{
    ifstream ifs;
    ifs.open(FILESTREAM,ios::in);
    if(!ifs.is_open())
    {
        cout<<"文件不存在"<<endl;
        this->count=0;
        this->array=nullptr;
        this->FILEEMPTY=true;
        ifs.close();
        return ;
    }
    char ch;
    ifs>>ch;
    if(ifs.eof())
    {
        cout<<"文件为空"<<endl;
        this->count=0;
        this->array=nullptr;
        this->FILEEMPTY=true;
        ifs.close();
        return ;
    }
    int num=this->Get_count();
    cout<<"职工人数为:"<<num<<endl;
    this->count=num;

    this->array=new Woker*[num];
    this->Init_System();
    for(int i=0;i<this->count;i++)
    {
        this->array[i]->ShowInfo();
    }
    cout<<"显示完成"<<endl;
}
void WorkerManager::Init_System()
{
    ifstream ifs;
    ifs.open(FILESTREAM,ios::in);
    int id;
    string name;
    int depid;
    int index=0;
    while(ifs>>id && ifs>>name && ifs>>depid)
    {
        Woker* temp=nullptr;
        switch (depid)
        {
        case 1:
            temp=new Employer(id,name,depid);
            break;
        case 2:
            temp=new Manager(id,name,depid);
            break;
        case 3:
            temp=new Boss(id,name,depid);
            break;
        default:
            break;
        }
        this->array[index++]=temp;
    }
    cout<<"初始化成功"<<endl;
}
int WorkerManager::Get_count()
{
    ifstream ifs;
    ifs.open(FILESTREAM,ios::in);
    int id;
    string name;
    int depid;
    int num=0;
    while(ifs>>id && ifs>>name && ifs>>depid)
    {
        num++;
    }
    ifs.close();
    return num;
}
int WorkerManager::Isexit(int id)
{
    for(int i=0;i<this->count;i++)
    {
        if((this->array[i]->id)==id)
        {
            return i;
        }
    }
    return -1;
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
void WorkerManager::Add_Syetem()
{
    cout<<"请输入要加入的人数：";
    int addnum=0;
    cin>>addnum;
    if(addnum>0)
    {
        int newsize=this->count+addnum;

        Woker** newspace=new Woker*[newsize];

        if(this->array!=nullptr)
        {
            for(int i=0;i<this->count;i++)
            {
                newspace[i]=this->array[i];
            }
        }

        for(int i=0;i<addnum;i++)
        {
            int id;
            int depid;
            string name;
            cout<<"请输入第"<<i+1<<"个新职工编号：";
            cin>>id;
            cout<<"请输入第"<<i+1<<"个新职工姓名：";
            cin>>name;
            cout<<"1.worker"<<endl;
            cout<<"2.manager"<<endl;
            cout<<"3.boss"<<endl;
            cout<<"请输入第"<<i+1<<"个新职工部门：";
            cin>>depid;

            Woker* temp=nullptr;
            switch (depid)
            {
            case 1:
                temp=new Employer(id,name,depid);
                break;
            case 2:
                temp=new Manager(id,name,depid);
                break;
            case 3:
                temp=new Boss(id,name,depid);
                break;
            default:
                break;
            }

            newspace[this->count+i]=temp;
        }
        //释放
        delete[] this->array;

        this->array=newspace;
        this->count=newsize;
        //cout<<this->count<<endl;
        this->FILEEMPTY=false;
        cout<<"成功添加"<<addnum<<"人"<<endl;
        this->Save();
    }
    else
    {
        cout<<"输入错误"<<endl;
    }
}
void WorkerManager::Show_System()
{
    //cout<<"编号"<<"\t姓名"<<"\t部门"<<"\t岗位"<<endl;
    for(int i=0;i<this->count;i++)
    {
        this->array[i]->ShowInfo();
    }
    cout<<"显示完成"<<endl;
}
void WorkerManager::Save()
{
    ofstream ofs;
    ofs.open(FILESTREAM,ios::out);
    for(int i=0;i<this->count;i++)
    {
        ofs<<this->array[i]->id<<" "
           <<this->array[i]->name<<" "
           <<this->array[i]->depid<<endl;
    }
    ofs.close();
}
void WorkerManager::Delete_System()
{
    if(this->count==0)
    {
        cout<<"空间不足"<<endl;
        return;
    }
    else
    {
        cout<<"请输入要删除的职工号：";
        int id=0;
        cin>>id;
        int index=this->Isexit(id);
        if(index!=-1)
        {
            //Woker* temp=array[this->count-1];
            for(int i=index;i+1<this->count;i++)
            {
                array[i]=array[i+1];
            }
            //delete temp;
            this->count--;
            cout<<"删除成功"<<endl;
            this->Save();
        }
        else
        {
            cout<<"查无此人"<<endl;
        }
        
    }
}
void WorkerManager::Mod_System()
{
    cout<<"请输入要修改的职工号：";
    int id=0;
    cin>>id;
    int index=this->Isexit(id);
    if(index!=-1)
    {
        int depid;
        string name;
        cout<<"请输入新编号：";
        cin>>id;
        cout<<"请输入新姓名：";
        cin>>name;
        cout<<"1.worker"<<endl;
        cout<<"2.manager"<<endl;
        cout<<"3.boss"<<endl;
        cout<<"请输入个新部门：";
        cin>>depid;
        Woker* temp=NULL;
        switch (depid)
        {
        case 1:
            temp=new Employer(id,name,depid);
            break;
        case 2:
            temp=new Manager(id,name,depid);
            break;
        case 3:
            temp=new Boss(id,name,depid);
            break;
        default:
            break;
        }
        delete this->array[index];
        array[index]=temp;
        cout<<"修改成功"<<endl;
        this->Save();
    }
    else
    {
        cout<<"查无此人"<<endl;
    }
}
void WorkerManager::Find_System()
{
    if(this->count==0)
    {
        cout<<"空间不足"<<endl;
        return;
    }
    else
    {
        cout<<"请输入找的职工号：";
        int id=0;
        cin>>id;
        int index=this->Isexit(id);
        if(index!=-1)
        {
            this->array[index]->ShowInfo();
        }
        else
        {
            cout<<"查无此人"<<endl;
        }
        
    }
}
void WorkerManager::Sort_System()
{
    for(int i=0;i<this->count-1;i++)
    {
        for(int j=i;j<this->count-1;j++)
        {
            if(this->array[j]->id >this->array[j+1]->id )
            {
                Woker* temp=this->array[j];
                this->array[j]=this->array[j+1];
                this->array[j+1]=temp;
            }
        }
    }
    cout<<"排序成功"<<endl;
}
void WorkerManager::Clear_System()
{
    ofstream ofs(FILESTREAM,ios::trunc);
    ofs.close();
    if(!this->array)
    {
        for(int i=0;i<this->count;i++)
        {
            if(this->array[i]!=nullptr)
            {
                delete array[i];
            }
        }
    }
    delete array;
    this->count=0;
    cout<<"清空成功"<<endl;
}
WorkerManager::~WorkerManager()
{
    if(this->array!=NULL)
    {
        delete[] array;
        this->array=NULL;
    }
}