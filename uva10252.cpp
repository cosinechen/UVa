#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
	string a,b;
	while(cin >> a >> b){
		int count1[26]={},count2[26]={},ans[26]={};
		for(int i=0;i<a.length();i++){
			count1[a[i]-'a']++;
		}
		for(int i=0;i<b.length();i++){
			count2[b[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			if(count1[i]<count2[i])
				ans[i]=count1[i];
			else
				ans[i]=count2[i];
			if(ans[i]>0){
				for(int j=0;j<ans[i];j++){
					cout << char(i+'a');
				}
			}
		}
		cout << endl;
	}
	fclose(stdin);
	fclose(stdout);
}
