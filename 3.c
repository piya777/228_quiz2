#include<stdio.h>
#include<string.h>

    void main(){
        int count=0,i,n;;
        scanf("%d",&n);
        int find[n][1000000];
        for( i=0 ; i<n ; i++ ){
            find[i]=i;
            printf("%c\n",find[i]);
        }
    }
