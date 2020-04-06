题目描述
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，
并保证奇数和奇数，偶数和偶数之间的相对位置不变。

//解题思路①：将偶数放在第一个数组，将奇数放在第二个数组，让把原数组清空，再把奇数数组放进去，再把偶数放进去。
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

//解题思路②：