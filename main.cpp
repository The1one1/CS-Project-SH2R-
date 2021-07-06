#include<bits/stdc++.h>
#include"money.hpp"
#include"final_ingridient.hpp"
// #include"initial_ing_amount.hpp"
using namespace std;

void coffee_choice()
    { 
        string choice;
        cout<<"What would you like(default C):(L,E,C)::\n"; 
        cout<<"-----------------------    -----------------------    -----------------------\n";
        cout<<"|        Latte:       |";
        cout<<"    |       Esprsso:      |";
        cout<<"    |      Cappucino:     |\n";
        cout<<"-----------------------    -----------------------    -----------------------\n\n";
        cin>>choice;
        cout<<"\n";
        
        if(choice=="Latte"||'l'||'L')
        {
        	money_input latte1(200, 150, 24, 20);
            latte1.latt();
	    }
        else if(choice=="Espresso"||'e'||'E')
        {
        	money_input espressor1(50, 0, 18, 30);
            espressor1.latt();
	    }
        else
        {
        	money_input cappuccino1(250, 50, 24, 50);
            cappuccino1.latt();
		}
    }
    final_detail g;
int main()
{
	do
	{
        int x;
        cout<<"Select option(1/2/3):\n";
        cout<<"-----------------------    -----------------------    -----------------------\n";
        cout<<"|        Coffee:      |";
        cout<<"    |Remaining ingridient:|";
        cout<<"    |        Exit:        |\n";
        cout<<"-----------------------    -----------------------    -----------------------\n\n";
        cin>>x;
        cout<<"\n";
        if(x==1)
            coffee_choice();
        else if(x==3)
            exit(0);
        else if(x==2)
            g.final(value1(), value2(), value3(), value4());
    }while(1);
}
