#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<bool>charact(26,false);
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(charact.at(s[i]-97)){

        } else {
            charact.at(s[i]-97)=true;
            count++;
        }
    }
    if(count%2){
        cout<<"IGNORE HIM!";
    } else {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
