#include <stdio.h>
void hanoi(int n, char a, char b, char c) 
{
    if (n == 1) 
    {
        printf("%d from %c to %c\n", n, a, c);//将最大的圆盘从a移到c
        return;
    }
    hanoi(n-1, a, c, b);//将大圆盘上面的n-1个圆盘从a移动到b
    printf("%d from %c to %c\n", n, a, c);
    hanoi(n-1, b, a, c);//将b上的n-1个圆盘移动到c
}
    //   #| |#           | |             | |
    //  ##| |##          | |             | |
    // ###| |###         | |             | |
    // ---------      ---------       ---------
    //     A              B               C
int main() 
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}