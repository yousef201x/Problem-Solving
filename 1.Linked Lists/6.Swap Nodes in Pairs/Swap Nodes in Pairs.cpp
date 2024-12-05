class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr)
        {
            return nullptr;
        }
        else if (head->next == nullptr)
        {
            return head;
        }

        ListNode list(0);
        ListNode *list_current = &list;
        ListNode *current = head;

        while (current != nullptr && current->next != nullptr)
        {
            ListNode *after_current = current->next;
            // Add the second node (after_current)
            list_current->next = new ListNode(after_current->val);
            list_current = list_current->next;

            // Add the first node (current)
            list_current->next = new ListNode(current->val);
            list_current = list_current->next;

            // Move to the next pair
            current = current->next->next;
        }

        if (current != nullptr)
        {
            list_current->next = new ListNode(current->val);
            list_current = list_current->next;
        }

        return list.next;
    }
};