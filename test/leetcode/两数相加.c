#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
 };
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    int a=0,b=0,c=0;
    struct ListNode* header=(struct ListNode*)malloc(sizeof(struct ListNode));
    header->val=0;
    header->next=NULL;
    struct ListNode* p=header;
    int flag=0;
    while(l1!=NULL || l2!=NULL || flag==1)
    {
        a=(l1!=NULL)?l1->val:0;
        if(l1!=NULL)l1=l1->next;
        b=(l2!=NULL)?l2->val:0;
        if(l2!=NULL)l2=l2->next;
        if(flag) c=a+b+1;
        else c=a+b;
        if(c>9) flag=1;
        else flag=0;
        p->val=c%10;
        if(l1!=NULL || l2!=NULL || flag==1)
        {
            struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->next=NULL;
            p->next=newnode;
            p=newnode;
        }  
        else
        {
            p->next=NULL;
        }
    }
    return header;
}
int main()
{

    return 0;
}