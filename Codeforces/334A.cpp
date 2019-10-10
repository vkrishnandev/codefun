//#include <bits/stdc++.h>
//
//using namespace std;
//
//void inle(int n){
//    int j=0;
//    for(int k=0;k<n;k++){
//        for(int i=0;i<n;i++){
//            int row=i;
//            int col=i+j;
//            if(col>=n){
//                col-=n;
//            }
//            cout<<(row)*n+(col+1)<<' ';
//            //num[row][col]=true;
//        }
//        j++;
//        cout<<endl;
//    }
//
//}
//
//void inchan(int n){
//    int j=0;
//    for(int k=0;k<n;k++){
//        for(int i=0;i<n/2;i++){
//            int row=i;
//            int col=j;
//            cout<<(row)*n+(col+1)<<' ';
//        }
//        for(int i=0;i<n/2;i++){
//            int row=n-i-1;
//            int col=n-j-1;
//            cout<<(row)*n+(col+1)<<' ';
//        }
//        cout<<endl;
//        j++;
//    }
//}
//int main(){
//    int n;
//    cin>>n;
//    bool num[n][n]={0};
//    if(n%2){
//        inle(n);
//    } else {
//        inchan(n);
//    }
//}
#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d", i + 1);
        for (int j = 1; j < n; ++j)
        {
            printf(" %d", n * j + (i + j) % n + 1);
        }
        printf("\n");
    }
    return 0;
}
