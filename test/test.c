// #include<stdio.h> 
// int main()
// {
// 	int n, m, i, p;
// 	double count, sum;
// 	i = 0, p = 0, sum = 0, count = 0;
// 	int arr1[20001] = { 0 };
// 	int arr2[20001] = { 0 };
// 	double grade;
// 	grade = sum / count;
// 	scanf_s("%d %d", &n, &m);
// 	while (getchar()==arr1[i] != '\n' && i < 20001)
// 	{
// 		i++;
// 	}
// 	arr1[i]='\0';
// 	for (int j = 0; j < i; j++)
// 	{
// 		if (j > m-1 || j < i - m-1)
// 		{
// 			arr2[p++] = arr1[j];
// 		}
// 	}
// 	for (int k = 0; k < p; k++)
// 	{
// 		sum += arr2[k];
// 		count++;
// 	}
// 	printf("%.2f", grade);
// 	return 0;
// }


//#include <stdio.h>
//#include <ctype.h>
//
//int main() {
//    char arr1[100];
//    int i = 0;
//    int count = 0;
//    int inWord = 0;  // 标记是否在单词中
//
//    // 读取输入字符串
//    printf("请输入甲骨上的火星文字: ");
//    while ((arr1[i] = getchar()) != '\n' && i < 99) {
//        i++;
//    }
//    arr1[i] = '\0';  // 添加字符串结束符
//
//    // 遍历字符串，统计英文单词数量
//    for (int j = 0; j < i; j++) {
//        if (isalpha(arr1[j])) {
//            // 如果是英文字母
//            if (!inWord) {
//                // 如果之前不在单词中，表示新单词开始
//                inWord = 1;
//                count++;
//            }
//        }
//        else {
//            // 如果不是英文字母，表示单词结束
//            inWord = 0;
//        }
//    }
//
//    // 输出单词数量
//    printf("%d\n", count);
//
//    return 0;
//}
//#include <stdbool.h>
//
//#define MAX_NUM 1000  // 假设输入的数字范围在1到1000以内
//
//int main() {
//    int num;
//    bool seen[MAX_NUM + 1] = { false };  // 记录数字是否已经出现过
//
//    // 提示输入
//    printf("请输入一组数字，以空格分隔: ");
//
//    // 读取输入的数字序列
//    while (scanf_s("%d", &num) == 1) {
//        // 检查输入的数字是否在合法范围内
//        if (num < 1 || num > MAX_NUM) {
//            printf("输入的数字超出范围，请输入1到%d之间的数字。\n", MAX_NUM);
//            continue;
//        }
//
//        // 如果当前数字未出现过，则输出该数字，并将其标记为已出现
//        if (!seen[num]) {
//            printf("%d ", num);
//            seen[num] = true;
//        }
//    }
//
//    // 输出换行符
//    printf("\n");
//
//    return 0;
//}


// #include <stdio.h>

// int main() 
// {
// 	int count=0;
// 	for(int i=100;i<=999;i+=2)
// 	{
// 		int a=i/100;
// 		int b=i/10%10;
// 		int c=i%10;
// 		if(a==b || b==c || c==a)
// 		{
// 			printf("%d ",i);
// 			count++;
// 		}
// 	}
// 	printf("\n");
// 	printf("%d\n",count);	
// 	return 0;
// }

#include <stdio.h>
extern int agg;
int main() 
{
	printf("%d\n",agg);
	return 0;
}