#pragma once

#include <string>
#include <iostream>

using namespace std;

template<class T>
class myarray
{
public:
    //有参构造
    myarray(int capacity)
    {
        cout<<"有参构造"<<endl;
        mycapacity=capacity;
        this->paddress=new T(capacity);
        mysize=0;
    }

    //拷贝构造
    myarray(const myarray& arr)
    {
        cout<<"拷贝构造"<<endl;
        this->mycapacity=arr.mycapacity;
        this->mysize=arr.mysize;
        //深拷贝
        this->paddress=new T[arr.mycapacity];
        //将arr中的数据拷贝
        for(int i=0;i<this->mysize;i++)
        {
            this->paddress[i]=arr.paddress[i];
        }
    }
    //operator=防止浅拷贝
    myarray& operator=(const myarray& arr)
    {
        cout<<"operator="<<endl;
        if(this->paddress!=NULL)
        {
            delete[] this->paddress;
            this->paddress=nullptr;
            this->mycapacity=0;
            this->mysize=0;
        }
        this->mycapacity=arr.mycapacity;
        this->mysize=arr.mysize;
        //深拷贝
        this->paddress=new T[arr.mycapacity];
        //将arr中的数据拷贝
        for(int i=0;i<this->mysize;i++)
        {
            this->paddress[i]=arr.paddress[i];
        }
        return *this;
    }

    //尾插
    void Push_Back(const T& val)
    {
        //判断容量
        if(this->mycapacity==this->mysize)
        {
            return ;
        }
        this->paddress[this->mysize]=val;
        this->mysize++;
    }
    //尾删
    void Pop_Back()
    {
        if(this->mysize==0)
            return;
        this->mysize--;
    }
    //通过下标的方式访问数组
    T& operator[](int index)
    {
        return this->paddress[index];
    }
    //返回数组容量
    int GetCapacity()
    {
        return this->mycapacity;
    }
    //返回数组大小
    int GetSixe()
    {
        return this->mysize;
    }

    void myprint()
    {
        for(int i=0;i<this->mysize;i++)
        {
            cout<<this->paddress[i]<<" ";
        }
        cout<<endl;
    }
    //析构函数
    ~myarray()
    {
        if(this->paddress!=nullptr)
        {
            cout<<"析构函数"<<endl;
            delete[] this->paddress;
            this->paddress=nullptr;
        }
    }
private:
    T* paddress;//指针指向堆区开辟的真实数组
    int mycapacity;
    int mysize;
};








