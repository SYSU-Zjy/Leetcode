#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector< vector<int> > threeSum(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		vector< vector<int> > result;
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
					vector<int>tmp = {nums[i],nums[first],nums[last]};//老版本不通过
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



int main(){
	vector<int> a = {-1,0,1,2,-1,-4};
	vector< vector<int> > result;
	Solution solu;
	result = solu.threeSum(a);
	for(vector< vector<int> >::iterator it= result.begin();it!=result.end();it++){
		for(vector<int>::iterator itt = (*it).begin();itt!=(*it).end();itt++){
			cout<<*itt<<' '; 
		}
		cout<<endl;
	}
	return 0;
}


