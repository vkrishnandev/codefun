#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int leng=str.length();
    int upper=0,lower=0;
    for(int i=0;i<leng;i++){
        if(str[i]>=65 && str[i]<=90){
            upper++;
        } else{
            lower++;
        }
    }
    if(upper>lower){
        for(int i=0;i<leng;i++){
//            if(str[i]>=97 && str[i]<=122){
//                cout<<(char)(str[i]-32);
//            } else {
//                cout<<str[i];
//            }
            cout<<(char)(toupper(str[i]));
        }
    } else {
        for(int i=0;i<leng;i++){
            cout<<(char)(tolower(str[i]));
        }
    }
    return 0;
}
