#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool character[26]={0};
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        c=tolower(c);
        character[c-97]=true;
    }
    for(int i=0;i<26;i++){
        //cout<<character[i]<<' ';
        if(character[i]==false){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
