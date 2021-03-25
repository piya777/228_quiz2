#include<stdio.h>

    void main(){
        int n,i=2,j,k=0,x=0;
        scanf("%d",&n);
        int no[1000];
        if(n>=1&&n<=1000000){
            while(i*i*i<=n){
            no[k]=i*i*i;
            k++;
            i++;
        }
        for( i=0 ; i<k ; i++ ){
            if(n%no[i]==0){
                x++;
                break;
            }
        }
        if(x!=0){
            printf("Not Cube Free");
        }
        else{
            printf("%d",n-k);
        }
        }

    }
