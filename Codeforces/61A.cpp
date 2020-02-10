#include <bits/stdc++.h>

using namespace std;

bool check(char a, char b){
    if(a==b){
        return false;
    }
    return true;
}

int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.length();i++){
        cout<<check(s1[i],s2[i]);
    }
    return 0;
}
