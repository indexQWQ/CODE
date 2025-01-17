// 用法

void print_(int arr[3][5],int r,int c)
{
    int i=0;
    for(i=0;i<r;i++)
    {
        int j=0;
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void print_2(int (*p)[5],int r,int c)
{
    int i=0;
    for(i=0;i<r;i++)
    {
        int j=0;
        for(j=0;j<c;j++)
        {
            //printf("%d ",*((*(p+i))+j));
            //printf("%d ",*(p[i]+j));
            //printf("%d ",(*(p+i))[j]);
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[][5]={1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
    print_(arr,3,5);//arr 数组名表示的是首元素的地址，二维数组的首元素是他的第一行
    return 0;
}