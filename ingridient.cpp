#include<bits/stdc++.h>
#include"calculation.hpp"
#include"ingridient.hpp"
#include"initial_ing_amount.hpp"
#include"final_ingridient.hpp"
using namespace std;
        
//latte1(200, 150, 24, 20), espressor1(50, 0, 18, 30), cappuccino1(250, 50, 24, 50);
void ingridient::coffee_cost()
{
    int n;
	cout<<"Pay "<<cost<<" rupees Using"<<endl; 
   //Payment method
    cout<<"-----------------------    -----------------------    -----------------------\n";
    cout<<"|         UPI:        |";
    cout<<"    |        Cash:        |";
    cout<<"    |   Swiping machine:  |\n";
    cout<<"-----------------------    -----------------------    -----------------------\n";
    cout<<"Select Method to pay(1/2/3): ";  cin>>n;   //select method
		
	if(n==1)
	    calculation::pay_money_UPI();
	else if(n==2)   
	    calculation::pay_money_Cash(cost); 	
	else
		calculation::pay_money_SM();
}
	//function to calculate remaning amount
void ingridient::remaning_amount()
{
	water_total=water_total - water;
	milk_total-=milk;
	coffee_total-=coffee;
    cost_total+=cost;
    if(water_total<=0||milk_total<=0||coffee_total<=0||cost_total<=0)
    {
    	cout<<"Sufficient ingridient are not available:\n ";
		cout<<setw(60)<<"Sorry for the Inconvenience:\n";
		cout<<"----------------------------------------------------------------------\n";
		exit(0);
	}
}	

float value1()
{	
	return water_total;
	}
float value2()
	{ return milk_total;}
float value3()
	{return coffee_total;}
float value4()
	{return cost_total;}