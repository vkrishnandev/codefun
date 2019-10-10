#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;

    int count=0;
    cin>>n;
    long long temp=n;
    //cout<<n<<endl;
    if(n<10){
        cout<<'1';
    } else {
        while((temp/10)>0)
        {
            temp=temp/10;
            count++;

        }
        temp++;
        for(int i=0;i<count;i++){
            temp*=10;
        }
        cout<<temp-n;
        return 0;
        //cout<<temp<<' '<<count;
    }

}
