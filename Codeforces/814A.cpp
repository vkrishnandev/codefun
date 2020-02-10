#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[2*n+1];
    int curr=0;
    int maxOfTram=-1;

    for(int i=0;i<2*n;i++){
        int temp;
        cin>>temp;
        if(!(i%2)){
            curr-=temp;//cout<<curr;
        } else {
            curr+=temp;//cout<<curr;
            if(curr>maxOfTram){
                maxOfTram=curr;

            }
        }
    }
    cout<<maxOfTram;
}
