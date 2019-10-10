#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int time1,time2;
    time1=t1*2+v1*s;
    time2=t2*2+v2*s;
    //cout<<time1<<' '<<time2;
    if(time1<time2){
        cout<<"First";
    } else if(time1==time2){
        cout<<"Friendship";
    } else {
        cout<<"Second";
    }
    return 0;
}
