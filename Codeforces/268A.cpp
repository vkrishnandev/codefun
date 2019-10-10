#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int count=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        cin>>a[i][1];
        cin>>a[i][2];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][2]==a[j][1]){
                count++;
            }
        }
    }
    cout<<count;
}
