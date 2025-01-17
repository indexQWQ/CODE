// #include <stdio.h>

// typedef struct stu
// {
//     int id;
//     char cls[20];
//     char name[20];
//     float score[3];
//     float aver_sco;
// }st;

// void average(st su[5],int num)
// {
//     int i=0;
//     for(i=0;i<num;i++)
//     {
//         su[i].aver_sco=(su[i].score[0]+ su[i].score[1]+su[i].score[2])/3.0;
//     }
// }
// int maxAverageScore(st su[], int number)
// {
//     float k = 0;
//     //查找最高平均分并记录在数组中的下标值
//     int i=0,k1=0;
//     for(i = 0; i<= number; i++)
//     {
//         if(k<su[i].aver_sco)
//         {
//             k=su[i].aver_sco;
//             k1=i;
//         }
//     }
//     return k1;    //返回最高平均分数组元素的下标
// }

// int main()
// {
//     st su[5]=
//     {{1,"11","a",{1,1,1},0},
//     {1,"11","b",{1,1,2},0},
//     {1,"11","c",{1,1,3},0},
//     {1,"11","d",{1,1,5},0},
//     {1,"11","f",{1,1,6},0}
//     };
//     average(su,5);
//     int max=maxAverageScore(su,5);
//     printf("maxAverageScore's stu is %s\n",su[max].name);
//     return 0;
// }

// #include <stdio.h>

// typedef struct pop
// {
//     char name[20];
//     int year;
//     int mon;
// }per;
// int main()
// {
//     per worker[5]={
//         {"a",10,11},
//         {"b",20,22},
//         {"c",30,33},
//         {"d",40,44},
//         {"e",50,55}
//     };
//     int i=0;
//     for(i=0;i<5;i++)
//     {
//         printf("befor nmae:%s year:%d money:%d\n",worker[i].name,worker[i].year,worker[i].mon);
//     }
//     for(i=0;i<5;i++)
//     {
//         if(worker[i].year>30)
//         {
//             worker[i].mon+=100;
//         }
//     }
//     printf("--------------------------\n");
//     for(i=0;i<5;i++)
//     {
//         printf("after nmae:%s year:%d money:%d\n",worker[i].name,worker[i].year,worker[i].mon);
//     }
//     return 0;
// }

#include <stdio.h>

typedef struct test8
{
    int year;
    int month;
    int day;
}tim;

int istow(int a)
{
    if((a%100!=0 && a%2==0) || a%200==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int sumday(int mon,int year)
{
    int i=0;
    int sum=0;
    for(i=1;i<mon;i++)
    {
        int count=0;
        switch(i)
        {
            case 1:
                count=31;
                break;
            case 2:
                count=28;
                break;
            case 3:
                count=31;
                break;
            case 4:
                count=30;
                break;
            case 5:
                count=31;
                break;
            case 6:
                count=30;
                break;
            case 7:
                count=31;
                break;
            case 8:
                count=31;
                break;
            case 9:
                count=30;
                break;
            case 10:
                count=31;
                break;
            case 11:
                count=30;
                break;
            case 12:
                count=31;
                break;
        }
        if(istow(year) && i==2)
        {
            count++;
        }
        sum+=count; 
    }
    return sum;
}
int main()
{
    tim a={2024,12,16};
    printf("%d\n",sumday(a.month,a.year)+a.day);
    return 0;
}