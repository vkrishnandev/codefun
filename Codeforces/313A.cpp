#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    char max=-1;
    int index=-1;
    if(s[0]=='-'){
        for(int i=1;i<s.length();i++){
            if(s[i]>=max){
                max=s[i];
                index=i;
            }
        }
        if(s.length()==3 &&(s[1]=='0' || s[2]=='0')){
            cout<<"0";
        } else {
            for(int i=0;i<s.length();i++){
                if(i!=index){
                    cout<<s[i];
                }
            }
        }
    } else {
        cout<<s;
    }

}
