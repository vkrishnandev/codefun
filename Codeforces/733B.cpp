#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    int l[n],r[n],beauty[n];
    int right=0,left=0,maxx=0;
    int sumLeft=0,sumRight=0;
    int index=-1;

    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        sumLeft+=l[i];
        sumRight+=r[i];

    }
    maxx=abs(sumLeft-sumRight);
    for(int i=0;i<n;i++){
        int newsumLeft=sumLeft-l[i]+r[i];
        int newsumRight=sumRight-r[i]+l[i];
        int temp=abs(newsumLeft-newsumRight);
        if(temp>maxx){
            maxx=temp;
            index=i;
        }
    }
    cout<<index+1;
}
