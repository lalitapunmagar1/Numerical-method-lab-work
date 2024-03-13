#include<iostream>
#include<math.h>
#define f(x) sin(x)+x*x+5*x-9
using namespace std;

int main(){
	float a,b,c,f1,f2,f3,err;
	int step=1;
	up:
		cout<<"Enter the value of a"<<endl;
		cin>>a;
		cout<<"Enter the value of b"<<endl;
		cin>>b;
		cout<<"Enter the value of error"<<endl;
		cin>>err;
		f1=f(a);
		f2=f(b);
		if(f1*f2>0){
			cout<<"Invalid input"<<endl;
			goto up;
		}
		do{
			c=(a+b)/2;
			f3=f(c);
			cout<<"Iteration-"<<step<<"x="<<c<<"f(x)="<<f3<<endl;
			if(f3*f1<0){
				b=c;
			}
			else{
				a=c;
			}
			step=step+1;		
			}
			while(fabs(f3)>err);
			cout<<"Root is"<<c<<endl;
			return 0;
}

