#include "wokermanager.h"


int main()
{   
    int choice;
    //实例化对象
    WorkerManager wm;
    // Woker *a=new Employer({1,"index",1});
    // a->ShowInfo();
    do
    {    
        //调用展示菜单函数
        wm.Show_Menu();
        cin>>choice;
        switch (choice)
        {
        case 0:
            wm.Exit_System();
            break;
        case 1:
            wm.Add_Syetem();
            break;
        case 2:
            wm.Show_System();
            break;
        case 3:
            wm.Delete_System();
            break;
        case 4:
            wm.Mod_System();
            break;
        case 5:
            wm.Find_System();
            break;
        case 6:
            wm.Sort_System();
            break;
        case 7:
            wm.Clear_System();
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