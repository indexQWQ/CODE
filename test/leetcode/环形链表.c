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
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            struct ListNode *a=fast;
            struct ListNode *b=head;
            while(a!=b)
            {
                a=a->next;
                b=b->next;
            }
            return a;
        }
    }
    return NULL;
}