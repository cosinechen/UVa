#include <iostream>

using namespace std;

int main(){
    int N, R, tmp;
	
    while (cin >> N >> R){
        bool r[10001]= {0};
        for (int i = 0; i < R; i++){
            cin >> tmp;
            r[tmp] = true;
        }

        if (N == R)
            cout << "*" << endl;
        else {
            for (int i = 1; i <= N; i++){
                if (!r[i])
                    cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}