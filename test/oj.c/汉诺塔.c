#include <stdio.h>
void hanoi(int n, char f, char a, char t) 
{
    if (n == 1) 
    {
        printf("%d from %c to %c\n", n, f, t);
        return;
    }
    hanoi(n-1, f, t, a);
    printf("%d from %c to %c\n", n, f, t);
    hanoi(n-1, a, f, t);
}

int main() 
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}