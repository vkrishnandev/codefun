#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int t1=(a+b)*c;
    int max=t1;
    int t2=a+b+c;
    if(t2>max){
        max=t2;
    }
    int t3=a*(b+c);
    if(t3>max){
        max=t3;
    }
    int t4=a*b*c;
    if(t4>max){
        max=t4;
    }
    cout<<max;
}
