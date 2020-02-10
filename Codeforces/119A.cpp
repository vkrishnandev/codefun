#include <bits/stdc++.h>

using namespace std;
bool Simons(int, int, int&);
bool other(int,int,int&);

bool Simons(int a,int b, int &n){
    if(n>=0){
        //cout<<"gcd"<<a<<' '<<n<<'='<<__gcd(a,n)<<endl;
        n=n-__gcd(a,n);
    } else {
        return 0;
    }
    return other(a,b,n);
}
bool other(int a, int b, int &n){
    if(n>=0){
        //cout<<"gcd"<<b<<' '<<n<<'='<<__gcd(b,n)<<endl;
        n=n-__gcd(b,n);
    } else {
        return 1;
    }
    return Simons(a,b,n);
}

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    cout<<Simons(a,b,n);
}
