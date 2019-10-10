#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,w;
    long long n;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        n-=k*i;
    }
    if(n<0){
        cout<<-n;
    } else {
        cout<<0;
    }
}
