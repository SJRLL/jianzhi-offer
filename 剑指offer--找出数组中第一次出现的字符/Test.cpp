题目描述
在一个字符串(0 <= 字符串长度 <= 10000，全部由字母组成)中找到第一个只出现一次的字符, 并返回它的位置, 
如果没有则返回 - 1（需要区分大小写）.

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