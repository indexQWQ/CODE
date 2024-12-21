#include "contact.h"

void menu()
{
    printf("********************************\n");
    printf("****1.add 2.del 3.search********\n");
    printf("****4.modefy 5.show 6.sort******\n");
    printf("****0.exit**********************\n");
    printf("********************************\n");
}
int main()
{
    peoinfo date[100];
    int count=0;
    int input=0;
    do
    {
        menu();
        printf("please choice:");
        scanf("%d",&input);
        switch (input)
        {
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
        case 0:
            printf("exit\n");
            break;
        default:
            break;
        }
    } while (input);
    return 0;
}