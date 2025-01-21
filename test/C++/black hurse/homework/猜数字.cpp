#include <iostream>
#include <ctime>

using namespace std;

void menu()
{
    cout<<"*********************"<<endl;
    cout<<"**  1.start 0.exit **"<<endl;
    cout<<"*********************"<<endl;
    cout<<"请选择：";
}
int main()
{
    // 1.系统生成随机数
    // 2.玩家进行猜测
    // 3.进行反馈  
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu(); 
        cin>>input;
        switch (input)
        {
        case 1:
        {
            int flag=rand()%100+1;
            while(1)
            {
                int inputin=0;
                cout<<"请输入你要猜的数字：";
                cin>>inputin;
                if(inputin==flag)
                {
                    cout<<"恭喜你，猜对了！"<<endl;
                    break;
                }
                else if (inputin<flag)
                    cout<<"小了"<<endl;
                else
                    cout<<"大了"<<endl;
            }
            break;
        }
        case 0:
            cout<<"退出游戏"<<endl;
            break;
        default:
            cout<<"输入错误"<<endl;
            break;
        }
    }while(input);
    return 0;
}