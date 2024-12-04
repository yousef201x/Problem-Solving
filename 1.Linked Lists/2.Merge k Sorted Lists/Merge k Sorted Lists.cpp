
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
        {
            return nullptr;
        }

        ListNode list;
        ListNode *current = &list;
        vector<int> toInsert;

        for (int i = 0; i < lists.size(); i++)
        {

            auto itr = lists[i];

            while (itr != nullptr)
            {
                toInsert.push_back(itr->val);
                itr = itr->next;
            }
        }

        std::sort(toInsert.begin(), toInsert.end());

        for (int i = 0; i < toInsert.size(); i++)
        {
            current->next = new ListNode(toInsert[i]);
            current = current->next;
        }

        return list.next;
    }
};
