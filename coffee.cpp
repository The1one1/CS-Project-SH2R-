#include<bits/stdc++.h>
#include"ingridient.h"
#include"coffee.hpp"

using example::ingridient;
using example::coffee_machine;

using namespace std;
    void coffee_machine::coffee_choice()   //function to select coffee
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
            ingridient latte1(200, 150, 24, 20);   //class object

    		latte1.coffee_cost();
	    	latte1.remaning_amount(); 
        }
        else if(choice=="Espresso"||'e'||'E')
        {
            ingridient espressor1(50, 0, 18, 30);  //class object
	    	espressor1.coffee_cost();
		    espressor1.remaning_amount();
        }
        else
        {
            ingridient cappuccino1(250, 50, 24, 50);   //class object
		    cappuccino1.coffee_cost();
		    cappuccino1.remaning_amount();
        }
    }
