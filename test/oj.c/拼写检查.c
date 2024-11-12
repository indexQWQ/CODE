/* #include <stdio.h>

int main()
{
    int l=0;
    scanf("%d",&l);
    char word[l][100];
    char str[1000];
    for(int m=0;m<l+1;m++)
    {
        
        int i=0;
        while((str[i]=getchar())!='\n')
        {
            i++;
        }
        int j;
        for(j=0;j<i;j++)
        {
        
            if(str[j]>57||str[j]<48)
            {
                if(j==0)
                {
                    if(str[j]>=97 && str[j]<=122)
                        word[m][j]=(str[j]-32);
                    else
                        word[m][j]=(str[j]);
                }
                else
                {
                    if(str[j]>=65 && str[j]<=90)
                        word[m][j]=(str[j]+32);
                    else
                        word[m][j]=(str[j]);#include <stdio.h>
                }
            } 
        }
    }
    for(int p=0;p<l+1;p++)
    {
        for(int n=0;n<(strlen(word[p]));n++)
        {
            printf("%c",word[p][n]);
        }
        printf("\n");
    }
    return 0;
} */
// #include <stdio.h>
// #include <string.h>

// #define MAX_WORDS 100
// #define MAX_LENGTH 1000

// int main() 
// {
//     int l = 0;
//     scanf("%d", &l) ;       
//     char word[MAX_WORDS][MAX_LENGTH];// 定义一个数组，用来存放输入的单词
//     getchar(); // 清除输入缓冲区的换行符

//     for (int m = 0; m < l; m++) 
//     {
//         fgets(word[m], sizeof(word[m]), stdin);// 读取一行输入
//         if ( fgets(word[m], sizeof(word[m]), stdin)== NULL) 
//         {
//             fprintf(stderr, "读取单词时出错。\n");
//             return 1;
//         }

//         // 去除换行符
//         size_t len = strlen(word[m]);// 获取字符串长度
//         if (len > 0 && word[m][len - 1] == '\n') // 去除换行符
//         {
//             word[m][len - 1] = '\0';
//         }

//         // 字符大小写转换
//         if (word[m][0] >= 'a' && word[m][0] <= 'z') 
//         {
//             word[m][0] -= 32;  // 首字母大写
//         } 
//         else if (word[m][0] >= 'A' && word[m][0] <= 'Z') 
//         {
//             // 首字母已经是大写，什么都不做
//         }

//         for (int j = 1; j < strlen(word[m]); j++) 
//         {
//             if (word[m][j] >= 'A' && word[m][j] <= 'Z') 
//             {
//                 word[m][j] += 32; // 转为小写
//             }
//         }
//     }
//     for (int p = 0; p < l; p++) 
//     {
//         printf("%s\n", word[p]);
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() 
{
    int l = 0;
    scanf("%d", &l) ;
    char word[1000][1000];
    getchar();
    for (int m = 0; m < l; m++) 
    {
        fgets(word[m],sizeof(word[m]),stdin);
        int len=strlen(word[m]);
        if(len>0&&word[m][len-1]=='\n')
        {
            word[m][len-1]='\0';
        }
        for(int j=0;j<len;j++)
        {
            if(j==0 &&(word[m][j]>='a'&&word[m][j]<='z'))
            {
                word[m][j]=word[m][j]-32;
            }
            else if(j>0&&(word[m][j]>='A'&&word[m][j]<='Z'))
            {
                word[m][j]=word[m][j]+32;
            }
        }
    }
    for (int p = 0; p < l; p++) 
    {
        printf("%s\n", word[p]);
    }
    return 0;
}