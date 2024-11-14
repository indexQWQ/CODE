#include <stdio.h>
#include <stdlib.h>//包含stdlib.h头文件，用于生成随机数
#include <time.h>//包含time.h头文件，用于获取系统时间
//time_t typedef long long time_t; //定义time_t类型为long long
//time_t time(time_t *_Time)//获取系统时间 time(time_t *t)返回long long型整数表示的当前时间，如果t非空指针，则将当前时间存储在t指向的变量中
//time_t *t 是一个指针，指向time_t类型的变量，用于接收系统时间
//srand(unsigned int seed)//设置随机种子 srand(unsigned int seed)设置随机数生成器的种子，以便产生不同的随机数序列
int main() 
{
    srand((unsigned int)time(NULL));//设置随机种子 NULL空指针，表示获取系统时间
    int i =rand();//生成随机数
    printf("%d", i);
    // int j =rand()%100+1;//生成1-100之间的随机数
    // int k =rand()%100;//生成0-99之间的随机数
    // int l =rand()%100-50;//生成-50-49之间的随机数
    return 0;
}