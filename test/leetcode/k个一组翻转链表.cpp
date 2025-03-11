#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) return head; // 如果k为1，直接返回head，不需要翻转
        ListNode* nhead = new ListNode(0);
        nhead->next = head;
        ListNode* pre = nhead;

        while (true) {
            ListNode* end = pre;
            for (int i = 0; i < k; i++) {
                if (end->next == nullptr) return nhead->next;
                end = end->next;
            }

            ListNode* start = pre->next;
            ListNode* next = end->next;
            end->next = nullptr;  // 将k个节点从链表中截断
            pre->next = reverse(start); // 反转k个节点，并连接到前面部分
            start->next = next; // 连接翻转后的k个节点到后面部分
            pre = start; // 更新pre为当前k个节点的最后一个节点
        }
    }

private:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};
