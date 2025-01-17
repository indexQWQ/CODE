// #include <stdio.h>

// int scope(int (*arr)[600],int x,int y,int n,int r)
// {
//     int i=0;
//     int count=0;
//     int sum=0;
//     int startX = (x - r < 0) ? 0 : x - r;
//     int endX = (x + r >= n) ? n - 1 : x + r;
//     int startY = (y - r < 0) ? 0 : y - r;
//     int endY = (y + r >= n) ? n - 1 : y + r;
//     for(i=startY;i<=endY;i++)
//     {
//         int j=0;
//         for(j=startX;j<=endX;j++)
//         {
//             sum+=arr[i][j];
//             count++;
//         }
//     }
//     return sum/count;
// }
// int main()
// {
//     int n=0,r=0;
//     int arr[600][600]={0};
//     scanf("%d%d",&n,&r);
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         int j=0;
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         int j=0;
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",scope(arr,j,i,n,r));
//         }
//         putchar('\n');
//     }
//     return 0;
// }



