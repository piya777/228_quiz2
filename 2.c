#include<stdio.h>

    void main(){
        int n,m,p,q,r,i,j;
        scanf("%d",&m);
        scanf("%d",&n);
        char silk[m][70];
        for( i=0 ; i<n ; i++ ){
            scanf("%d %d %d",&p,&q,&r);
            for( j=q-1 ; j<(q-1)+r ; j++ ){
                silk[p-1][j]='x';
            }
        }
        for( i=0 ; i<m ; i++ ){
            for( j=0 ; j<70 ; j++ ){
                if(silk[i][j]==NULL){
                    silk[i][j]='o';
                }
                printf("%c",silk[i][j]);
            }
            printf("\n");
        }

    }
