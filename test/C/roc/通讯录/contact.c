#include "contact.h"
// 类型的声明
// 人的信息
typedef struct Peoinfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char arrd[MAX_ADDR];
}peoinfo;

// 通讯录
// 静态的版本
// typedef struct Contact
// {
//     peoinfo date[MAX];
//     int count;//记录当前通讯录中实际人的个数
// }contact;

// 动态的版本
typedef struct Contact
{
    peoinfo *date;
    int count;//记录当前通讯录中实际人的个数
    int capacity;// 当前通讯录的容量
}contact;
// 初始化通讯录
// 静态的版本
// void initcontact(contact * pc)
// {
//     pc->count=0;
//     memset(pc->date,0,sizeof(pc->date));
// }

// 扩容函数
void checkcapacity(contact *pc)
{
    peoinfo *p=(peoinfo *)realloc(pc->date,(pc->capacity+2)*sizeof(peoinfo));
    if(p==NULL)
    {
        printf("addcontact:%s\n",strerror(errno));
        return ;
    }
    else
    {
        pc->date=p;
        pc->capacity+=2;
        printf("增容成功\n");
    }
}
// 加载通讯录
void loadcontact(contact * pc)
{
    // assert(pc);
    FILE* pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\CODE1\\test\\roc\\通讯录\\contact.txt","r");
    if(pf==NULL)
    {
        perror("load_fopen");
        return ;
    }
    peoinfo buf={0};
    while(fread(&buf,sizeof(peoinfo),1,pf)==1)
    {
        if(pc->count==pc->capacity)
        {
            checkcapacity(pc);
        }
        //memcmp(pc->date+pc->count,&buf,sizeof(peoinfo));
        pc->date[pc->count]=buf;//结构体相互之间可以直接赋值
        pc->count++;
    }
    fclose(pf);
    pf=NULL;
}
// 动态的版本
int initcontact(contact * pc)
{
    pc->count=0;
    pc->date=(peoinfo *)calloc(DEFINE_SZ,sizeof(peoinfo));
    if(pc->date==NULL)
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    pc->capacity=DEFINE_SZ;
    // 加载文件的信息到通讯录中
    loadcontact(pc);
    return 0;
}

// 销毁通讯录
void destroycontact(contact *pc)
{
    free(pc->date);
    pc->date=NULL;
}
// 增加联系人
// 静态的版本
// void addcontact(contact* pc)
// {
//     //assert(pc);
//     if(pc->count==100)
//     {
//         printf("满了\n");
//         return 0;
//     }
//     printf("请输入名字：");
//     scanf("%s",(pc->date)[pc->count].name);
//     printf("请输入年龄：");
//     scanf("%d",&((pc->date)[pc->count].age));
//     printf("请输入性别：");
//     scanf("%s",(pc->date)[pc->count].sex);
//     printf("请输入电话：");
//     scanf("%s",(pc->date)[pc->count].tele);
//     printf("请输入地址：");
//     scanf("%s",(pc->date)[pc->count].arrd);
//     pc->count++;
//     //printf("%d\n",pc->count);
//     printf("添加成功\n");
// }
// 动态的版本
void addcontact(contact* pc)
{
    //assert(pc);
    // 如果空间不够增加容量
    if(pc->count==pc->capacity)
    {
        checkcapacity(pc);
    }
    printf("请输入名字：");
    scanf("%s",(pc->date)[pc->count].name);
    printf("请输入年龄：");
    scanf("%d",&((pc->date)[pc->count].age));
    printf("请输入性别：");
    scanf("%s",(pc->date)[pc->count].sex);
    printf("请输入电话：");
    scanf("%s",(pc->date)[pc->count].tele);
    printf("请输入地址：");
    scanf("%s",(pc->date)[pc->count].arrd);
    pc->count++;
    //printf("%d\n",pc->count);
    printf("添加成功\n");
}
int findbyname(const contact *pc,const char* name)// 返回下标
{

    int i=0;
    for(i=0;i<pc->count;i++)
    {
        if(strcmp((pc->date)[i].name,name)==0)
        {
            return i;
        }
    }
    return -1;
}
// 查找联系人
void searchcontact(const contact *pc)
{
    printf("请输入要找的人：");
    char name[MAX_NAME]={0};
    scanf("%s",name);
    int i=findbyname(pc,name);
    if(i==-1)
    {
        printf("查无此人\n");
    }
    else
    {
        printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n","name","age","sex","tele","arrd");
        printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\t\n",(pc->date)[i].name
        ,(pc->date)[i].age
        ,(pc->date)[i].sex
        ,(pc->date)[i].tele
        ,(pc->date)[i].arrd);
    }   
}
// 修改联系人
void modifycontact(contact *pc)
{
    //assert(pc);
    printf("请输入修改的人：");
    char name[MAX_NAME]={0};
    scanf("%s",name);
    int i=findbyname(pc,name);
    if(i==-1)
    {
        printf("查无此人\n");
    }
    else
    {
        printf("开始修改\n");
        printf("请输入名字：");
        scanf("%s",(pc->date)[i].name);
        printf("请输入年龄：");
        scanf("%d",&((pc->date)[i].age));
        printf("请输入性别：");
        scanf("%s",(pc->date)[i].sex);
        printf("请输入电话：");
        scanf("%s",(pc->date)[i].tele);
        printf("请输入地址：");
        scanf("%s",(pc->date)[i].arrd);
        printf("修改后为：\n");
        printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n","name","age","sex","tele","arrd");
        printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\t\n",(pc->date)[i].name
        ,(pc->date)[i].age
        ,(pc->date)[i].sex
        ,(pc->date)[i].tele
        ,(pc->date)[i].arrd);
    } 
}
// 删除指定通讯人
void delcontact(contact *pc)
{
    //assert(pc);
    if(pc->count==0)
    {
        printf("无人可以删除\n");
        return ;
    }
    printf("请输入要删除的人的名字：");
    char name[MAX_NAME]={0};
    scanf("%s",name);
    // 查找
    // 删除
    int flag=findbyname(pc,name);
    if(flag==-1)
    {
        printf("查无此人\n");
    }
    else
    {
        int i=0;
        for(i=flag;i+1<pc->count;i++)
        {
            (pc->date)[i]=(pc->date)[i+1];
        }
        pc->count--;
    }
}
// 排序联系人
int sortbyname(const void*p1,const void*p2)
{
    //assert(p1 && p2);
    return strcmp(((peoinfo *)p1)->name,((peoinfo *)p2)->name);
}
int sortbyage(const void*p1,const void*p2)
{
    //assert(p1 && p2);
    return (((peoinfo *)p1)->age-((peoinfo *)p2)->age);
}
void sortcontact(contact * pc)
{
    //assert(pc);
    printf("****1.name  2.age********\n");
    printf("选择排序方式：");
    int input=0;
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        qsort((pc->date),pc->count,sizeof(peoinfo),sortbyname);
        break;
    case 2:
        qsort((pc->date),pc->count,sizeof(peoinfo),sortbyage);
        break;
    default:
        break;
    }
    printf("排序成功\n");
    
}
// 打印通讯录
void showcontact(const contact* pc)//const 保护
{
    //assert(pc);
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n","name","age","sex","tele","arrd");
    int i=0;
    for(i=0;i<pc->count;i++)
    {
        printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\t",(pc->date)[i].name
        ,(pc->date)[i].age
        ,(pc->date)[i].sex
        ,(pc->date)[i].tele
        ,(pc->date)[i].arrd);
        printf("\n");
    }
}

// 保存通讯录
void savecontact(const contact* pc)
{
    //assert(pc);
    FILE* pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\CODE1\\test\\roc\\通讯录\\contact.txt","w");
    if(pf==NULL)
    {
        perror("fopen");
        return;
    }
    // fprintf(pf,"%-20s\t%-5s\t%-5s\t%-12s\t%-30s\t\n","name","age","sex","tele","arrd");
    // int i=0;
    // for(i=0;i<pc->count;i++)
    // {
    //     fprintf(pf,"%-20s\t%-5d\t%-5s\t%-12s\t%-30s\t",(pc->date)[i].name
    //     ,(pc->date)[i].age
    //     ,(pc->date)[i].sex
    //     ,(pc->date)[i].tele
    //     ,(pc->date)[i].arrd);
    //     printf("\n");
    // }
    // 转换成二进制
    int i=0;
    for(i=0;i<pc->count;i++)
    {
        fwrite(pc->date+i,sizeof(peoinfo),1,pf);
    }
    fclose(pf);
    pf=NULL;
}