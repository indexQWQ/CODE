#include"contact.c"
#include <stdio.h>

// 类型的声明
// 人的信息
typedef struct peoinfo
{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
    char arrd[30];
}peoinfo;

// 通讯录

struct contact
{
    peoinfo date[100];
    int count;//记录当前通讯录中实际人的个数
}