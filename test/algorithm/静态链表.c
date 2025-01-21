#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 链表节点类型定义
struct linknode
{
    int date;
    struct linknode *next;
};
//静态链表
void test1()
{
    struct linknode node1={10,NULL};
    struct linknode node2={20,NULL};
    struct linknode node3={30,NULL};
    struct linknode node4={40,NULL};
    struct linknode node5={50,NULL};
    struct linknode node6={60,NULL};
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=&node5;
    node5.next=&node6;
    // 如何遍历这个链表？
    // 先定义一个辅助的指针变量
    struct linknode *p=&node1;
    while(p!=NULL)
    {
        printf("%d\n",(p->date));
        // 指针移动到下一个元素的首地址
        p=p->next;
    }
}
int main()
{
    test1();
    return 0;
}