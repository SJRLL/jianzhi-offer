输入一个链表，反转链表后，输出新链表的表头。

/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == nullptr)
		{
			return nullptr;
		}
		ListNode* Rhead = nullptr;
		ListNode* prev = nullptr;
		ListNode* cur = pHead;
		while (cur)
		{
			ListNode* next = cur->next;
			if (next == nullptr)
			{
				Rhead = cur;
			}
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		return Rhead;
	}
};