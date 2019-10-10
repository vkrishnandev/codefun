#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int timeleft=240-k;
    for(int i=1;i<=n;i++){
        if((timeleft-5*i)>=0){
            count++;
            timeleft-=5*i;
        } else {
            break;
        }
    }
    cout<<count;
}
