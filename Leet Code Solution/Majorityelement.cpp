#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int mid=n/2;
        map<int,int>a;
        for(int i=0;i<n;i++){
            a[nums[i]]++;
        }
        for(auto pr:a){
            if(pr.second>mid){
                return pr.first;
            }
        }
        return 0;
    }
};