#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	int cases,r,s[500];

	cin >> cases;
	while(cases--){
		cin >> r;
		for(int i=0;i<r;i++){
            cin >> s[i];
		}
        sort(s,s+r);//array_begin,array_end

        int median;
        if(r%2==0){
            median=s[r/2-1];
        }
        else if(r%2==1){
            median=s[(r-1)/2];
        }
        int tmp,ans=0;
        for(int i=0;i<r;i++){
            tmp=abs(median-s[i]);
            ans+=tmp;
        }
        cout << ans << endl;
	}
}
