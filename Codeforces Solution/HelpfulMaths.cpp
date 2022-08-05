#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string sol="";
    int n=s.length();
    int c1=0,c2=0,c3=0;
    //Count the number of 1,2,3 in the program
    //As the program only contain 1,2,3
    for(int i=0;i<n;i++){
       if(s[i]=='1'){
           c1++;
       }
       else if(s[i]=='2'){
           c2++;
       }
       else if(s[i]=='3'){
           c3++;
       }
    }
    //After couting 1,2,3 take an second empty string
    //and till the count of 1,2,3 make for loop and insert the number
    //of 1,2,3 till the count with + sign 
    for(int i=0;i<c1;i++){
        sol=sol+"1+";
    }
    
    for(int i=0;i<c2;i++){
        sol=sol+"2+";
    }
    
    for(int i=0;i<c3;i++){
        sol=sol+"3+";
    }
    for(int i=0;i<n;i++){
        cout<<sol[i];
    }
    return 0;
}