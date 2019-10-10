#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long x=5;
    while(n>x){
        n-=x;
        x*=2;
    }
    //cout<<x;
    x=x/5;
    //cout<<x<<' '<<n;
    if(n<=x){
        cout<<"Sheldon";
    } else if(n<=2*x){
        cout<<"Leonard";
    } else if(n<=3*x){
        cout<<"Penny";
    } else if(n<=4*x){
        cout<<"Rajesh";
    } else {
        cout<<"Howard";
    }
    return 0;
}
