#include<iostream>
#include<cfloat>
using namespace std;

int main()
{
	double one,epsilon,last_epsilon;
	epsilon=1;
	do
	{
		last_epsilon=epsilon/2;
		one=1+last_epsilon;
		epsilon=last_epsilon;
		
	}
	while(one!=1);
	
		cout<<"Machine precision of this computer machine is: "<<last_epsilon;
	
	return 0;
}
