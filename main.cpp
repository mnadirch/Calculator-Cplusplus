#include <iostream>
using namespace std;
int add(double c,double b);
int sub(double c,double b);
int mul(double c,double b);
int div(double c,double b);
int mod(int c,int b);

int main() {

	int a,e,f;
	char j;
		do{
	cout<<"MENU \n  1. Add\n  2. Subtract \n  3. Multiply \n  4. Divide \n  5. Modulus ";
	cout<<"\nEnter your choice: ";
	cin>>a;
	cout<<"Enter your first number: ";cin>>e;
	cout<<"Enter your second number: ";cin>>f;
	switch(a){
	case 1:
		cout<<"Result:"<<add(e,f);
		break;
	case 2:
		cout<<"Result:"<<sub(e,f);
		break;
	case 3:
		cout<<"Result:"<<mul(e,f);
		break;
	case 4:
		cout<<"Result:"<<div(e,f);
		break;
	case 5:
		cout<<"Result:"<<mod(e,f);
		break;
	default:
		break;
}
	
	cout<<"\n\nContinue? (y/n) ";
	cin>>j;
	}while(j=='y');
	return 0;
}
int add(double c,double b){
	return c+b;
}
int sub(double c,double b){
	return c-b;
}
int mul(double c,double b){
	return c*b;
}
int div(double c,double b){
	return c/b;
}
int mod(int c,int b){
	return c%b;
}

