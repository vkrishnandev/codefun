#include<bits/stdc++.h>

using namespace std;

int main(){
    int k,l,m,n;
    long long d;
    int count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++){
        if(!(i%k)){
            continue;
        }
        if(!(i%l)){
            continue;
        }
        if(!(i%m)){
            continue;
        }
        if(!(i%n)){
            continue;
        }
        count++;
    }
    cout<<d-count;
}
