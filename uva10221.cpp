#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#define Pi 2*acos(0.0)
using namespace std;

int main(){
    double s,a;
    string str;

	while(cin >> s >> a>> str){

        if(str.compare("min")==0){
            a/=60.0;
        }
        if(a>180)
            a=360-a;
        s+=6440;

        double arc,chord;
        arc = 2*Pi*s*(a/360.0);
        chord = 2*s*sin(a*Pi/360.0);
        //chord = sqrt(2*s*s*(1-cos(Pi*a/180.0)));

        cout << fixed << setprecision(6) << arc << " " << chord << endl;
	}
}
