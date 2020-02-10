#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    int day=0;
    int count=0;
    cin>>n>>m;
    while(n>0){
        count++;
        n--;
        day++;
        if(day==m){
            day=0;
            n++;
        }
    }
    cout<<count;
}
