#include<bits/stdc++.h>
#include"calculation.h"
using namespace std;

namespace example
{
	void calculation::pay_money_UPI()	//pay cash money
	{
	cout<<setw(30)<<"|------------|\n";
	cout<<setw(30)<<"|------------|\n";
	cout<<setw(30)<<"|scan QR code|\n";
	cout<<setw(30)<<"|------------|\n";
	cout<<setw(30)<<"|------------|\n";
	cout<<"Here is your coffee  |    |\n";
	cout<<"                     |____|\n";
	cout<<setw(60)<<"Thanks for Using Our Service:\n\n";
	cout<<"---------------------------------------------------------------------------------------------------------\n";
}

	void calculation::pay_money_SM()	//pay using Swiping machine
	{
		cout<<"Swipe Your Credit Card:\n";
		for(int i=0;i<10000000;i++);	// this for loop is to increase processing timming

		cout<<"Enter the PIN: ";
		int x;
		cin>>x;
		for(int i=0;i<100000000;i++);	// this for loop is to increase processing timming
			cout<<"Here is your coffee  |    |\n";
			cout<<"                     |____|\n";
			cout<<setw(60)<<"Thanks for Using Our Service:\n\n";
		cout<<"---------------------------------------------------------------------------------------------------------\n";
	}

	void calculation::pay_money_Cash(int cost)	//pay cash money
	{
		cout<<"enter the amount:";
		cin>>_money;
		_money-=cost;	//to calculate refundable money
		if(_money>0) cout<<"Refundable amount:"<<_money<<"\n";
		cout<<"Here is your coffee  |    |\n";
		cout<<"                     |____|\n";
		cout<<setw(60)<<"Thanks for Using Our Service:\n\n";
		cout<<"--------------------------------------------------------------------------------------------------------\n";
	}
}
