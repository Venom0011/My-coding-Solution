#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        int c=0;
        cin>>a>>b;
       if(a%b==0){
           cout<<0<<endl;
       }
       else{
           long long rem=a%b;
           long long ans=b-rem;
           cout<<ans<<endl;
       }
    }
    return 0;
}