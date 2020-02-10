#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int max=-1;
    int min=10000000;
    cin>>max;
    min=max;
    for(int i=1;i<n;i++){
        int num;
        cin>>num;
        if(num>max){
            max=num;
            //cout<<"max  "<<num<<endl;
            count++;
        } else if(num<min){
            min=num;
            //cout<<"min  "<<num<<endl;
            count++;
        }
    }
    cout<<count;
}
