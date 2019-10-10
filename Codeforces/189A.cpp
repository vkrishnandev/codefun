#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a[3];
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    //cout<<a[0];
    int i=0;
    int count=0;
    do{

        if(n-a[i]<0){
            i++;

        } else {
            n-=a[i];
            count++;
        }
    }while(i<3);
    cout<<count;
    return 0;
}
