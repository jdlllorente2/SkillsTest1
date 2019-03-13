#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double payrate, hours, grossincome, netincome, clothes, school, savings, addsavings;

	cout<<"Hom many is your pay rate for an hour?"<<endl;
	cin>>payrate;

	cout<<"How many is the number of hours you worked each week?"<<endl;
	cin>>hours;
	
	grossincome = payrate * hours;
	netincome = grossincome *= 0.14;
	clothes = netincome * 0.10;
	school = netincome * 0.01;
	netincome -= (clothes + school);
	savings = netincome * 0.25;
	addsavings = savings * 0.50;
	
	cout << fixed << showpoint << setprecision(2);

	cout<<"Your income before tax: " << grossincome <<endl;
	cout<<"Your income after tax: " << netincome <<endl;
	cout<<"Money spend on clothes and other accessories: " << clothes <<endl;
	cout<<"Money spend on school supplies: " << school <<endl;
	cout<<"Money spend to buy savings bonds: " << savings <<endl;
	cout<<"Money your parents spend to buy additional savings bonds: " << addsavings <<endl;

	_getch();
	return 0;
}
