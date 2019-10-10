#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    int len=s.length();
    for(int i=0;i<len-1;i++){
        if(s[i]=='V'){
            if(s[i+1]=='K'){
                count++;
            }
        }
    }
    for(int i=0;i<len-2;i++){
        if(s[i]=='V'){
            if(s[i+1]=='V')
                if(s[i+2]!='K'){
                    count++;
                    break;
                }
        }
    }
    cout<<count;
}
