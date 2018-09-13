#include <iostream>

using namespace std;

int main(){
	int m,n;
	int mn;
	
	cout<<"enter first number: ";
	cin>>m;
	
	cout<<"enter second number: ";
	cin>>n;
	
	cout<<"Greatest common divisor is: ";
	int GCD=1;
	for ( int i=1; i<=mn; i++)
	{
		if(m%i==0 && n%i==0)
		{
			GCD=max(GCD,i);
			
			cout<<"Greatest common divisor is: "<<GCD;
		}
	}
	return 0;
}
