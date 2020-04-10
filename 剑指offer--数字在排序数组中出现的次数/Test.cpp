题目描述
统计一个数字在排序数组中出现的次数。

class Solution {
public:
	int GetNumberOfK(vector<int> data, int k) {
		if (data.size() == 0)
			return 0;
		int count = 0;
		int low = 0, high = data.size() - 1, mid = 0;
		while (low <= high){
			mid = low + (high - low) / 2;
			if (data[mid] == k)
				break;
			else if (data[mid] > k)
				high = mid - 1;
			else
				low = mid + 1;
		}
		if (low <= high){
			for (int i = mid; i >= 0; i--){
				if (data[i] == k)
					count++;
				else
					break;
			}
			for (int i = mid + 1; i < data.size(); i++){
				if (data[i] == k)
					count++;
				else
					break;
			}
		}
		return count;
	}
};