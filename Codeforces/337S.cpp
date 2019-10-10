#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    int maxx=INT_MAX;
    vector<int> f;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        f.push_back(temp);
    }

    sort(f.begin(),f.end());
    for(int i=0;i<m;i++){

//cout<<f[i];
    }
    for(int i=0;i<m-n+1;i++){
        if((f[i+n-1]-f[i])<maxx){
            maxx=f[i+n-1]-f[i];
        }
    }
    cout<<maxx;
}
