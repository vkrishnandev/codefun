#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    bool letter[26]={0};
    for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122){
            //cout<<str[i];
            letter[(int)(str[i])-97]=true;
        }
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(letter[i]){
            count++;
        }
        //cout<<letter[i]<<' ';
    }
    cout<<count;
}
