// #include <stdio.h>
// #include <stdlib.h>

// typedef struct s
// {
//     int num;
//     int left;
//     int right; 
// }sum;

// int main()
// {
//     int n=0,r=0,i=0,count=0;
//     sum arr[100]={0};
//     scanf("%d%d",&n,&r);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i].num);
//         arr[i].left=arr[i].num-r;
//         arr[i].right=arr[i].num+r;
//     }
//     for(i=1;i<n;i++)
//     {
//         if(arr[i-1].num>=arr[i].left)
//         {
//             count++;
//             arr[i].right=arr[i-1].right-1;
//         }
//     }
//     printf("%d\n",n-count);
//     return 0;
// }


#include <stdio.h>

int main() 
{
    int pos[110]={0},ans=0,n=0,r=0;
    scanf("%d%d",&n,&r);
    for (int i=1;i<=n;i++)
        scanf("%d",&pos[i]);
    if(n==1)ans=1; // 特判
    int last=pos[1]+r,i=1;
    while(last<pos[n]) 
    {
        ans++;
        int t=0;
        if(pos[i]>last) 
        { // 如果这个位置超过了防御范围
            last=pos[i]+r;
            while(pos[i]<=last && i<=n) t=pos[i++]+r;
        } 
        else 
        {
            while(pos[i]<=last && i<=n) t=pos[i++]+r;
        }
        last=t;
        while(pos[i]<=last && i<n) i++;
        //printf("Build %d---%d   %d\n",last-2*r,last,i);
    }
    printf("%d\n",ans);
    return 0;
}
