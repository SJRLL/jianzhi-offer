��Ŀ����
��һ���ַ���(0 <= �ַ������� <= 10000��ȫ������ĸ���)���ҵ���һ��ֻ����һ�ε��ַ�, ����������λ��, 
���û���򷵻� - 1����Ҫ���ִ�Сд��.

Solution {
public:
	int FirstNotRepeatingChar(string str) {
		if (str.size() == 0)
		{
			return -1;
		}
		int Hasharray[256] = { 0 };
		for (auto & e : str)
		{
			Hasharray[str[e]]++;
		}
		for (int i = 0; i < str.size(); ++i)
		{
			if (Hasharray[str[i]] == 1)
			{
				return i;
			}
		}
		return 0;
	}
};