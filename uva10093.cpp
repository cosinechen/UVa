#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
	string input,num="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	while(cin >> input){
		for(int i=0;i<input.length();i++){
			input[i]=num.find(input[i],0);
			input[i]=max(0,(int)input[i]);
		}

		int n=*max_element(input.begin(),input.end())+1;
		n=max(n,2);
		for(;n<=62;n++){
			int rsd=0;
			for(int j=0;j<input.length();j++){
				rsd=rsd*n+input[j];
				rsd%=(n-1);
			}
			if(rsd==0)
				break;
		}
			if(n<=62)
				cout << n;
			else
				cout << "such number is impossible!";
			cout << endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
