#include <bits/stdc++.h>

using namespace std;

int main(){
    long n;
    cin>>n;
    int arr[26]={0};
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        arr[c-65]++;
    }
    //cout<<arr[0]<<arr[3];
    if(arr[0]>arr[3]){
        cout<<"Anton";
    } else if(arr[0]==arr[3]){
        cout<<"Friendship";
    } else {
        cout<<"Danik";
    }
    return 0;
}
