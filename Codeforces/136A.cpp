#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int index;
        cin>>index;
        a[index-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}
