#include <bits/stdc++.h>

using namespace std;

int main(){
    float n,k;
    cin>>n>>k;
    float sum=0,num=0;
    for(int i=0;i<n;i++){
        int mark;
        cin>>mark;
        sum+=mark;
        num++;
    }
   // cout<<num<<' '<<sum<<endl;
    //while(sum/num<k)
    while (sum/num<k-0.5){
        sum+=k;
        num++;
    }
    cout<<num-n;
}
