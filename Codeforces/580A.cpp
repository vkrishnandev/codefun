#include <bits/stdc++.h>
using namespace std;

int main(){
    int max=0,count=0;
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            count++;
        } else {
            count=0;
        }
        if(count>max){
            max=count;
        }
    }
    cout<<max+1;
}
