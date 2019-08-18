#include <stdio.h>

int main(){
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/

	int n;
	while(scanf("%d",&n)!=EOF){
		int x=1,remainder=1;
        if(n==1){
            x=0;
        }
		while(remainder){
			remainder=(remainder*10+1)%n;
			x++;
		}
		printf("%d\n",x);
	}
	return 0;
}
