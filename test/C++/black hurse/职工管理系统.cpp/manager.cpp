#include "wokermanager.h"


int main()
{   
    int choice;
    do
    {
        //实例化对象
        WorkerManager wm;
        //调用展示菜单函数
        wm.Show_Menu();
        cin>>choice;
        switch (choice)
        {
        case 0:
            wm.Exit_System();
            break;
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        default:
            cout<<"err, please again input"<<endl;
            break;
        }
        system("pause");
        system("cls");
    }while(choice);
    return 0;
}