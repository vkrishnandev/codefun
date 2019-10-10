#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    long long old;
    long long sum=0;
    old=1;
    for(int i=0;i<m;i++){
        long long newer;
        cin>>newer;
        if(newer<old){
            sum+=newer-old+n;
        } else {
            sum+=newer-old;
        }
        //cout<<sum<<' '<<newer<<' '<<old<<endl;
        old=newer;
    }
    cout<<sum;
}
