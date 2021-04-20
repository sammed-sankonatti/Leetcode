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
    void deleteNode(ListNode *node)
    {

        while (node != NULL && node->next != NULL)
        {
            node->val = node->next->val;

            if (node->next->next == NULL)
                node->next = NULL;
            node = node->next;
        }
    }
};