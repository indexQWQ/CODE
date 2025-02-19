#include "contact1.h"

typedef struct pop
{
    string name;
    string sex;
    int age;
    string tele;
    string ads;
}POP;

typedef struct contact
{
    POP inform[100];
    int count;
}CONTACT;

void add(CONTACT *p)
{
    cout<<"add pop"<<endl;
    cout<<"please write name:";
    cin>>p->inform[p->count].name;
    cout<<"please write age:";
    cin>>p->inform[p->count].age;
    cout<<"please write sex:";
    cin>>p->inform[p->count].sex;
    cout<<"please write tele:";
    cin>>p->inform[p->count].tele;
    cout<<"please write ads:";
    cin>>p->inform[p->count].ads;
    p->count++;
}

void show(CONTACT *p)
{
    for(int i=0;i<p->count;i++)
    {
        cout<<"name:"<<p->inform[i].name<<" age:"<<p->inform[i].age<<endl;
    }
    if(p->count==0)
    {
        cout<<"contact no pop"<<endl;
    }
}

int flag(CONTACT *p,string name)
{
    for(int i=0;i<p->count;i++)
    {
        if(name==p->inform[i].name)
        {
            return i;
        }
    }
    return -1;
}

void mydelete(CONTACT *p)
{
    cout<<"delete pop name:";
    string name;
    cin>>name;
    int ret=flag(p,name);
    if(ret==-1)
    {
        cout<<"no this pop"<<endl;
    }
    else
    {
        for(int i=ret;i+1<p->count;i++)
        {
            p->inform[i]=p->inform[i+1];
        }
        p->count--;
        cout<<"delete success"<<endl;
    }
}

void find(CONTACT *p)
{
    cout<<"find pop name:";
    string name;
    cin>>name;
    int ret=flag(p,name);
    if(ret==-1)
    {
        cout<<"no this pop"<<endl;
    }
    else
    {
        cout<<"find success"<<endl;
        cout<<"name:"<<p->inform[ret].name<<" age:"<<p->inform[ret].age<<endl;
    }
}

void modify(CONTACT *p)
{
    cout<<"modify pop name:";
    string name;
    cin>>name;
    int ret=flag(p,name);
    if(ret==-1)
    {
        cout<<"no this pop"<<endl;
    }
    else
    {
        cout<<"find success"<<endl;
        cout<<"modify pop"<<endl;
        cout<<"please write name:";
        cin>>p->inform[p->count].name;
        cout<<"please write age:";
        cin>>p->inform[p->count].age;
        cout<<"please write sex:";
        cin>>p->inform[p->count].sex;
        cout<<"please write tele:";
        cin>>p->inform[p->count].tele;
        cout<<"please write ads:";
        cin>>p->inform[p->count].ads;
    }
}

void clear(CONTACT *p)
{
    p->count=0;
}