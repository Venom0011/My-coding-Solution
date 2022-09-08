#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int n) {
        int ans=0;
       while(n!=0){
            if((ans<INT_MIN/10) || (ans>INT_MAX/10)){  // used to check if it lies in int range
               return 0;
           } 
            ans=ans*10+n%10;
            n=n/10;
       }
        return ans;
    }
};