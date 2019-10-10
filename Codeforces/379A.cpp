#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int sum=a;
    while(a>=b){
        int div=a/b;
        int mod=a%b;
        sum+=div;
        a=div+mod;
    }
    cout<<sum;
}
