#include <stdio.h>
#include <math.h>

int main(){
	char str[10];
	double Pi,s,a,arc,chord;
	Pi=atan(1)*4;
	while(scanf("%lf %lf %s",&s,&a,&str)!=EOF){
		if(str[0]=='m')
			a/=60;
		a=fmod(a,360);
		if(a>180)
			a=360-a;

		arc=2*Pi*(s+6440)*(a/360);
		chord=2*(s+6440)*sin(a*Pi/360);
		printf("%.6lf %.6lf\n",arc,chord);
	}
	return 0;
}
