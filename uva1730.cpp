#include <iostream>
//#include <cstdio>
using namespace std;

int main(){
	/*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
	long long n;

	while(cin >> n && n>0){
		long long l=1,times,r,ans=0;
		while(l<=n){
			times=n/l;
			r=n/times;
			ans+=times*((l+r)*(r-l+1)/2);
			l=r+1;
		}
		cout << ans-1 << endl;
	}
	return 0;
	/*fclose(stdin);
	fclose(stdout);*/
}
