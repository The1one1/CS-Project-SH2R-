#include<bits/stdc++.h>
#include"calculation.h"
#include"ingridient.h"
#include"initial_ing_amount.h"
#include"final_ingridient.h"
using namespace std;

namespace example
{
	//latte1(200, 150, 24, 20), espressor1(50, 0, 18, 30), cappuccino1(250, 50, 24, 50);
	ingridient::ingridient(float a, float b, float c, float d)    //constructor
    {
        water=a;   milk=b;  coffee=c;   cost=d;
    }
	void ingridient::coffee_cost()
	{
		int n;
		cout<<"Pay "<<cost<<" rupees Using"<<endl;		//amount to pay 
		//Payment method
		cout<<"-----------------------    -----------------------    -----------------------\n";
		cout<<"|         UPI:        |";
		cout<<"    |        Cash:        |";
		cout<<"    |   Swiping machine:  |\n";
		cout<<"-----------------------    -----------------------    -----------------------\n";
		cout<<"Select Method to pay(1/2/3): ";  cin>>n;		//select method to pay money
			
		if(n==1)
			calculation::pay_money_UPI();
		else if(n==2)   
			calculation::pay_money_Cash(cost); 	
		else
			calculation::pay_money_SM();
	}
	
	void ingridient::remaning_amount()		//function to calculate remaning amount of ingridient
	{
		water_total=water_total - water;	//remaining_water
		milk_total-=milk;		//remaining_milk
		coffee_total-=coffee;	//remaining_coffee
		cost_total+=cost;		//remaining_cost

		if(water_total<=0||milk_total<=0||coffee_total<=0||cost_total<=0)		//if sufficient amounnt is not available
		{
			cout<<"Sufficient ingridient are not available:\n ";
			cout<<setw(60)<<"Sorry for the Inconvenience:\n";
			cout<<"---------------------------------------------------------------------------------------------------------\n";
			exit(0);
		}
	}	

	// these 4 function is used to pass details of remaining_ingridient to final() function declare in class final_detail
	float value1()  
	{	
		return water_total;
	}
	float value2()
	{
		return milk_total;
	}
	float value3()
	{
		return coffee_total;
	}
	float value4()
	{
		return cost_total;
	}
}
