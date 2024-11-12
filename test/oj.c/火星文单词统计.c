// #include <stdio.h>

// int main()
// {
//     char word[100];
//     int count = 0,ll=0;
//     while ((word[count]= getchar())!='\n') 
//     {
//         count++;
//     }
//     for(int i=0;i<count;i++)
//     {
//         if((word[i+1]>='a'&& word[i+1]<='z'||word[i+1]>='A'&& word[i+1]<='Z')&&((word[i]<'a'|| word[i]>'z')&& (word[i]<'A'|| word[i]>'Z')))
//         {
//             ll++;
//         }
//     }
//     printf("%d",ll);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char word[1000];
//     int count = 0,ll=0,lll=0;
//     while ((word[count]= getchar())!='\n') 
//     {
//         count++;
//     }
//     for(int i=0;i<count;i++)
//     {
//         if((word[i]>='a'&& word[i]<='z')|| (word[i]>='A'&& word[i]<='Z'))
//         {
//             ll++;
//         }
//         if(i < count - 1 &&((word[i]>='a'&& word[i]<='z')|| (word[i]>='A'&& word[i]<='Z'))&&((word[i+1]>='a'&& word[i+1]<='z')|| (word[i+1]>='A'&& word[i+1]<='Z')))
//         {
//             lll++;
//         }
//     }
//     printf("%d",ll-lll);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[1000];
    int count = 0, ll = 0;
    int inWord = 0; 
    while (count < 999 && (word[count] = getchar()) != '\n') 
    {
        count++;
    }
    word[count] = '\0'; 

    
    for (int i = 0; i < count; i++)
    {
        
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
        {
            
            if (inWord == 0)
            {
                ll++;
                inWord = 1; 
            }
        }
        else
        {
            
            inWord = 0;
        }
    }

    printf("%d\n", ll);
    return 0;
}
