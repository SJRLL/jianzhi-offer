
//题目描述：给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。 保证base和exponent不同时为0


//解题思路①：利用数学公式，推导出，一个数的n次方，当n为偶数时，为a的二分之1次方，当n为偶数时，为a的二分之1减一1次方。然后递归求解。
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

//解题思路②：判断
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