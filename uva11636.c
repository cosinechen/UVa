#include <stdio.h>
#include <math.h>

int main(){
	int n,cases=0,ans;
	while(scanf("%d",&n) && n>=0){
		ans=0;
		++cases;
		for(int i=0;i<=14;i++){
			if(n<=pow(2,i)){
				ans=i;
				printf("Case %d: %d\n",cases,ans);
				break;			
			}				
		}		
	}
}