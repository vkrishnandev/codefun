#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main(){
    string s1,s2,stringin;
    cin>>s1>>s2>>stringin;
    int length=stringin.length();
    string stringout;
    for(int i=0;i<length;i++){
        if(stringin[i]>=65 && stringin[i]<=90){
            stringin[i]=(char)(stringin[i]+32);
            //cout<<stringin[i]<<' ';
            for(int j=0;j<26;j++){
                if(stringin[i]==s1[j]){
                    //cout<<stringin[i]<<j<<' ';
                    cout<<(char)(s2[j]-32);
                    //cout<<stringout[i];
                }
            }
        } else if(stringin[i]>=97 && stringin[i]<=122) {
            for(int j=0;j<26;j++){
                if(stringin[i]==s1[j]){
                    cout<<s2[j];
                }
            }
        } else {
            cout<<stringin[i];
        }
    }
    //cout<<stringout;
}
