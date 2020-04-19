//题目描述
//给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null。


struct ListNode 
{
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(nullptr) 
{
}
};

class Solution {
public:
	ListNode* MeetingNode(ListNode* pHead)
	{
		if (pHead == nullptr)
		{
			return nullptr;
		}
		ListNode* slow = pHead->next;
		if (slow == nullptr)
		{
			return nullptr;
		}
		 
		ListNode* fast = slow->next;
		while (slow && fast)
		{
			if (slow == fast)
			{
				return fast;
			}
			slow = slow->next;
			fast = fast->next;
		}
		return nullptr;
	}
	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		ListNode* meetingNode = MeetingNode(pHead);
		if (meetingNode == nullptr)
		{
			return nullptr;
		}
		ListNode* p1 = meetingNode;
		int HuanLength = 1;
		while (p1->next != meetingNode)
		{
			p1 = p1->next;
			HuanLength++;
		}
		p1 = pHead;
		for (int i = 0; i < HuanLength; ++i)
		{
			p1 = p1->next;
		}
		ListNode* p2 = pHead;
		while (p1 != p2)
		{
			p1 = p1->next;
			p2 = p2->next;
		}
		return p1;
	}
};