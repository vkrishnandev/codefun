#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[0]>=97 && s[0]<=122){
        s[0]=(char)(s[0]-32);
    }
    for(int i=1;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=(char)(s[i]+32);
        }
    }
    cout<<s;

}
