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
	   
	   do{
	   	f1=f(a);
	   	f2=f(b);
	   	c=b-(b-a)*f2/(f2-f1);
	   	f3=f(c);
	   	cout<<"Iteration-"<<step<<"x="<<c<<"f(x)"<<f3<<endl;
	   	a=b;
	   	f1=f2;
	   	b=c;
	   	f2=f3;
	   	step=step+1;
	   }while(fabs(f3)>err);
	   cout<<"Root is:"<<c<<endl;
	   return 0;
} 
