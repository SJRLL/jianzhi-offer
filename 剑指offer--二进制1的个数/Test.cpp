����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��

class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		if (n<0)
		{
			count++;
		}
		int num = n;
		if (n<0) num = 2147483647 + n + 1;
		while (num)
		{
			if (num & 1)
			{
				count++;
			}
			num >>= 1;
		}
		return count;
	}
};