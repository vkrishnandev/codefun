#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b;
    int cost=0;
    cin>>n>>m>>a>>b;
    if(b/m>=a){
        cost=a*n;
    } else {
        cost+=(n/m)*b;
        if((n%m)*a>b){
            cost+=b;
        } else {
            cost+=(n%m)*a;
        }
    }
    cout<<cost;
    return 0;
}
