// #include <stdio.h>
// #include <string.h>
// int main() 
// {
//     char str[100];
//     fgets(str, 100, stdin);//从标准输入中读取一行字符串，直到遇到换行符为止
//     printf("%s", str);
//     int len = strlen(str);
//     printf("字符串长度为：%d\n", len);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main() 
// {
//     char str[100];
//     fgets(str, 100, stdin);//从标准输入中读取一行字符串，直到遇到换行符为止
//     printf("%s", str);
//     int len = strlen(str);
//     printf("字符串长度为：%d\n", len);
//     return 0;
// }

#include <stdio.h>

int main() {
    char num[100]; 
    int length = 0; 
    fgets(num, sizeof(num), stdin);
    while (num[length] != '\n' && num[length] != '\0') 
    {
        length++;
    }
    
    return 0;
}

