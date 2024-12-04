class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (head == nullptr)
        {
            return nullptr;
        }

        auto itr = head;

        while (itr->next != nullptr)
        {
            while (itr->next != nullptr)
            {
                if (itr->val == itr->next->val)
                {
                    auto temp = itr->next;
                    itr->next = itr->next->next;
                    delete temp;
                }
                else
                {
                    itr = itr->next;
                }
            }
        }

        return head;
    }
};