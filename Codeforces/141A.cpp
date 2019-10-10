#include <bits/stdc++.h>

using namespace std;

bool check(string root, string compare, bool character[]){
    int leng=compare.length();
    for(int i=0;i<root.length();i++){
        for(int j=0;j<leng;j++){
            if(compare[j]==root[i]){

                if(!character[j]){
                    //cout<<compare[j]<<' '<<j<<' '<<character[j]<<endl;
                    character[j]=true;
                    break;
                }
            }
            if(j==leng-1){
                return false;
            }
        }
    }
    return true;

}

int main(){
    string guest, host, mix;
    cin>>guest>>host>>mix;
    int leng=mix.size();
    bool character[leng]={0};
    if(check(guest,mix,character) && check(host,mix,character)){
        for(int i=0;i<leng;i++){
            if(!character[i]){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
        return 0;
    } else {
        cout<<"NO";
        return 0;
    }
}
