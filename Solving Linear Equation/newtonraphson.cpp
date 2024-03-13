#include<iostream>
#include<math.h>
#define f(x) sin(x)+x*x+5*x-9
#define g(x) cos(x)+2*x+5
using namespace std;

int main(){
	float a,b,f1,f2,f3,err;
	int step=1;
	int n;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	cout<<"Enter the value of error"<<endl;
	cin>>err;
	cout<<"Enter the value of iteration"<<endl;
	cin>>n;
	do{
		f1=f(a);
		f2=g(a);
		b=a-f1/f2;
		cout<<"Iteration-"<<step<<"x="<<b<<"f(x)"<<f3<<endl;
		a=b;
		step=step+1;
		f3=f(b);
	}while(fabs(f3)>err);
	cout<<"Root is:"<<b<<endl;
	return 0;
}

