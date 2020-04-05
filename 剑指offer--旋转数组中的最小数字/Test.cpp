��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{ 3, 4, 5, 1, 2 }Ϊ{ 1, 2, 3, 4, 5 }��һ����ת�����������СֵΪ1��
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.size() == 0)
		{
			return 0;
		}
		sort(rotateArray.begin(), rotateArray.end());
		return rotateArray[0];
	}
};

//����˼·������ָ�룬һ��ָ��ʼ��һ��ָ��ĩβ����Ϊԭ�����ʼ������ģ�����ת���γ���������������飬����ָ��ֱ���������������Ŀ�ͷ��ĩβ��
            �������������ҵ���ͷ��ĩβ����ʱһ����������Ŀ�ͷ������С������

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray)
	{
		int len = rotateArray.size();
		int index1 = 0;
		int index2 = len - 1;
		int midindex = index1;
		while (rotateArray[index1] >= rotateArray[index2])
		{
			if (index2 - index1 == 1)
			{
				midindex = index2;
				break;
			}
			midindex = (index1 + index2) / 2;
			if (rotateArray[index1] == rotateArray[index2]
				&& rotateArray[index2] == rotateArray[midindex])
			{
				return Minorder(rotateArray, index1, index2);
			}
			if (rotateArray[midindex] >= rotateArray[index1])
			{
				index1 = midindex;
			}
			else if (rotateArray[midindex] <= rotateArray[index2])
			{
				index2 = midindex;
			}

		}
		return rotateArray[midindex];
	}
	int Minorder(vector<int> rotateArray, int index1, int index2)
	{
		int result = rotateArray[index1];
		for (int i = index1 + 1; i <= index2; ++i)
		{
			if (result>rotateArray[i])
			{
				result = rotateArray[i];
			}
		}
		return result;
	}
};