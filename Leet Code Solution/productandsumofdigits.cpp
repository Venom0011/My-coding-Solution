#include<bits/stdc++.h>
using namespace  std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int add=0,prod=1;
        while(n>0){
        int rem=n%10;
         prod=prod*rem;
         add=add+rem;
            n=n/10;
        }   
        return prod-add;
    }
};