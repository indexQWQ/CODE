#include <stdio.h>
#include <stdlib.h>

 struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode* start=(struct ListNode* )malloc(sizeof( struct ListNode));
    start->next=head,start->val=-1;
    struct ListNode* ret=start,* old=start; 
    int flag=0;
    while(start!=NULL)
    {
        if(start->val==val)
        {
            old->next=start->next;
            flag=0;
        }
        start=start->next;
        if(flag)old=old->next;
        flag=1;
    }
    return ret->next;
}