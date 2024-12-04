class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr && list2 == nullptr)
        {
            return nullptr;
        }

        ListNode list3;
        ListNode *current = &list3;

        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                current->next = list1;
                current = current->next;
                list1 = list1->next;
            }
            else
            {
                current->next = list2;
                current = current->next;
                list2 = list2->next;
            }
        }

        if (list1 != nullptr)
        {
            current->next = list1;
        }

        if (list2 != nullptr)
        {
            current->next = list2;
        }

        return list3.next;
    }
};