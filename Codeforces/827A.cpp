#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>


using namespace std;

int main(){
    long long n;
    string s="s";
    long long lens=s.length();
    cin>>n;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        int len=t.length();
        long long k;
        cin>>k;
        for(int j=0;j<k;j++){
            long long x;
            cin>>x;
            if(x+len>lens){
                lens=x+len-1;
                //cout<<lens<<endl;
                s.resize(lens);
            }
            s.replace(x-1,len,t);

        }
    }
    cout<<s;
    //system("PAUSE");
    //getchar();
}
