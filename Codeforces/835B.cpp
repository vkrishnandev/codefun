#include <bits/stdc++.h>

using namespace std;

int arrtoint(char c){
    return (int)(c-48);
}

int main(){
    long long k;
    string n;
    cin>>k;
    cin>>n;
    int count=0;
    long sumOfdigits=0;
    int len=n.length();
    for(int i=0;i<len;i++){
        sumOfdigits+=arrtoint(n[i]);
    }
    sort(n.begin(),n.end());

    for(int i=0;i<len;i++){
        if(sumOfdigits<k){
            count++;
            int temp=9-arrtoint(n[i]);
            sumOfdigits+=temp;
        }
    }
    cout<<count;
}
