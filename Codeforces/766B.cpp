#include <bits/stdc++.h>

using namespace std;

bool triangle(long long a,long long b,long long c){
    return(a+b>c);
}

int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        if(triangle(a[i],a[i+1],a[i+2])){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
