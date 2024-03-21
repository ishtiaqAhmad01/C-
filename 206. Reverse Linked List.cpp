#include <iostream>
using namespace std;

/*========================================================================*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/*========================================================================*/
ListNode* reverseList(ListNode* head)
{
    if (head->next == nullptr || head == nullptr) return head;
    ListNode* current = head;
    ListNode* previous = nullptr;
    ListNode* forward = nullptr;
    while (current->next)
    {
        forward = current->next;
        current->next = previous;
        current = forward;
    }
    return current;
}
/*========================================================================*/
int main()
{



    return 0;
}