#include "contact1.h"

void menu()
{
    cout <<"******************"<<endl;
    cout <<"** 1.add 2.show **"<<endl;
    cout <<"* 3.delete 4.find*"<<endl;
    cout <<"*5.modify 6.clear*"<<endl;
    cout <<"***** 0.exit *****"<<endl;
    cout <<"******************"<<endl;
}
int main()
{
    CONTACT book;
    book.count=0;
    int input=0;
    do
    {
        menu();
        cin>>input;
        switch(input)
        {
        case 1:
            add(&book);
            break;
        case 2:
            show(&book);
            break;
        case 3:
            mydelete(&book);
            break;
        case 4:
            find(&book);
            break;
        case 5:
            modify(&book);
            break;
        case 6:
            clear(&book);
            break;
        case 0:
            cout<<"welcome next to use"<<endl;
            break;
        default:
            cout<<"input err"<<endl;
            break;  
        }
        system("pause");
        system("cls");
    } while (input);
    return 0;
}