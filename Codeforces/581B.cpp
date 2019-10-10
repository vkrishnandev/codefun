//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//    long long n;
//    cin>>n;
//    long long a[n];
//    long long add[n];
//    for (int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    add[n-1]=0;
//    for(int i=n-2;i>=0;i--){
//        if(a[i]<=a[i+1]){
//            add[i]=a[i+1]-a[i]+1;
//        } else if(a[i]>a[i+1]){
//            add[i]=0;
//        }
//
//    }
//    for(int i=0;i<n;i++){
//        cout<<add[i]<<' ';
//    }
//
//}
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> floors(n);
    for(int p = 0; p < n; p++){scanf("%ld\n", &floors[p]);}

    std::vector<long> rightMax(n);
    long currentMax(0);
    for(int p = n - 1; p >= 0; p--){
        rightMax[p] = currentMax;
        if(floors[p] > currentMax){currentMax = floors[p];}
        cout<<p<<' '<<rightMax[p]<<' '<<floors[p]<<endl;

    }

    for(int p = 0; p < n; p++){
        long added = (floors[p] <= rightMax[p]) ? (rightMax[p] - floors[p] + 1) : 0;
        printf("%ld ", added);
    }

    return 0;
}
