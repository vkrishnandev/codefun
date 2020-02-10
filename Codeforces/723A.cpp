#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    if(x1>x2){
        if(x2>x3){
            cout<<abs(x1-x3);
        } else if(x1>x3){
            cout<<abs(x1-x2);
        } else {
            cout<<abs(x2-x3);
        }
    } else if(x2<x3){
        cout<<abs(x1-x3);
    } else if(x1>x3){
        cout<<abs(x2-x3);
    } else{
        cout<<abs(x1-x2);
    }
}
