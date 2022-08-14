#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,k,m;
    cin>>n>>k;
    // eg for n=10 Numbers would be (1 3 5 7 9 2 4 6 8 10)
    // for n-even mid=n/2
    // for n-odd mid=n+1/2
    // before mid there are odd numbers and after mid there are even
    // odd numbers form A.P with a=1,d=2,n=k
    // even numbers are sustracteed with m to get the value at k
    // https://youtu.be/kx2-qhWt5Eg 
    if(n%2==0){
        m=n/2;
    }
    else{
        m=(n+1)/2;
    }
  if(k<=m){
      long long res=(2*k-1);
      cout<<res;
  }
  else{
      long long res=2*(k-m);
      cout<<res;
  }
    return 0;
}