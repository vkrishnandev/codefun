#include <bits/stdc++.h>

using namespace std;

int main(){
    string a="v<^>";
    char first, last;
    cin>>first>>last;
    int index=-1,lastindex=-1;
    bool cw=false,ccw=false;
    long long n;
    cin>>n;
    for(int i=0;i<4;i++){
        if(first==a[i]){
            index=i;
        }
    }
    lastindex=index+n%4;
    if(lastindex>=4){
        lastindex-=4;
    }
    if(a[lastindex]==last){
        cw=true;
    }
    lastindex=index-n%4;
    if(lastindex<0){
        lastindex+=4;
    }
    if(a[lastindex]==last){
        ccw=true;
    }
    if(cw){
        if(!ccw){
            cout<<"cw";
        } else {
            cout<<"undefined";
        }
    } else if(ccw){
        cout<<"ccw";
    } else {
        cout<<"undefined";
    }
}
