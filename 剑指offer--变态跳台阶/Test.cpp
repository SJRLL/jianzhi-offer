һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
�����������һ��n����̨���ܹ��ж�����������

class Solution {
public:
	int jumpFloorII(int number) {
		if (number <= 0)
		{
			return 0;
		}
		if (number == 1)
		{
			return 1;
		}
		int sum = 1;
		for (int i = 1; i<number; ++i)
		{
			sum *= 2;
		}
		return sum;
	}
};