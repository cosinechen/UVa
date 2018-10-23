#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char input[]={"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./'"};
    char c;
    while(cin.get(c)){
    	c = tolower(c);

        for(int i=0;i<sizeof(input);i++){

            if(c==input[i]){
                c=input[i-2];
                cout << c;
            }
        }
        if(c==' ')
            cout << " ";
        if(c=='\n')
            cout << endl;
    }
}
