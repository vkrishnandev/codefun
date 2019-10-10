#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x;
    cin>>x;
    if(x%5){
        cout<<x/5+1;
    } else {
        cout<<x/5;
    }
}
