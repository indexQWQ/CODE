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
    struct ListNode *start,*end;
    start=head;
    end=head->next;
    while(end->next!=NULL)
    {
        struct ListNode *temp=end->next;
        end->next=start;
        start->next=temp;
        start=temp;
        end=temp->next;
    }
    struct ListNode *temp=end->next;
    end->next=start;
    start->next=temp;
    
}