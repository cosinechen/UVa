#include <iostream>
//#include <cstdio>
using namespace std;

int main(){
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
	int a,b,i;
	while(cin >> a >> b){
        int count=0;
		if(a==0 && b==0)
			break;

		for(i=1;i*i<=b;i++){
			if(i*i>=a&&i*i<=b)
				count++;
		}
		cout << count << endl;
	}
}
