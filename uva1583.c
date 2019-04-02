#include <stdio.h>
#include <string.h>
#define max 100001

int main(){
	int ans[max];
	int x,y;
	memset(ans,0,sizeof(ans));
	for(int i=1;i<max;i++){
		x=i;
		y=i;
		while(x>0){
			y+=x%10;
			x/=10;
		}
		if(i<ans[y]||ans[y]==0)
			ans[y]=i;
	}
	int t, input;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&input);
        printf("%d\n",ans[input]);
    }
    return 0;
}
