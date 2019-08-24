#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    int T,cases=0;
    char line[950];

    cin >> T;
    getchar();
    getchar();

    while(T--){
        cout << "Case #" << ++cases << ":" << endl;
        while(fgets(line,950,stdin) && line[0]!='\n'){
            int word=1,c=1;
            for(int i=0;line[i]!='\0',line[i]!='\n';i++){
                if(line[i]==' ')
                    word=0;

                if(word==c){
                    cout << line[i];
                    word++;
                    c++;
                }
                word++;
            }
            cout << endl;
        }
        if(T)
            cout << endl;
    }
    return 0;
    /*fclose(stdin);
	fclose(stdout);*/
}
