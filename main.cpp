#include<bits/stdc++.h>
#include"money.h"
#include"final_ingridient.h"
#include"feedback.h"
using namespace std;

using example::calculation;
using example::feedback;
using example::final_detail;
using example::ingridient;
using example::money_input;
using example::newfeedback;
using example::printfeedback;
using example::value1;
using example::value2;
using example::value3;
using example::value4;

//function to select coffee
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
        money_input latte1(200, 150, 24, 20);   //class object
        latte1.latt();  
    }
    else if(choice=="Espresso"||'e'||'E')
    {
        money_input espressor1(50, 0, 18, 30);  //class object
        espressor1.latt();
    }
    else
    {
        money_input cappuccino1(250, 50, 24, 50);   //class object
        cappuccino1.latt();
    }
}
final_detail g;     //class object

//Driver program
int main()
{
	do
	{
        int x;
        cout<<"Select option(1/2/3/4):\n";
        cout<<"-----------------------    -----------------------    -----------------------    -----------------------\n";
        cout<<"|        Coffee:      |";
        cout<<"    |       Feedback      |";
        cout<<"    |     Owner-Access    |";
        cout<<"    |        Exit:        |\n";
        cout<<"-----------------------    -----------------------    -----------------------    -----------------------\n\n";
        cin>>x;
        cout<<"\n";
        if(x==1)
            coffee_choice();
        else if(x==2)
            newfeedback();
        else if(x==3)
            g.final(value1(), value2(), value3(), value4());
        else if(x==4)
            exit(0);
    }
    while(1);
    return 0;
}
