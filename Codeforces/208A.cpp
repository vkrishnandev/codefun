#include <bits/stdc++.h>
using namespace std;

bool check(string s,int &i){
    if(s[i]=='W'){
        if(s[++i]=='U'){
            if(s[++i]=='B'){
                return true;
            } else {
                i-=2;
                return false;
            }
        } else {
            i--;
            return false;
        }
    }
    return false;
}

int main(){
    string s;
    bool status=false;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(check(s,i)){
            if(status){
                cout<<' ';
                status=false;
            } else {
                //status=false;
            }
        } else {
            cout<<s[i];
            status=true;
        }
    }
}
