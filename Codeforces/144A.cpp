#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int min=INT_MAX;
    int max=-1;
    int maxindex=-1,minindex=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            maxindex=i;
        }
        if(a[i]<=min){
            min=a[i];
            minindex=i;
        }
    }
    //cout<<maxindex<<' '<<minindex<<endl;
    if(maxindex>minindex){
        cout<<maxindex+n-1-minindex-1;
    }else {
        cout<<maxindex+n-1-minindex;
    }
}
