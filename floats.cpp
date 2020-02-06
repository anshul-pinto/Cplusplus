#include <iostream>
#include <limits.h>
#include <iomanip>

using namespace std;

int main(){

	float val = 12.00756;
	cout <<setprecision(9)<< fixed << "Value of pi is :" << val<< endl;
	cout <<"size of float is "<< sizeof(val)<<endl;

	double val2 = 12.008975322;
	cout <<setprecision(15)<< fixed << "Value of pi is :" << val2<< endl;
	cout <<"size of double is "<< sizeof(val2)<<endl;	

	long double val3 = 12.008983545221;
	cout <<setprecision(20)<< "Value of pi is :" << val3<< endl;
	cout <<"size of float is "<< sizeof(val3)<<endl;

	// Type casting

	char ch = '7';
	cout << "Printing char : "<< ch <<endl;
	cout << "Printing ascii of char : " << int(ch)<<endl;

}	