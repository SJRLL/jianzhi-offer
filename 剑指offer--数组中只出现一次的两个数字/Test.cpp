题目描述
一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。

class Solution {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2)
	{
		int len = data.size();
		if (len == 0)
		{
			return;
		}
		int resultExclusiveOR = 0;
		for (int i = 0; i < len; ++i)
		{
			resultExclusiveOR ^= data[i];
		}
		unsigned int indexOF1 = findfirstBits1(resultExclusiveOR);

		for (int j = 0; j < len; ++j)
		{
			if (IsBit1(num1, indexOF1))
			{
				*num1 ^= data[j];
			}
			else
			{
				*num2 ^= data[j];
			}
		}
	}

	unsigned int findfirstBits1(int num) //找到num最右边第一个为1的位置(找出整体进行亦或后，为1的那一位)
	{
		int indexBit = 0;
		while (((num & 1) == 0) && (indexBit < 8 * sizeof(int)))
		{
			num = num >> 1;
			++indexBit;
		}
		return indexBit;
	}

	bool IsBit1(int num,int indexBit) //判断num第indexBit位是否为1
	{
		num = num >> indexBit;
		return (num & 1);
	}
};