#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
    int c,v0,v1,a,l,reading=0,days=0;
    cin>>c>>v0>>v1>>a>>l;
    while(reading<c){
        reading+=v0;
        days++;
        if(v0<v1){
            v0+=a;
        }
        reading=-l;
    }
    cout<<days;
}
