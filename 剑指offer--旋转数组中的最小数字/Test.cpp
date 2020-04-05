把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{ 3, 4, 5, 1, 2 }为{ 1, 2, 3, 4, 5 }的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

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

//解题思路：两个指针，一个指向开始，一个指向末尾，因为原数组最开始是有序的，在旋转后形成了两个有序的数组，两个指针分别找两个有序数组的开头和末尾，
            若两个相遇即找到开头和末尾，此时一个有序数组的开头就是最小的数。

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