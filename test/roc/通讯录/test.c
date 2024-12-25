//1.静态的版本
//2.动态的版本
//3.文件的版本
#include "contact.h"
enum Option
{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT
};
void menu()
{
    printf("********************************\n");
    printf("****1.add 2.del 3.search********\n");
    printf("****4.modify 5.show 6.sort******\n");
    printf("****0.exit**********************\n");
    printf("********************************\n");
}
int main()
{
    int input=0;
    contact con;// 通讯录
    // 初始化通讯录
    initcontact(&con);
    do
    {
        menu();
        printf("please choice:");
        scanf("%d",&input);
        system("cls");
        switch (input)
        {
        case ADD:
            addcontact(&con);
            break;
        case DEL:
            delcontact(&con);
            break;
        case SEARCH:
            //findbyname(&con);
            searchcontact(&con);
            break;
        case MODIFY:
            modifycontact(&con);
            break;
        case SHOW:
            showcontact(&con);
            break;
        case SORT:
            sortcontact(&con);
            break;
        case EXIT:
            destroycontact(&con);
            printf("exit\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    return 0;
}




