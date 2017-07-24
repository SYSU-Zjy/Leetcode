#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> sum;
		vector<int>::size_type ix=0;
        for(int i = 0;i<nums.size()-1;i++){
			for(int j = i+1;j<nums.size();j++)
				if(nums[i]+nums[j] == target){
					sum.push_back(i);
					sum.push_back(j);
					break;
				}
		if(sum.size())
		break;
        }
	    return sum;		
    }
};

int main(){
    int a[] = {1,2,3,100};
    vector<int> b (a,a+4);
    Solution test;
    vector<int>result = test.twoSum(b,102);
    for(int tmp:result){
        cout<<tmp<<endl;
    }
    system("pause");
    return 0;
}