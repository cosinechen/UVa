#include <iostream>
//#include <cstdio>
using namespace std;

int main(){
	/*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    int a,b;

    while(cin >> a >> b, a&&b){
        int x[a],y[b];

        for(int i=0;i<a;i++){
            cin >> x[i];
        }
        for(int i=0;i<b;i++){
            cin >> y[i];
        }

        for(int i=0;i<a;i++){
            if(x[i]==x[i-1])
                x[i]=-1;

            bool flag = false;
			for(int j=0;j<b;j++){
				if(y[j]==x[i]){
					y[j]=-1;
					flag=true;
				}
			}
			if(flag)
				x[i]=-1;
        }

        for(int i=0;i<b;i++){
            if(y[i]==y[i-1])
                y[i]=-1;
        }

		int xa=0,yb=0;
		for(int i=0;i<a;i++){
			if(x[i]!=-1)
				xa++;
		}

		for(int i=0;i<b;i++){
			if(y[i]!=-1)
				yb++;
		}

        int ans = (xa<yb) ? xa :yb;
		cout << ans << endl;
    }
    return 0;
    /*fclose(stdin);
	fclose(stdout);*/
}
