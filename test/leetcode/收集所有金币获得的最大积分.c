#include <stdio.h>
#include <math.h>

int maximumPoints(int** edges, int edgesSize, int* edgesColSize, int* coins, int coinsSize, int k) 
{
    int end=*(edges+1);
    for(int i=0;i<edgesSize;i+=2)
    {
        int temp=*(edges+i+1);
        if(*(edges+i)==end)
        {
            end=temp;
        }

    }
}
int main()
{

    return 0;
}