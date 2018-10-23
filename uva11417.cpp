#include <iostream>
using namespace std;

int GCD(int m,int n){
	/*while(n!=0){
		int tmp=m%n;
		m=n;
		n=tmp;
	}
	return m;*/
	return (n == 0) ? m : GCD(n, m % n);
}

int main()
{
	int n;
	while(cin >> n){
		if(n==0)
			break;
		int g=0;
		for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                g+=GCD(i,j);
            }
        }
		cout << g << endl;
	}
}
