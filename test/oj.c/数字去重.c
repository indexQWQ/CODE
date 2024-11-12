// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() 
// {
    
//     char num[100]; 
//     int arr[100000];
//     int length = 0; 
//     fgets(num, sizeof(num), stdin);
//     while (num[length] != '\n' && num[length] != '\0') 
//     {
//         length++;
//     }
//     arr[length]=atoi(num);
//     int a=(length+1)/2;
//     for(int i=0;i<a;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     for (int i = 0; i < a; i++) 
//     {
//         for (int j = 0; j < a; j++)
//         {
//             if(arr[i] == arr[j] && i!= j)
//             {
//                 arr[j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < a; i++) 
//     {
//         if(arr[i]!= 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() 
// {
    
//     char charArray[100]; 
//     int intArray[100]; 
//     int count = 0; 
//     fgets(charArray, sizeof(charArray), stdin);
//     char *token = strtok(charArray, " "); 
//     while (token != NULL) 
//     {
//         intArray[count] = atoi(token); 
//         count++; 
//         token = strtok(NULL, " "); 
//     }
    
//     for (int i = 0; i < count; i++) 
//     {
//         for (int j = 0; j < count; j++)
//         {
//             if(intArray[i] == intArray[j] && i!= j)
//             {
//                 intArray[j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < count; i++) 
//     {
//         if(intArray[i]!= 0)
//         {
//             printf("%d ", intArray[i]);
//         }
//     }
//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_NUM 100000

// int main() 
// {
//     int arr[MAX_NUM], n = 0;
//     int hash[MAX_NUM] = {0}; // 哈希表，用于记录出现的数字
//     while (EOF != scanf("%d", &arr[n]))
//     {
//         hash[arr[n]] = 1; // 使用哈希表记录数字的出现
//         n++;
//     }

//     // 输出不重复的数字
//     for (int i = 0; i < MAX_NUM; i++) 
//     {
//         if (hash[i] == 1) // 只打印在哈希表中存在的数字
//         {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }


// #include <stdio.h>
// #define arrr 100000
// int main() 
// {
//     int arr[arrr], count=0;
    
//     while(EOF != scanf("%d", &arr[count]))
//     {
        
//         count++;
//     }
//     for (int i = 0; i < count; i++) 
//     {
//         for (int j = 0; j < count; j++)
//         {
//             if(arr[i] == arr[j] && i!= j)
//             {
//                 arr[j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < count; i++) 
//     {
//         if(arr[i]!= 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #define MAX_NUM 100000

// int main() 
// {
//     int arr[MAX_NUM], count = 0;

//     // 读取输入，并确保不超过数组最大容量
//     while (count < MAX_NUM && scanf("%d", &arr[count]) == 1) 
//     {
//         count++;
//     }

//     // 对数组中的元素进行去重
//     for (int i = 0; i < count; i++) 
//     {
//         for (int j = i + 1; j < count; j++) 
//         {
//             if (arr[i] == arr[j]) // 找到重复的元素
//             {
//                 // 将重复元素后面的值移动到前面
//                 for (int k = j; k < count - 1; k++) 
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//                 count--; // 减少有效元素的计数
//                 j--; // 调整j，以重新检查当前位置
//             }
//         }
//     }

//     // 输出不重复的数字
//     for (int i = 0; i < count; i++) 
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 100000
int main() 
{
    int arr[M] = {0};
    int i=0;
    int arrr[M] = {0};
    while(EOF!= scanf("%d", &arr[i]))
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(!arrr[arr[j]])
        {
            printf("%d ", arr[j]);
            arrr[arr[j]]=1;
        }
    }
    return 0;
}
