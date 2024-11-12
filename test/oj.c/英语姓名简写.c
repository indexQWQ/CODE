// #include <stdio.h>
// #include <string.h>
// struct name 
// {
//     char first_name[10];
//     char middle_name[10];
//     char last_name[10];
    
// };
// int main() 
// {
    
//     struct name n;
//     scanf("%s.%s.%s",n.first_name,n.middle_name,n.last_name);
//     printf("%s.%s\n",n.first_name,n.middle_name);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     char full_name[40];  // 用于存储输入的全名
//     char first_name[20]; // 用于存储教名
//     char middle_name[20]; // 用于存储自取名

//     // 输入全名
//     scanf("%s", full_name);

//     // 使用 strtok 函数分割全名
//     char *token = strtok(full_name, ".");
//     if (token != NULL) 
//     {
//         strcpy(first_name, token); // 获取教名
//         token = strtok(NULL, ".");  // 获取自取名
//     }
    
//     if (token != NULL) 
//     {
//         strcpy(middle_name, token); // 获取自取名
//     }

    
//     printf("%s.%s\n", first_name, middle_name);

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() 
{
    char all[100];
    char first[100];
    char last[100];
    scanf("%s", all);
    char *p = strtok(all,"."); 
    if (p!= NULL) 
    {
        strcpy(first,p);
        p=strtok(NULL,".");
    }
    if(p!= NULL)
    {
        strcpy(last,p);
    }
    printf("%s.%s\n", first, last);
    return 0;
}