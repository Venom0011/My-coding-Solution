#include <bits/stdc++.h>
using namespace std;
int main() {
    int c=0;
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=0;i<4;i++){
        if(a[i]==a[i+1]){
            c++;
        }
    }
    cout<<c;
    return 0;
}