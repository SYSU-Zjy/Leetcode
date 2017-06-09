class Solution
{
  public:
	vector<vector<int>> fourSum(vector<int> &nums, int target)
	{
		vector<vector<int>> result;
		if (nums.size() < 3)
			return result;				
		sort(nums.begin(), nums.end()); 
		for (int i = 0; i < nums.size() - 3;)
		{
			int tmpi = nums[i];
			for (int j = i + 1; j < nums.size() - 2;)
			{
				int tmpj = nums[j];
				int first = j + 1;
				int last = nums.size() - 1;
				while (first < last)
				{
					if (nums[first] + nums[last] + nums[i] + nums[j] < target)
					{
						first++;
					}
					else if (nums[first] + nums[last] + nums[i] + nums[j] > target)
					{
						last--;
					}
					else
					{
						vector<int> tmp(4);
						tmp[0] = nums[i];
						tmp[1] = nums[j];
						tmp[2] = nums[first];
						tmp[3] = nums[last];
						int fv = nums[first];
						int lv = nums[last];
						result.push_back(tmp);
						while (nums[first] == fv && first < last)
						{
							first++;
						}
						while (nums[last] == lv && first < last)
						{
							last--;
						}
					}
				}
				while (nums[j] == tmpj && j < nums.size() - 2)
				{
					j++;
				}
			}
			while (nums[i] == tmpi && i < nums.size() - 3)
				i++;
		}
		return result;
	}
};


// change from sum3