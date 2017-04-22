class Solution {
public:
    vector< vector<int> > threeSum(vector<int>& nums) {
        vector< vector<int> > result;
        if (nums.size()<3)
        return result;//这里被坑了
		sort(nums.begin(),nums.end());//sort至少两个数
        for(int i = 0;i<nums.size()-2;){
			int target = -nums[i];
			int first = i+1;
			int last = nums.size()-1;
			while(first<last){
				if(nums[first]+nums[last]<target){
					first++;
				}
				else if(nums[first]+nums[last]>target){
					last--;
				}
				else{
					vector<int>tmp(3);
					tmp[0] = nums[i];
					tmp[1] = nums[first];
					tmp[2] = nums[last];
					int fv = nums[first];
					int lv = nums[last];
					result.push_back(tmp);
					while(nums[first]==fv&&first<last){
						first++;
					}
					while(nums[last]==lv&&first<last){
						last--;
					}
				}
			}
			while(nums[i]==-target&&i<nums.size()-2)
			i++;
		}
		return result;
    }
};

// 类似冒泡排序，起点总在一端，复杂度On^2
//在数组两端同时标记，复杂度On