#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int tong=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        tong+=num;
    }
    cout<<(float)tong/(n*100.0)*100;
}
