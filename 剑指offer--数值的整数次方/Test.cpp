
//��Ŀ����������һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η��� ��֤base��exponent��ͬʱΪ0


//����˼·�٣�������ѧ��ʽ���Ƶ�����һ������n�η�����nΪż��ʱ��Ϊa�Ķ���֮1�η�����nΪż��ʱ��Ϊa�Ķ���֮1��һ1�η���Ȼ��ݹ���⡣
class Solution {
public:
	double Power(double base, int exponent) {
		if (base == 1)
		{
			return base;
		}
		if (exponent == 0)
		{
			return 1;
		}

		double result = Power(base, exponent >> 1);
		result *= result;
		if (exponent & 1 == 1)
		{
			result *= base;
		}
		return result;
	}
};

//����˼·�ڣ��ж�
class Solution {
public:
	double Power(double base, int exponent) {
		if (exponent == 0)
		{
			return 1;
		}
		if (exponent == 1)
		{
			return base;
		}

		double result = 1.0;
		if (exponent<0)
		{
			unsigned int absExonpent = (unsigned int)(-exponent);
			for (int i = 1; i <= absExonpent; ++i)
			{
				result *= base;
			}
			return 1.0 / result;
		}
		else
		{
			for (int i = 1; i <= exponent; ++i)
			{
				result *= base;
			}
			return result;
		}
	}
};