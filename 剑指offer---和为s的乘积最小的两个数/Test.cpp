//��Ŀ����
//����һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
//������� :
//��Ӧÿ�����԰����������������С���������

����˼·��˫ָ�뷨��ǰ��һ���ң���Ϊ�����ǵ������У����������Զ�ľ��ǳ˻���С�ģ��ҵ���ȵľ�ֱ��������
class Solution {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {

		vector<int> v;
		int i = 0, j = array.size() - 1;
		while (i<j)
		{
			if ((array[i] + array[j])>sum)
			{
				j--;
			}
			else if ((array[i] + array[j])<sum)
			{
				i++;
			}
			else
			{
				v.push_back(array[i]);
				v.push_back(array[j]);
				break;
			}
		}
		return v;
	}
};