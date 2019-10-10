#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t,x,s;
    cin>>t>>x>>s;
    if(s==t){
        cout<<"YES";
        return 0;
    } else if(s>=t+x){
        if((s-t)%x<=1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
