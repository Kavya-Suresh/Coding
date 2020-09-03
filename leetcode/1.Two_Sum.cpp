#include <bits/stdc++.h>
using namespace std;

//O(sorting) - logn
vector<int> twoSum(vector<int>& nums, int target) {
    vector< pair <int,int> > num; 
    for(int i = 0; i < nums.size(); i++)
        num.push_back( make_pair(nums[i],i)); 
    sort(num.begin(), num.end());
    
    int l = 0, r = nums.size()-1;
    while(l<r) {
        int sum = num[l].first + num[r].first;
        if(sum > target) r--;
        else if(sum < target) l++;
        else return {num[l].second, num[r].second};
    }
    return {};
}

//O(n)
vector<int> twoSum(vector<int>& nums, int target) {
    map <int,int> num; 
    for(int i = 0; i < nums.size(); i++) {
        if(num.find(target - nums[i]) != num.end()) return {i, num[target - nums[i]]};
        num[nums[i]] = i;
    }
    return {};
}

int main() {
    int n,target;
    cin >> n;
	vector<int> nums(n);
    for (int i = 0; i < n; i++)
	    cin >> nums[i];
    cin >> target;
	vector<int> pair = twoSum(nums,target);
    cout << pair[0] <<", "<<pair[1];
}