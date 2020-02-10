#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    bool div;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]%2==arr[1]%2){
        div=arr[0]%2;
    } else if(arr[0]%2==arr[2]%2){
        div=arr[0]%2;
    } else {
        div=arr[1]%2;
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=div){
            cout<<i+1;
            break;
        }
    }
    return 0;
}
