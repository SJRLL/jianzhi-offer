//大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）。
//n <= 39

//解法一：利用数列的方法，求出每个相对应的数的斐波那契数的值
class Solution {
public:
	int Fibonacci(int n) {
		if (n <= 0)
		{
			return 0;
		}
		int one = 0;
		int two = 1;
		if (n == 1)
		{
			return two;
		}
		int sum = 0;
		for (int i = 2; i <= n; ++i)
		{
			sum = one + two;
			one = two;
			two = sum;
		}
		return sum;
	}
};

//解法二：效率极低，且浪费内存，利用递归思想
class Solution {
public:
	int Fibonacci(int n) {
		if (n <= 0)
		{
			return 0;
		}
		if (n == 1)
		{
			return 1;
		}
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
};

//解法三;数组存放对应数值
class Solution {
public:
	int Fibonacci(int n) {
		if (n <= 0)
		{
			return 0;
		}

		long long  a[39] = { 0, 1 };
		for (int i = 2; i <= n; ++i)
		{
			a[i] = a[i - 2] + a[i - 1];
		}
		return a[n];
	}
};