#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    if(!(n%2)){
        if(k>n/2){
            cout<<2*(k-n/2);
        } else {
            cout<<2*k-1;
        }
    } else {
        if(k>n/2+1){
            cout<<2*(k-n/2-1);
        } else {
            cout<<2*k-1;
        }
    }
    return 0;
}
