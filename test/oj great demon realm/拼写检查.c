
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// int main() 
// {
//     int l = 0;
//     scanf("%d", &l) ;
//     char word[1000][1000];
//     getchar();
//     for (int m = 0; m < l; m++) 
//     {
//         //fgets(word[m],sizeof(word[m]),stdin);
//         gets(word[m]);
//         int len=strlen(word[m]);
//         if(len>0&&word[m][len-1]=='\n')
//         {
//             word[m][len-1]='\0';
//         }
//         for(int j=0;j<len;j++)
//         {
//             if(j==0 && islower(word[m][j]))
//             {
//                 word[m][j]=toupper(word[m][j]);
//             }
//             else if(j>0&&(word[m][j]>='A'&&word[m][j]<='Z'))
//             {
//                 word[m][j]=word[m][j]+32;
//             }
//         }
//     }
//     for (int p = 0; p < l; p++) 
//     {
//         printf("%s\n", word[p]);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
	int n,i,j;
	char word[5000][50];
	scanf("%d ", &n);//加一个空格把缓冲区的回车吃掉
	for (i = 0;i < n;i++) 
    {
		gets(word[i]);
		for (j = 0;word[i][j] != '\0';j++) 
        {
			if (word[i][j] >= 97 && word[i][j] <= 122 && j==0)
			{
				word[i][j] = word[i][j] - 32;
			}
			// else 
            // {
			// 	word[i][j] = word[i][j];
			// }//多余
			if (word[i][j] >= 65 && word[i][j] <= 90 && j!=0)
			{
				word[i][j] = word[i][j] + 32;
			}
		}
	}
	// printf("%c", word[i][j]);//不能这么打印
    for(i=0;i<n;i++)
    {
        // puts(word[i]);
        int j=0;
        for(j=0;word[i][j]!='\0';j++)
        {
            printf("%c",word[i][j]);
        }
    }
	return 0;
}