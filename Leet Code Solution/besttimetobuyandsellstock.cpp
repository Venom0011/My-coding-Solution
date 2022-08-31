#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
        int minprof=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minprof=min(minprof,prices[i]);
            maxprof=max(maxprof,prices[i]-minprof);
        }
        return maxprof;
    }

};