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
//自己写
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

//虚拟头节点
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* dummyhead=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur=dummyhead;
    dummyhead->next=head;
    while(cur->next!=NULL && cur->next->next!=NULL)
    {
        struct ListNode*temp1=cur->next->next->next;
        struct ListNode*temp2=cur->next->next;
        struct ListNode*temp3=cur->next;
        cur->next=temp2;
        cur->next->next=temp3;
        cur->next->next->next=temp1;
        cur=cur->next->next;
    }
    return dummyhead->next;
}
