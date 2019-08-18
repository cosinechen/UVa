#include <iostream>
//#include <cstdio>
using namespace std;

int main(){
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    int ans[32];
    int cases,n;
    cin >> cases;

    while(cases--){
        cin >> n;
        if(n==0){
            cout << 0 << endl;
            continue;
        }
        else if(n==1){
            cout << 1 << endl;
            continue;
        }

        int len=0;
        for(int i=9;i>1;i--){
            while(n%i==0){
                n/=i;
                ans[len]=i;
                len++;
            }
        }
        if(n==1){
            for(int j=len-1;j>=0;j--){
                cout << ans[j];
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
