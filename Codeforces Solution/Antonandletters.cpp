#include <bits/stdc++.h>
using namespace std;
int main() {
    int c=0;
    string s;
   getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
    if(s[i]>=97 && s[i]<=122){
        if(s[i]!=s[i+1]){
            c++;
        }
    }
    }
    cout<<c;
    return 0;
}