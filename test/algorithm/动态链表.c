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
    if(header->next==NULL)
    {
        printf("链表中无这个值\n");
        struct linknode *newnode=(struct linknode *)malloc(sizeof(struct linknode));
        newnode->date=newval;
        newnode->next=NULL;
        header->next=newnode;
        return;
    }
    header=header->next;
    while(header!=NULL)
    {
        if(header->date==oldval)
        {
            struct linknode *newnode=(struct linknode *)malloc(sizeof(struct linknode));
            newnode->date=newval;
            newnode->next=header->next;
            header->next=newnode;
            break;
        }
        if(header->next==NULL)
        {
            printf("链表中无这个值\n");
            struct linknode *newnode=(struct linknode *)malloc(sizeof(struct linknode));
            newnode->date=newval;
            newnode->next=NULL;
            header->next=newnode;
            break;
        }
        header=header->next;
    }
    
}
//删除某个值的节点
void delete_linklist(struct linknode *header,int delval)
{
    if(NULL==header->next)
    {
        return ;
    }
    header=header->next;
    while(header!=NULL)
    {
        if(header->next->date==delval)
        {
            struct linknode *copy=header->next->next;
            free(header->next);
            header->next=copy;
            break;
        }
        header=header->next;
    }
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
    struct linknode *p=header;
    while(p!=NULL)
    {
        struct linknode *copy=p->next;
        free(p);
        p=copy;
    }
}
//清空
void claer_linklist(struct linknode *header)
{
    struct linknode *p=header->next;
    while(p!=NULL)
    {
        struct linknode *copy=p->next;
        free(p);
        p=copy;
    }
    header->next=NULL;
}
void test()
{
    struct linknode *header=init_linknode();
    //claer_linklist(header);
    insert_linklist(header,300,400);
    delete_linklist(header,12);
    foreach_linklist(header);
}
int main()
{
    test();
    return 0;
}