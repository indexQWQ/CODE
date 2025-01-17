

// #include <stdio.h>
// void main()              
//  { 
// 	int a[]={2,3,4,5,6};
// 	int *p1;
//     char *p2="computer\n";

// 	p1=a;
// 	printf("%d\n",p1+2);
// 	printf("%d\n",*(p1+2));

// 	p1=a+2;
// 	printf("%d\n",p1+2);
// 	printf("%d\n",*(p1+2));
	
// 	printf(p2+2);
// 	printf("%s",p2+2);
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    scanf("%s",arr);
    fgets(arr, sizeof(arr), stdin);
    int len=strlen(arr);
    printf("%d",len);
    return 0;
}