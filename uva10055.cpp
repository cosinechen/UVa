#include <iostream>
using namespace std;

int main(){
    long long a,b;
    while(cin >> a >> b){
    long long ans;
    if(a>=b)
        ans=a-b;
    else if(a<b)
    	ans=b-a;

    cout << ans << endl;
    }
}
