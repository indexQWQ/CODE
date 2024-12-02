#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p;
    p = (int*)malloc(100*sizeof(int)); //分配100个int类型内存
    for(int i=0; i<100; i++) 
    {
        p[i] = i; //初始化数组元素
    }
    
    if(p == NULL) 
    {
        printf("内存分配失败！\n");
    }
    p=(int*)realloc(p, 200*sizeof(int)); //重新分配内存，扩大到200个int类型内存
    if(p == NULL) 
    {
        printf("内存分配失败！\n");
    }
    for(int i=0; i<101; i++)
    {
        printf("%d ", p[i]); //输出数组元素
    }
    free(p); //释放内存
    // else 
    // {
    //     printf("分配成功！\n");
    //     free(p); //释放内存
    // }   
    return 0;   
}