#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head)
            return NULL;
        if(head->next==NULL)
            return head;
        
        ListNode* slow=head , * fast= head;
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        k=k%count;
        for(int i=0;i<k;i++)
        {
            fast=fast->next;
        }
        
        while(fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        
        fast->next=head;
        head= slow->next;
        slow->next= NULL;
        
        return head;  
    }
};