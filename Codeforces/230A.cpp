#include <bits/stdc++.h>

using namespace std;

int main(){
    long long s,n;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        long long x,y;
        cin>>x>>y;
        if(s>x){
            s+=y;
        } else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
