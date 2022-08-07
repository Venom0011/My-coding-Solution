// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int c=0;
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        c++;
    }
    if(a>b){
        cout<<c;
    }
    return 0;
}