��Ŀ����
�������������ҳ����ǵĵ�һ��������㡣��ע����Ϊ�����������������Դ���������ݵ���ʾ����������ʽ��ʾ�ģ���֤������������ȷ�ģ�

�ٶ� List1���� : a + n  List2 ���� : b + n, �� a<b
	��ô p1 ���ȵ�����β��, ��ʱp2 �ߵ� a + nλ��, ��p1����List2ͷ��
	����p2 ����b + n - (n + a) = b - a ��������β��, ��ʱp1Ҳ�ߵ�List2��b - aλ�ã�����a���͵����ܵĵ�һ�������ڵ㡣
	��p2 ���� List1ͷ����p2��a��Ҳ�����ܵĵ�һ�������ڵ㡣���ǡ��p1 == p2, ��ôp1���ǵ�һ�������ڵ㡣  
	����p1��p2һ����n�������б�β��������û�й����ڵ㣬�˳�ѭ���� ͬ��a >= b.
	ʱ�临�Ӷ�O(n + a + b)

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
	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		ListNode* p1 = pHead1;
		ListNode* p2 = pHead2;
		while (p1 != p2)
		{
			if (p1 != nullptr)
			{
				p1 = p1->next;
			}
			else
			{
				p1 = pHead2;
			}

			if (p2 != nullptr)
			{
				p2 = p2->next;
			}
			else
			{
				p2 = pHead1;
			}
		}
		return p1;
	}
};