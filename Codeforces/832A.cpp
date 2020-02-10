#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    if(k==0) cout<<"NO";
    else
    if((n/k)%2){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}
