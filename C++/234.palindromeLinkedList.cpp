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

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (!head || !head->next)
            return true;

        stack<int> st;
        int len = 0;

        ListNode *temp = head;

        while (temp)
        {
            len++;
            temp = temp->next;
        }

        int mid = len / 2;
        temp = head;
        for (int i = 0; i < mid; i++)
        {
            st.push(temp->val);
            temp = temp->next;
        }

        if (len % 2 != 0)
        {
            temp = temp->next;
            mid++;
        }

        for (int j = mid; j < len; j++)
        {
            if (st.top() != temp->val)
                return false;
            temp = temp->next;
            st.pop();
        }
        return true;
    }
};