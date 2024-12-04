class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        while (head != nullptr && head->val == val)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }

        if (head == nullptr)
            return nullptr;

        ListNode *before_itr = head;
        ListNode *current = head->next;

        while (current != nullptr)
        {
            if (current->val == val)
            {
                ListNode *temp = current;
                before_itr->next = current->next;
                current = current->next;
                delete temp;
            }
            else
            {
                before_itr = current;
                current = current->next;
            }
        }

        return head;
    }
};