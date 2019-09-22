#include <iostream>
#include <cmath>
//#include <cstdio>
#define MAX 1300000
using namespace std;
int prime[MAX]={0};

int main(void){
	/*freopen ("in.txt","r",stdin);
    freopen ("out.txt","w",stdout);*/
    int n;

    prime[0]=prime[1]=1;
    for(int i=2;i<=sqrt(MAX);i++){
        if(prime[i]==0){
            int j,k;
            for(k=(MAX-1)/i,j=i*k ; k>=i ; k--,j-=i){
                if(prime[k]==0)
                    prime[j]=1;
            }
        }
    }

    while(cin >> n){
        if(n==0)
            break;
		int counts=0;

        for(int i=n; prime[i]!= 0; i--)
            counts++;
        for(int i=n; prime[i]!= 0; i++)
            counts++;
		cout << counts << endl;
    }
    return 0;
	/*fclose (stdin);
    fclose (stdout);*/
}
