#include <iostream>
#include <string>
using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};

void bubblesort(struct hero *p,int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len+i-1;j++)
        {
            if(p[j+1].age>p[j].age)
            {
                struct hero temp=p[j+1];
                p[j+1]=p[j];
                p[j]=temp;
            }
        }
    }
}
int main()
{
    struct hero heroarray[5]={
        {"liubei",23,"nan"},
        {"guanyu",22,"nan"},
        {"zhangfei",20,"nan"},
        {"zhaoyun",21,"nan"},
        {"diaochang",19,"nu"}
    };
    for(int i=0;i<5;i++)
    {
        cout<<"name:"<<heroarray[i].name
        <<"age:"<<heroarray[i].age
        <<"sex:"<<heroarray[i].sex<<endl;
    }
    bubblesort(heroarray,5);
    for(int i=0;i<5;i++)
    {
        cout<<"name:"<<heroarray[i].name
        <<"age:"<<heroarray[i].age
        <<"sex:"<<heroarray[i].sex<<endl;
    }
    return 0;
}