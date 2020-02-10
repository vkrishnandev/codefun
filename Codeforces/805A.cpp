#include <bits/stdc++.h>

using namespace std;

int main(){
    long long l,r;
    int two=0,three=0;
    cin>>l>>r;

    if(l==r){
        cout<<l;
    } else if(r-l>3){
        cout<<2;
    } else if(r-l==3){
        if(!(l%3)){
            cout<<3;
        } else {
            cout<<2;
        }
    } else {
        cout<<2;
    }

}
