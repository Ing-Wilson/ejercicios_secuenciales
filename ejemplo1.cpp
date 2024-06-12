#include <iostream>
using namespace std;

int suma (int a, int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	int a,b,sum;
	cout<<"Ingrese el valor de a:"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b:"<<endl;
	cin>>b;
	sum= suma(a,b);
	cout<<"El valor de la suma es:"<<sum;
	return 0;
}