��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20����
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are % 20Happy��

class Solution {
public:
	void replaceSpace(char *str, int length) {
		if (str == nullptr || length <= 0)
		{
			return;
		}
		int count = 0;
		for (int i = 0; i < length; ++i)
		{
			if (str[i] == ' ')
			{
				count++;
			}
		}

		int newlength = length + count * 2;
		int p1 = length;
		int p2 = newlength;
		while (p1 >= 0 && p1 < p2)
		{
			if (str[p1] == ' ')
			{
				str[p2--] = '0';
				str[p2--] = '2';
				str[p2--] = '%';
			}
			else
			{
				str[p2--] = str[p1];
			}
			--p1;
		}
	}
};