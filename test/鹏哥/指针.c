#include <stdio.h>
/*  int main()
{
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(long*));
    printf("%d\n",sizeof(float*));
    printf("%d\n",sizeof(double*));
    
    int a=0x11223344;
    int *p=&a;
    char *pp=&a;
    printf("%p\n",p);
    printf("%p\n",pp);
    *p=0;
    printf("%p\n",a);
    *pp=0;
    printf("%p\n",pp);
    return 0; 
}  */
/* int main()
{
    int a=0x11223344;
    int *pa=&a;
    char *pc=&a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);
    printf("%p\n",pc);
    printf("%p\n",pc+1);
    return 0;
} */

// int main()
// {
//     int arr[10]={0};
//     char *p=arr;
//     // int *p=arr
//     int i=0;
//     while(i<10)
//     {
//         *(p+i)=1;
//         i++;
//     }
//     for(int j=0;j<10;j++)
//     {
//         printf("%d ",arr[j]);
//     }
//     return 0;
// }

int *test()
{
    int a=10;
    return &a;
}
int main()
{
    int *p=test();
    *p=20;
    printf("%d\n",*p);
    return 0;
}
