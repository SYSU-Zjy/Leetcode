class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(),nums.end());//sort至少两个数
		int min = abs(nums[0]+nums[1]+nums[2]-target);//min needs to be initialized.And it shouldn't be any number.
		int result = nums[0]+nums[1]+nums[2];//result also needs to be initialized as any number
        for(int i = 0;i<nums.size()-2;){
			int tmp = nums[i];
			int first = i+1;
			int last = nums.size()-1;
			while(first<last){
			    if(abs(nums[first]+nums[last]+tmp-target)<min){
				    min = abs(nums[first]+nums[last]+tmp-target);
				    result = nums[first]+nums[last]+tmp;
				}
				if(min == 0) return result;
				if(nums[first]+nums[last]+tmp<target){
					first++;
				}
				else if(nums[first]+nums[last]+tmp>target){
					last--;
				}
			}
			while(nums[i]==tmp&&i<nums.size()-2)
			i++;
		}
		return result;
    }
};