#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    int left1=0,left2=0,right1=nums1Size,right2=nums2Size;
    int flag=nums1Size+nums2Size,min=0,a=0,b=0;
    if(flag%2==0)
    {
        for(int i=0;i<flag/2;i++)
        {
            if(left1==right1 || nums1Size==0)
            {
                min=nums2[left2++];
            }
            else if(left2==right2 || nums2Size==0)
            {
                min=nums1[left1++];
            }
            else
            {
                min=nums1[left1]<nums2[left2]?nums1[left1]:nums2[left2];
                if(nums1[left1]<nums2[left2]) left1++;
                else left2++;
            }    
        }
        a=min;
        if(left1==right1|| nums1Size==0)
        {
            min=nums2[left2++];
        }
        else if(left2==right2|| nums2Size==0)
        {
            min=nums1[left1++];
        }
        else
        {
            min=nums1[left1]<nums2[left2]?nums1[left1]:nums2[left2];
            if(nums1[left1]<nums2[left2]) left1++;
            else left2++;
        }   
        b=min;
    }
    else
    {
        for(int i=0;i<flag/2+1;i++)
        {
            if(left1==right1 || nums1Size==0)
            {
                min=nums2[left2++];
            }
            else if(left2==right2|| nums2Size==0)
            {
                min=nums1[left1++];
            }
            else
            {
                min=nums1[left1]<nums2[left2]?nums1[left1]:nums2[left2];
                if(nums1[left1]<nums2[left2]) left1++;
                else left2++;
            }    
        }
        a=b=min;
    }
    return (a+(double)b)/2;
}
int main()
{

    return 0;
}