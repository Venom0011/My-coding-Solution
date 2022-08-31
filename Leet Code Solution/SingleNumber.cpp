class Solution {
#include<bits/stdc++.h>
using namespace std;
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        map<int,int>a;           // a map is used to maintain the count of the numbers
        int n=nums.size();      // and the numbers that are repeated 
        for(int i=0;i<n;i++){
            a[nums[i]]++;
        }
        for(auto pr:a){
            if(pr.second==1){        // so for map whose first value is 1 is returned else 0
                return pr.first;    // is returned 
            }
        }
        return 0;
    }
};
            //Method 2
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];            //a^a=0;
        }                              //repeating elements are deleted so single     
        return ans;                   //elements are returned         
    }
};
