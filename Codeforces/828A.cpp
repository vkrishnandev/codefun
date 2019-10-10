#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n,a,b,temp=0;
    cin>>n>>a>>b;
    vector<int>group;
    bool serve=true;
    long long sum=0;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        group.push_back(c);
    }
    for(int i=0;i<n;i++){
        if(group.at(i)==1){
            if(a>0){
                a--;
            }
            else if(b>0) {
                b--;
                temp++;
            } else if(temp>0){
                temp--;
            } else {
                sum+=group.at(i);
            }
        } else {
            if(b>0){
                b--;
            } else {
                 sum+=group.at(i);
            }
        }
    }
//    }
//
//        for(int i=temp;i<n;i++){
//            sum+=group.at(i);
//        }

    cout<<sum;
}
