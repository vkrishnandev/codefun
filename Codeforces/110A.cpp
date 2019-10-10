#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    bool lucky=false;
    int arr[]={4,7,44,47,74,77,444,447,474,744,477,747,774,777};
    cin>>n;
    int count=0;
    for(int i=0;i<n.size();i++){
        if(n[i]=='4' || n[i]=='7'){
            count++;
        }
    }
    for(int i=0;i<13;i++){
        if(count==arr[i]){
            lucky=true;
            break;
        }
    }
    if(lucky){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
