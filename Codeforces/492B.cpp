#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    vector<long long>lantern;

    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        lantern.push_back(temp);
    }
    sort(lantern.begin(),lantern.end());
    long long distance=max(lantern[0]*2,(l-lantern[n-1])*2);
    for(int i=0;i<n-1;i++){
        //cout<<distance<<endl;
        distance= (distance<lantern[i+1]-lantern[i]) ?  lantern[i+1]-lantern[i]:distance ;
    }
    cout<<((double)(distance))/2;
}
