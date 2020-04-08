��ֻ����������2��3��5��������������Ugly Number��������6��8���ǳ�������14���ǣ���Ϊ������������7�� 
ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������


//����˼·�����1��index�����г�����ʱ�临�Ӷȹ���
class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		if (index <= 0)
		{
			return 0;
		}
		int number = 0;
		int count = 0;
		while (count<index)
		{
			++number;
			if (IsUgly(number))
			{
				++count;
			}
		}
		return number;
	}

	bool IsUgly(int number)
	{
		while (number % 2 == 0)
			number /= 2;
		while (number % 3 == 0)
			number /= 3;
		while (number % 5 == 0)
			number /= 5;

		if (number == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

class Solution {
public:
	int GetUglyNumber_Solution(int index) {
		// 0-6�ĳ����ֱ�Ϊ0-6
		if (index < 7) return index;
		//p2��p3��p5�ֱ�Ϊ�������е�ָ�룬newNumΪ�Ӷ���ͷѡ��������С��
		int p2 = 0, p3 = 0, p5 = 0, newNum = 1;
		vector<int> arr;
		arr.push_back(newNum);
		while (arr.size() < index) {
			//ѡ����������ͷ��С����
			newNum = min(arr[p2] * 2, min(arr[p3] * 3, arr[p5] * 5));
			//������if�п��ܽ���һ�����߶��������������������ͷ��С�����ж�������
			if (arr[p2] * 2 == newNum) p2++;
			if (arr[p3] * 3 == newNum) p3++;
			if (arr[p5] * 5 == newNum) p5++;
			arr.push_back(newNum);
		}
		return newNum;
	}
};
