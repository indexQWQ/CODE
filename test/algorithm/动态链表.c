#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// 定义节点数据类型
struct linknode
{
    int date;
    struct linknode *next;
};
// 初始化链表
struct linknode *init_linknode()
{
    //创建空链表(头节点)
    struct linknode *header=malloc(sizeof(struct linknode));
    header->date=0;
    header->next=NULL;
    //尾部指针
    struct linknode *preal=header;

    int val=-1;
    while(true)
    {
        printf("输入数据：");
        scanf("%d",&val);
        if(val==-1)
        {
            break;
        }
        struct linknode *newnode=malloc(sizeof(struct linknode));
        newnode->date=val;
        newnode->next=NULL;
        preal->next=newnode;
        preal=newnode;
    }
    return header;
}
//在某个值后面插入新的数据
void insert_linklist(struct linknode *header,int oldval,int newval)
{

}
//删除某个值的节点
void delete_linklist(struct linknode *header,int delval)
{

}
//遍历所有数据
void foreach_linklist(struct linknode *header)
{
    header=header->next;
    while(header!=NULL)
    {
        printf("%d\n",header->date);
        header=header->next;
    }
}
//销毁
void destory_linklist(struct linknode *header)
{

}
//清空
void claer_linklist(struct linknode *header)
{

}
void test()
{
    struct linknode *header=init_linknode();
    foreach_linklist(header);
}
int main()
{
    test();
    return 0;
}