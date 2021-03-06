把只包含质因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含质因子7。 
习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。


//解题思路：求出1到index的所有丑数，时间复杂度过大
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
		// 0-6的丑数分别为0-6
		if (index < 7) return index;
		//p2，p3，p5分别为三个队列的指针，newNum为从队列头选出来的最小数
		int p2 = 0, p3 = 0, p5 = 0, newNum = 1;
		vector<int> arr;
		arr.push_back(newNum);
		while (arr.size() < index) {
			//选出三个队列头最小的数
			newNum = min(arr[p2] * 2, min(arr[p3] * 3, arr[p5] * 5));
			//这三个if有可能进入一个或者多个，进入多个是三个队列头最小的数有多个的情况
			if (arr[p2] * 2 == newNum) p2++;
			if (arr[p3] * 3 == newNum) p3++;
			if (arr[p5] * 5 == newNum) p5++;
			arr.push_back(newNum);
		}
		return newNum;
	}
};
