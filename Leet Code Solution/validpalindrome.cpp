//https://youtu.be/028pTf2kBFI

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
    if(s.length()<=1) return true;
    int st=0,en=s.length()-1;
        while(st<en){
            while(st<en && !isalnum(s[st])) st++;  // isalnum is used to to check alpha numeric 
            while(st<en && !isalnum(s[en])) en--;  // value is present or not
            if(st<en && tolower(s[st])!=tolower(s[en])) return false;
            st++;
            en--;
        }
        return true;
    }
};