#include <iostream>
#include <string.h>

using namespace std;
int main(){

	char s[1000001];
	int length,flag;
    int i,j,k;
	while((cin >> s) && (strcmp(s,"."))){
     	length=strlen(s);
		flag=0;

		for(i=1;i<=length;i++){
            if(length%i != 0)
                continue;
            flag=1;
            for(j=i;j<length&&flag==1;j+=i){
                for(k=0;k<i&&flag==1;k++){
                    if(s[k]!=s[j+k])
                        flag=0;
                }
            }
            if(flag){
                cout << length/i << endl;
                break;
            }
		}
	}
	return 0;
}
