#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="";
    //cin>>s;
    string s1="4";
    if(s[0]>=97 && s[0]<=122){
        //s[0]=(char)(s[0]-32);
        s.resize(7);
        s[6]=s1[0];

    }
    cout<<s;
}
