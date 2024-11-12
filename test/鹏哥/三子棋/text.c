#include <stdio.h>
#include <game.h>
void menu() 
{
    printf("1.start game\n");
    printf("2.exit game\n");
}
void game() 
{
    char board[ROW][COL]= {0};
}
void test() 
{
    int input;
    printf("please input 1 or 2:");
    scanf("%d", &input); 
    switch(input) 
    {
    case 1:
        printf("start game");
        game();
        break;
    case 2:
        printf("exit game");
        break;
    default:
        printf("invalid input");
        break;
    }
}
int main() 
{
    test();
    return 0;
}