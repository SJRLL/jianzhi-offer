��Ŀ����
����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣����е�ż��λ������ĺ�벿�֣�
����֤������������ż����ż��֮������λ�ò��䡣

//����˼·�٣���ż�����ڵ�һ�����飬���������ڵڶ������飬�ð�ԭ������գ��ٰ���������Ž�ȥ���ٰ�ż���Ž�ȥ��
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		int len = array.size();
		if (len == 0)
		{
			return;
		}
		int i = 0, j = len - 1;
		vector<int> v1;
		vector<int> v2;
		for (int i = 0; i<len; ++i)
		{
			if (array[i] % 2 == 0)
			{
				v2.push_back(array[i]);
			}
			else
			{
				v1.push_back(array[i]);
			}
		}
		array.clear();
		for (int i = 0; i<v1.size(); ++i)
		{
			array.push_back(v1[i]);
		}
		for (int j = 0; j<v2.size(); ++j)
		{
			array.push_back(v2[j]);
		}
	}
};

//����˼·�ڣ�