#include <stdio.h>
#include <stdlib.h>

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
struct ListNode* swapPairs(struct ListNode* head) {
    if(head==NULL || head->next==NULL)return head;
    struct ListNode *start,*end,*bef;
    start=head;
    end=head->next;
    head=end;
    struct ListNode *temp1=end->next;
    end->next=start;
    start->next=temp1;
    bef=end;
    start=temp1;
    end=temp1->next;
    while(start->next!=NULL && end->next!=NULL)
    {
        struct ListNode *temp=end->next;
        bef->next=end;
        end->next=start;
        start->next=temp;
        bef=end;
        start=temp;
        end=temp->next;
    }
    if(start->next==NULL)return head;
    struct ListNode *temp=end->next;
    end->next=start;
    start->next=temp;
    return head;
}