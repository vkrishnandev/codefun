#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool lucky=false;
    int arr[]={4,7,44,47,74,77,444,447,474,744,477,747,774,777};

    for(int i=0;i<13;i++){
        if(n==arr[i] || (n%arr[i]==0)){
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
