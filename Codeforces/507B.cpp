#include <bits/stdc++.h>

using namespace std;

int main(){
    long long r,x,y,a,b;
    cin>>r>>x>>y>>a>>b;
    double distance=sqrt((a-x)*(a-x)/1.0+(b-y)*(b-y)/1.0);
    //cout<<distance<<endl;
    double move=distance/(2*r);
    //cout<<move<<endl;
    double lanh=(long long)move;
    //cout<<lanh<<endl;
    if(move>lanh){
        cout<<++lanh;
    } else {
        cout<<lanh;
    }
}
