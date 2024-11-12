//#include <stdio.h>
//int main() 
//{
//    printf("Hello, world!\n");
//    main();
//    return 0;
//}   
#include <stdio.h>
void arr(int a)
{
    if (a>9)
    {
        arr(a/10);/* code */
    }
    printf("%d ",a%10);
}
int main() 
{
    unsigned int i = 0;
    scanf("%d", &i);
    arr(i);
    return 0;
}