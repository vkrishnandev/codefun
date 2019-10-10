#include <stdio.h>

int check(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int max=-1;
    while(1){
        int temp;
        scanf("%d",&temp);
        if(temp==0){
            break;
        }
        if(check(temp)==1){
            if(temp>max){
                max=temp;
            }
        }
    }
    if(max!=-1){
        printf("%d",max);
    } else {
        printf("khong co so nguyen to nao");
    }
}
