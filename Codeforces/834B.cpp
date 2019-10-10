#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    int k;
    string s;
    cin>>n>>k>>s;
    long long count=1;
    int wordcount=0;
    bool appear[26]={0};
    bool boo[26]={0};
    int counter[26]={0};
    long long len=s.length();
    for(int i=len-1;i>=0;i--){
        if(!boo[s[i]-65]){
            boo[s[i]-65]=1;
            counter[s[i]-65]=i;
        }
    }
//    for(int i=0;i<26;i++){
//        cout<<boo[i];
//    }
//    cout<<endl;
//    for(int i=0;i<26;i++){
//        cout<<counter[i]<<' ';
//    }
//    cout<<endl;
    for(int i=0;i<len-1;i++)
    {
        if(appear[s[i]-65]==0){
            appear[s[i]-65]=1;
            k--;
        }
        if(k<0){
            break;
        }
        if(i==counter[s[i]-65]){
            k++;
        }
        //cout<<k<<endl;
        if(k<0){
            break;
        }

    }
    //int guard=;
    if(k>=0){
        cout<<"NO";
    } else {
        cout<<"YES";
    }
}
