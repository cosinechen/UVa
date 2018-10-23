#include <stdio.h>

int main(){
    int n;
    long long s,d;

	scanf("%d",&n);
	while(n--){
		scanf("%lld %lld",&s,&d);
		/*s=x+y,d=x-y -> x=(s+d)/2,y=(s-d)/2*/

		long long x,y;
		x=(s+d)/2;y=(s-d)/2;

		if(x>=0&&y>=0&&((s+d)%2==0)&&((s-d)%2==0)){
			printf("%lld %lld\n",x,y);
		}
		else{
			printf("impossible\n");
		}
	}
	return 0;
}
