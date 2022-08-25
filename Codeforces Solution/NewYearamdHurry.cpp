#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,k,ans=0,c=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        ans=ans+5*i;
        if(ans<=(240-k)){
            c++;
        }
        else{
            break;
        }
    }
    cout<<c;
    return 0;
}