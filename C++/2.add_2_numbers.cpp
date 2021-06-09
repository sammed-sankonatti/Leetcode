#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
        ListNode *dummy = new ListNode(), *cur = dummy;
        int carry = 0;
        while (l1 || l2 || carry){
            if (l1){
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2){
                carry += l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode(carry % 10);
            carry /= 10;
            cur = cur->next;
        }
        return dummy->next;
    }
};

void printList(struct ListNode * temp)
 {
     while(temp)
     {
         cout<<temp->val<<" ";
         temp=temp->next;
     }
     cout<<endl;
 }

int main()
{
    struct ListNode* node1= new ListNode(3);
    struct ListNode* node2= new ListNode(4,node1);
    struct ListNode* node3= new ListNode(2,node2);
    printList(node3);

    struct ListNode* node4= new ListNode(4);
    struct ListNode* node5= new ListNode(6,node4);
    struct ListNode* node6= new ListNode(5,node5);
    printList(node6);
    
    Solution addNumbers;
    struct ListNode* result= addNumbers.addTwoNumbers(node3, node6);
    printList(result);

    return 0;
}