#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int start=0,finish=n-1;
    int a[n],one=0,zero=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]){
            one++;
        } else {
            zero++;
        }
    }
    int distance=zero-one;//cout<<distance;
    int dis[n];
    //dis[0]=distance;
    int maxx=-1;
    for(int i=0;i<n;i++){
        int temp=distance;
        if(distance>maxx){
            //cout<<"distance: "<<distance<<' '<<"maxx: "<<maxx<<endl;
            //cout<<"in first ";
            maxx=distance;
            start=i;
            finish=n-1;
        }
        for(int j=n-1;j>i;j--){

            if(a[j]==0){
                temp--;
                if(temp>maxx){
                    maxx=temp;
                    start=i;
                    finish=j-1;
                    //cout<<"start: "<<start<<' '<<"finish: "<<finish<<"temp:"<<temp<<endl;
                }
            } else {
                temp++;
                if(temp>maxx){
                    maxx=temp;
                    start=i;
                    finish=j-1;
                    //cout<<"start: "<<start<<' '<<"finish: "<<finish<<"temp:"<<temp<<endl;
                }
            }
        }
        if(a[i]){
            distance++;
        } else {
            distance--;
        }

    }
    //cout<<maxx<<endl;
    //cout<<"start: "<<start<<' '<<"finish: "<<finish<<endl;
    for(int k=start;k<=finish;k++){
        a[k]=1-a[k];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum;

}
