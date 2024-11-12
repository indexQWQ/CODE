#include <stdio.h>
#include <ctype.h> // 包含字符处理函数

int main() 
{
    int n;
    scanf("%d", &n); // 读取行数

    for (int i = 0; i < n; i++) 
    {
        char line[51]; // 假设每行不超过50个字符加上一个'\0'
        fgets(line, 51, stdin); // 读取一行

        for (int j = 0; line[j] != '\0'; j++) 
        {
            if (line[j] == ' ' || j == 0)// 如果是单词的开始或者是行的开始
            {
                line[j] = toupper(line[j]); // 转换为大写
            } 
            else 
            {
                line[j] = tolower(line[j]); // 转换为小写
            }
        }

        printf("%s", line); // 输出处理后的行
    }

    return 0;
}