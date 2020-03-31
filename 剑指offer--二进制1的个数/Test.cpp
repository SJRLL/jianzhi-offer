输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

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