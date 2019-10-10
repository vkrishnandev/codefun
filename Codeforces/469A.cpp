#include <bits/stdc++.h>

using namespace std;

void duc(bool ind[],int n){
    int numb;
    for(int i=0;i<n;i++){
        cin>>numb;
        ind[numb-1]=true;
    }
}
int main(){
    int n;
    cin>>n;
    bool ind[n]={0};
//    for(int i=0;i<n;i++){
//        cout<<ind[i]<<' ';
//    }
    int p,q;
    cin>>p;
    duc(ind,p);
    cin>>q;
    duc(ind,q);
//    for(int i=0;i<n;i++){
//        cout<<ind[i]<<' ';
//    }
    for(int i=0;i<n;i++){
        if(ind[i]==false){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
