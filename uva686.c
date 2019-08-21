#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n;
	int prime[32769]={0};
	
	prime[0]=1; prime[1]=1;
	
	for(int i=2;i<sqrt(32768);i++){
		if(prime[i]==0){
			for(int j=i*i;j<=32768;j+=i){
				prime[j]=1;
			}
		}
	}

	while(scanf("%d",&n) && n){
		int count=0,x,y;

		for(int i=2;i<=n/2;i++){
			x=prime[i],y=prime[n-i];
			if(x==0 && y==0)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
