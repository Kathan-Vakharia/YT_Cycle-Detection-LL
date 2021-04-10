#include <bits/stdc++.h>
using namespace std;

/*
-Time:O(n)
-Space:O(n) for hashmap
*/
/* A note about 'count(Key)'
*Searches the container for elements whose key is k and returns 
*  the number of elements found
*Because unordered_map containers do not allow for duplicate keys,
*   this means that the function actually returns 1 if an element with 
*   that key exists in the container, and zero otherwise.
*/
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        unordered_map<ListNode *, int> nodes_seen;

        while (head != nullptr)
        {
            if (nodes_seen.count(head) > 0)
            {
                return true;
            }

            nodes_seen[head] = head->val;
            head = head->next;
        }
        return false;
    }
};
