// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    int rem=n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int i=0;
    while(mp.size()!=rem)
    {
        ans++;
        mp[a[i]]--;
        if(mp[a[i]]==0)mp.erase(a[i]);
        i++;
        rem--;
    }
    cout<<ans<<endl;
    }
    return 0;
}