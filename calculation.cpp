//function definations
#include<bits/stdc++.h>
#include"calculation.hpp"

using namespace std;

void calculation::pay_money_UPI()    //pay using UPI
{
	cout<<setw(47)<<"|------------|\n";
	cout<<setw(47)<<"|------------|\n";
	cout<<setw(47)<<"|scan QR code|\n";
	cout<<setw(47)<<"|------------|\n";
	cout<<setw(47)<<"|------------|\n";
	cout<<"Here is your coffee  |    |\n";
	cout<<"                     |____|\n";
	cout<<setw(60)<<"Thanks for Using Our Service:\n\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
}

void calculation::pay_money_SM() //pay using Swiping machine		
{
	cout<<"Swipe Your Credit Card:\n";
	for(int i=0;i<10000000;i++);   // this for loop is to increase processing timming

	cout<<"Enter the PIN: ";
	int x;
	cin>>x;
	for(int i=0;i<100000000;i++); // this for loop is to increase processing timming
		cout<<"Here is your coffee  |    |\n";
		cout<<"                     |____|\n";
		cout<<setw(60)<<"Thanks for Using Our Service:\n\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
}

//pay cash money
void calculation::pay_money_Cash(int cost)
{
    cout<<"enter the amount:";
	cin>>_money;
	_money-=cost;	//to calculate refundable money
	if(_money>0) cout<<"Refundable amount:"<<_money<<"\n";
	cout<<"Here is your coffee  |    |\n";
	cout<<"                     |____|\n";
	cout<<setw(60)<<"Thanks for Using Our Service:\n\n";
	cout<<"------------------------------------------------------------------------------------------------------\n";
}
