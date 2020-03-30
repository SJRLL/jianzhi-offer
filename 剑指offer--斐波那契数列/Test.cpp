//��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n���0��ʼ����0��Ϊ0����
//n <= 39

//�ⷨһ���������еķ��������ÿ�����Ӧ������쳲���������ֵ
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

//�ⷨ����Ч�ʼ��ͣ����˷��ڴ棬���õݹ�˼��
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

//�ⷨ��;�����Ŷ�Ӧ��ֵ
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