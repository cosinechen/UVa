#include <stdio.h>

int main(){
	int s,a,b,c,ans;
	while(scanf("%d %d %d %d",&s,&a,&b,&c)){
		if(s+a+b+c==0)
			break;
		ans=40*3+(40+s-a)%40+(40+b-a)%40+(40+b-c)%40;
		printf("%d\n",ans*9);
	}
}