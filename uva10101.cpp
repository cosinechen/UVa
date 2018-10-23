//The first method by me.UVA can't pass, but codingfrenzy is OK.
/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void bangla(long long x){
	string unit[4]={"kuti","lakh","hajar","shata"};
	int flag;
	if(x!=0){
		if(x/10000000!=0){
			flag=0;
			bangla(x/10000000);
		}
	}
	else{
		flag=1;
	}
	long long a[4]={0};
	a[0]=x/100000%100;
	a[1]=x/1000%100;
	a[2]=x/10%100;
	a[3]=x%10;

	for(int i=0;i<4;i++){
		if(i==0&&a[i]==0&&flag==0){
			cout << " " << unit[i];
		}
		if(a[i]!=0){
			cout << " " << a[i] << " " << unit[i];
		}
	}
}

int main(){
	long long n;
	int count=1;
	while(cin >> n){

		cout << setw(4) << count << ".";
		bangla(n/100);

		if(n==0){
			cout << " 0";
		}
		if(n%100!=0){
			cout << " " << n%100;
		}
		cout << endl;
		count++;
	}
}*/
/*
#include<iostream>
#include<cstdio>
using namespace std;

void print_number( long long n ){
  if( n == 0 ) return;

  if( n/10000000 ){
    print_number( n/10000000 );
    printf( " kuti" );
    n %= 10000000;
  }

  if( n/100000 ){
    print_number( n/100000 );
    printf( " lakh" );
    n %= 100000;
  }

  if( n/1000 ){
    print_number( n/1000 );
    printf( " hajar" );
    n %= 1000;
  }

  if( n/100 ){
    print_number( n/100 );
    printf( " shata" );
    n %= 100;
  }

  if( n ) printf( " %lld", n );
}

int main(){
  long long n;
  int num = 1;
  while( scanf( "%lld", &n ) != EOF ){
    printf( "%4d.", num );
    if( n ) print_number( n );
    else printf( " 0" );
    printf( "\n" );
    num++;
  }
  return 0;
}*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void rec(long long x,int flag)
{
    string unit[4]={"kuti","lakh","hajar","shata"};
    if(x!=0)
    {
        if(x/10000000!=0){
            flag=0; //is not the highest
            rec(x/10000000,flag);
        }
        else{flag=1;}
        long long a[4]={0};
        a[0]=(x/100000)%100;
        a[1]=(x/1000)%100;
        a[2]=(x/10)%100;
        a[3]=x%10;
        for(int i=0;i<4;i++)
        {
            if(i==0 && a[i]==0 && flag==0){cout<<" "<<unit[i];}    //print kuti
            if(a[i]!=0){cout<<" "<<a[i]<<" "<<unit[i];}
        }
    }
}
int main()
{
    long long x;
    int counter(1);
    while(cin>>x)
    {
        cout<<setw(4)<<counter<<".";
        rec(x/100,0);
        if(x==0) {cout<<" 0";}
        if(x%100!=0) {cout<<" "<<x%100;}
        cout<<endl;
        counter++;
    }
    return 0;
}
