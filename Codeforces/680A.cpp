#include <bits/stdc++.h>

using namespace std;

int main(){
    int t[5];
    int two=0,three=0;
    int sum=0;
    cin>>t[0]>>t[1]>>t[2]>>t[3]>>t[4];
    for(int i=0;i<5;i++){
        sum+=t[i];
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(t[i]<t[j]){
                swap(t[i],t[j]);
            }
        }
    }
    for(int i=0;i<4;i++){
        if(t[i+1]==t[i]){
            two=t[i]*2;
            break;
        }
    }
    for(int i=0;i<3;i++){
        if(t[i+2]==t[i+1] && t[i+1]==t[i]){
            three=t[i]*3;
            break;
        }
    }
    if(two>three){
        cout<<sum-two;
    } else {
        cout<<sum-three;
    }
}
