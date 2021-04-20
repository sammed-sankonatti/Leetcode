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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *start = new ListNode();
        start->next = head;
        ListNode *slow = start;
        ListNode *fast = start;

        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return start->next;
    }
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int len = 0;
        while (temp)
        {
            len++;
            temp = temp->next;
        }
        if (len == 1)
            return NULL;
        if (len == n)
            return head->next;
        int p = len - n;
        int i = 1;

        ListNode *curr = head, *next = head->next;
        while (i < p)
        {
            curr = curr->next;
            next = next->next;
            i++;
        }
        curr->next = next->next;

        return head;
    }
};