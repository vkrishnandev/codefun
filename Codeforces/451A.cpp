#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int min;
    if(n<m){
        min=n;
    } else {
        min=m;
    }
    if(!(min%2)){
        cout<<"Malvika";
    } else {
        cout<<"Akshat";
    }
    return 0;
}
