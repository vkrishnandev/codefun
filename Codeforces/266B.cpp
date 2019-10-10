#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int j=s.length()-2;j>=0;j--){
            while(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j-=2;
            }
        }
    }
    cout<<s;
}
