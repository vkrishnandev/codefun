#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    long long x1,y1,x2,y2;
    long long x,y;
    cin>>x1>>y1>>x2>>y2;
    cin>>x>>y;
    long long dx=x2-x1;
    long long dy=y2-y1;

    if(((dx/x)%2)==((dy/y)%2)){
            cout<<"YES";
    }
    else {
            cout<<"NO";
    }
}
