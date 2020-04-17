//题目描述
//输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
//输出描述 :
//对应每个测试案例，输出两个数，小的先输出。

解题思路：双指针法，前后一起找，因为数组是递增序列，所以相隔最远的就是乘积最小的，找到相等的就直接跳出。
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