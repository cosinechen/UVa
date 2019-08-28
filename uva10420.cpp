#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    int n;
    string country[2001];
    string name;

    while(cin >> n){
        for(int i=0;i<n;i++){
            cin >> country[i];
            getline(cin,name);
        }
    }

    sort(country,country+n);

    for(int i=0;i<n;i++){
        cout << country[i] << " ";
        int num=0,j;
        for(j=i;j<n;j++){
            if(country[i]!=country[j])
                break;
            num++;
        }
        cout << num << endl;
        i=j-1;
    }
    return 0;
    /*fclose(stdin);
	fclose(stdout);*/
}
