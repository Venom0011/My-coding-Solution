// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int a=0,d=0,n;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        if(s[i]=='D'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(a<d){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}