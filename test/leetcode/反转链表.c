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
//双指针
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* cur=head;
    struct ListNode* first=NULL;
    while(cur!=NULL)
    {
        struct ListNode*temp=cur->next;
        cur->next=first;
        first=cur;
        cur=temp;
    }
    return first;
}

//递归
struct ListNode* reverse(struct ListNode* cur,struct ListNode* first)
{
    if(cur==NULL)return first;
    struct ListNode*temp=cur->next;
    cur->next=first;
    first=cur;
    return reverse(temp,first);
}

struct ListNode* reverseList(struct ListNode* head) {
    return reverse(head,NULL);
}