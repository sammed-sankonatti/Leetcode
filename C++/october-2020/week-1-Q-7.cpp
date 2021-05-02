#include <bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 class Solution
 {
 public:
     ListNode *rotateRight(ListNode *head, int k)
     {
         if (head == NULL)
             return NULL;
         if (k == 0)
             return head;
         int len = 1;
         ListNode *ptr;
         for (ptr = head; ptr->next; ptr = ptr->next)
             len++;
         int rotation_index = k % len;
         if (rotation_index == 0 || rotation_index == len || len == 1)
             return head;
         ptr = head;
         ListNode *prev = NULL;
         for (int i = 0; i < (len - rotation_index); ++i)
         {
             prev = ptr;
             ptr = ptr->next;
         }
         prev->next = NULL;
         ListNode *new_head = ptr;
         while (ptr->next)
             ptr = ptr->next;
         ptr->next = head;
         return new_head;
     }
 };

int main()
{
    ListNode *head=new ListNode(10), *node1=new ListNode(20), *node2=new ListNode(30), *node3=new ListNode(40), *node4=new ListNode(50), *node5=new ListNode(60);
    head->next=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;


    Solution rotate;
    ListNode* result= rotate.rotateRight(head, 2);

    while(result)
    {
        cout<<head->val<<" ";
        result=result->next;
    }

    return 0;
}