#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA==headB)
    {
        return headA;
    }
    struct ListNode *cura=headA;
    struct ListNode *curb=headB;
    int a=0,b=0;
    while(headA!=NULL)
    {
        a++;
        headA=headA->next;
    }
    while(headB!=NULL)
    {
        b++;
        headB=headB->next;
    }
    if(a>b)
    {
        for(int i=0;i<a-b;i++)
        {
            cura=cura->next;
        }
    }
    else if(b>a)
    {
        for(int i=0;i<b-a;i++)
        {
            curb=curb->next;
        }
    }
    if(cura==curb)
    {
        return curb;
    }
    while(cura!=NULL)
    {
        if(cura==curb)
        {
            break;
        }
        cura=cura->next;
        curb=curb->next;
    }
    return cura;
}