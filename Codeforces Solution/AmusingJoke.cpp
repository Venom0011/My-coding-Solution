#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int f=0;
    string a,b,c,s;
    cin>>a>>b>>c;
    s=a+b;
    sort(s.begin(),s.end());
    sort(c.begin(),c.end());
    if(s==c){
        cout<<"YES";
    }
    else{
    cout<<"NO";
    }
    return 0;
}