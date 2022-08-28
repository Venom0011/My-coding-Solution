#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,total=0,m=1;
cin>>n;
int arr[6];
for(int i=1;i<6;i++){
    arr[i]=n%10;           //last digit of number is stored in array and then which is not 0
    n=n/10;                //is counted  and printed                   
    if(arr[i]!=0){
        total++;
    }
}
cout<<total<<"\n";
for(int i=1;i<6;i++){
    if(arr[i]!=0){          //the number which are not zero is multiplied by its digit value
        cout<<arr[i]*m<<" ";
    }
    m=m*10;
}
cout<<"\n";
}
    return 0;
}