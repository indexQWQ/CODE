// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr[100];
//     int count=0;
//     while(EOF!=scanf("%c",&arr[count]))
//     {
//         count++;
//     }
//     int i=0;
//     int count1=0;
//     for(i=0;i<count-count1-1;i++)
//     {
//         if(arr[i]>'0' && arr[i]<'9')
//         {
//             if(i<count-count1-2)
//             {
//                 int j=0;
//                 for(j=i;j<count-2;j++)
//                 {
//                     arr[j]=arr[j+1];
//                 }
//                 i-=1;
//             }
//             count1++;
//         }
//     }
//     for(i=0;i<count-count1-1;i++)
//     {
//         printf("%c",arr[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int arr[100]={0};
//     int count=0;
//     while((scanf("%d",&arr[count]))!=EOF)
//     {
//         count++;
//     }
//     //printf("%d",count);
//     int arr1[100]={0};
//     int arr2[100]={0};
//     int j=0;
//     for(j=0;j<count;j++)
//     {
//         if(arr[j]>0)
//             arr1[j]=arr[j];
//         else if(arr[j]<0)
//             arr2[j]=arr[j];  
//     }
//     printf("数组A:");
//     int i=0;
//     for(i=0;i<count;i++)
//     {
//         if(arr1[i]!=0)
//             printf("%d ",arr1[i]);
//     }
//     putchar('\n');
//     printf("数组B:");
//     for(j=0;j<count;j++)
//     {
//         if(arr2[j]!=0)
//             printf("%d ",arr2[j]);
//     }
//     putchar('\n');
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[11]={0,10,2,8,22,16,4,10,6,14,20};
//     int count=0;
//     int i=1;
//     int flag=0;
//     while (!flag)
//     {
//         int k=1;
//         flag=1;
//         int op=arr[1];
//         for(k=2;k<=10;k++)
//         {
//             if (op != arr[k])
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag)
//         {
//             break;
//         }
//         if(i>10)
//         {
//             i=1;
//         }
//         if(i+1<=10)
//         {
//             arr[i]/=2;
//             arr[i+1]+=arr[i];
//         }
//         if(i==10)
//         {
//             arr[10]/=2;
//             arr[1]+=arr[10];
//             int j=1;
//             for(j=1;j<=10;j++)
//             {
//                 if(arr[j]%2==1)
//                 {
//                     arr[j]+=1;
//                 }
//             }
//         }
//         i++;
//         count++;
//     }
//     printf("%d %d",count,arr[1]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[2][10]={{1,2,3,4,5,0,7},{1,2,3,7,4,2,6}};
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         if(arr[0][i]>arr[1][i])
//         {
//             printf("第一行大");
//             break;
//         }
//         else if(arr[0][i]<arr[1][i])
//         {
//             printf("第二行大");
//             break;
//         }
//         else
//         {
//             if(i==9)
//             {
//                 printf("一样大");
//                 break;
//             }
//         }
//     }
//     return 0;
// }

//计算该矩阵最外圈元素之和
// #include <stdio.h>

// int caculate(int arr[5][5])
// {
//     int sum=0;
//     int i=0;
//     for(i=0;i<5;i++)
//     {
//         int j=0;
//         for(j=0;j<5;j++)
//         {
//             if(i==0||i==4)
//             {
//                 sum+=arr[i][j];
//             }
//             if((i>0 && i<4)&& (j==0 || j==4))
//             {
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     return sum;
// }
// void print(int arr[5][5])
// {
//     int i=0;
//     for(i=0;i<5;i++)
//     {
//         int j=0;
//         for(j=0;j<5;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         putchar('\n');
//     }
// }
// int main()
// {
//     int arr[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
//     int sum=caculate(arr);
//     print(arr);
//     printf("%c",'\n');
//     printf("%d",sum);
//     return 0;
// }


//老虎机
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void print(char arr[3][3])
// {
//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         int j=0;
//         for(j=0;j<3;j++)
//         {
//             printf(" %c ",arr[i][j]);
//         }
//         putchar('\n');
//     }
// }

// void game(char arr[3][3])
// {
//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         int j=0;
//         for(j=0;j<3;j++)
//         {
//             int ran=rand()%3+1;
//             if(ran==1)
//             {
//                 arr[i][j]='#';
//             }
//             else if(ran==2)
//             {
//                 arr[i][j]='*';
//             }
//             else
//             {
//                 arr[i][j]='$';
//             }
//         }
//     }
// }

// int iswin(char arr[3][3])
// {
//     int i=0;
//     int count=0;
//     //行
//     for(i=0;i<3;i++)
//     {
//         int j=0;
//         int flag=0;
//         char ch=arr[i][0];
//         for(j=1;j<3;j++)
//         {
//             if(ch!=arr[i][j])
//             {
//                 flag=0;
//                 break;
//             }
//             else
//             {
//                 flag=1;
//             }
//         }
//         if(flag==1)
//         {
//             count++;
//         }
//     }

//     //列
//     for(i=0;i<3;i++)
//     {
//         int j=0;
//         int flag=0;
//         char ch=arr[0][i];
//         for(j=1;j<3;j++)
//         {
//             if(ch!=arr[j][i])
//             {
//                 flag=0;
//                 break;
//             }
//             else
//             {
//                 flag=1;
//             }
//         }
//         if(flag==1)
//         {
//             count++;
//         }
//     }

//     //对角线
//     if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
//     {
//         count++;
//     }
//     if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     srand((unsigned int)time(NULL));
//     char arr[3][3]={0};
//     int count=0;
//     while(1)
//     {
//         char ch=0;
//         scanf("%c",&ch);
//         if(ch!='y')
//         {
//             break;
//         }
//         int i=0;
//         for(i=0;i<3;i++)
//         {
//             game(arr);
//             print(arr);
//             count+=iswin(arr);
//             printf("-----------\n");
//         }
        
//     }
//     printf("%d",count);
//     return 0;
// }

// #include <stdio.h>

// #define left 100
// #define right 100

// void print(int arr[left][right],int row,int col)
// {
//     int i=0;
//     for(i=0;i<row;i++)
//     {
//         int j=0;
//         for(j=0;j<col;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         putchar('\n');
//     }
// }

// void trans(int arr[left][right],int row,int col)
// {
//     int i=0;
//     for(i=0;i<row;i++)
//     {
//         int j=0;
//         for(j=0;j<col;j++)
//         {            
//             if(j==i-row/2 || j==-i+row/2 || j==i+row/2 || j==-i+row/2+row-1)
//             {
//                 arr[i][j]=1;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[left][right]={0};
//     int n=0;
//     scanf("%d",&n);
//     trans(arr,n,n);
//     print(arr,n,n);
//     return 0;
// }