//输入一个链表，按链表从尾到头的顺序返回一个ArrayList。

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		stack<ListNode*> sl;
		ListNode* pNode = head;
		while (pNode != nullptr)
		{
			sl.push(pNode);
			pNode = pNode->next;
		}
		vector<int> v;
		while (!sl.empty())
		{
			pNode = sl.top();
			v.push_back(pNode->val);
			sl.pop();
		}
		return v;
	}
};

