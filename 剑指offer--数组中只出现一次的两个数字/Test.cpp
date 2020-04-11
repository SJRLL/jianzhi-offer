��Ŀ����
һ�����������������������֮�⣬���������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�

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

	unsigned int findfirstBits1(int num) //�ҵ�num���ұߵ�һ��Ϊ1��λ��(�ҳ������������Ϊ1����һλ)
	{
		int indexBit = 0;
		while (((num & 1) == 0) && (indexBit < 8 * sizeof(int)))
		{
			num = num >> 1;
			++indexBit;
		}
		return indexBit;
	}

	bool IsBit1(int num,int indexBit) //�ж�num��indexBitλ�Ƿ�Ϊ1
	{
		num = num >> indexBit;
		return (num & 1);
	}
};