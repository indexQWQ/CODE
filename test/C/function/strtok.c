#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world hallway";
    char *token;
    token = strtok(str, " ");
    while (token!= NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
        printf("token = %s\n", token);
    }
    
    return 0;
}