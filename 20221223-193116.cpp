#include<iostream>
#include<cmath>
using namespace std;
int sum(int num1,int num2)
{
	return num1+num2;
}
int sub(int num1,int num2)
{
	return num1-num2;
}
int mul(int num1,int num2)
{
	return num1*num2;
}
int dive(int num1,int num2)
{
	return num1/num2;
}
int mod(int num1,int num2)
{
	return num1%num2;
}
int main()
{
	int num1,num2,res1,res2,res3,res4,res5,res6,res7;
	cin>>num1>>num2;
	res1=sum(num1,num2);
	cout<<"sum="<<res1<<endl;
	res2=sub(num1,num2);
	cout<<"subtraction="<<res2<<endl;
	res3=mul(num1,num2);
	cout<<"multiplication="<<res3<<endl;
	res4=dive(num1,num2);
	cout<<"division="<<res4<<endl;
	res5=mod(num1,num2);
	cout<<"remainder="<<res5<<endl;
	res6=sqrt(num1); 
	cout<<"square root="<<res6<<endl;
	res7=log(num1);
	cout<<"logarthim="<<res7<<endl;
	return 0;
}