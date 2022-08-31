#include<bits/stdc++.h>
using namespace std;

//Method 1 Time: O(nlogn) Space:O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

// Method 2 Time : O(n) Space: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            a[nums[i]]++;
        }
        for(auto pr:a){
            if(pr.second>=2){
                return true;
            }
        }
        
        return false;
    }
};
