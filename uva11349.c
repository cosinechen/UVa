#include <stdio.h>

int main(){
    int cases,n,test=0;
    char tmp[2];
    long long arr[100][100];

    scanf("%d",&cases);
    while(cases--){
        scanf("%s%s%d",tmp,tmp,&n);
        int flag=1,i,j;

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%lld",&arr[i][j]);
                if(arr[i][j]<0){
                    flag=0;
                }
            }
        }

        if(flag==1){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(arr[i][j]!=arr[n-1-i][n-1-j]){
                        flag=0;
                        break;
                    }
                }
            }
        }
        ++test;
        if(flag==0)
            printf("Test #%d: Non-symmetric.\n",test);
        else
            printf("Test #%d: Symmetric.\n",test);
    }
    return 0;
}
