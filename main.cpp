#include<bits/stdc++.h>
#include"coffee.hpp"
#include"feedback.h"
#include"ingridient.h"
#include"final_ingridient.h"

using namespace std;

using example::feedback;
using example::final_detail;
using example::coffee_machine;
using example::newfeedback;
using example::printfeedback;
using example::value1;
using example::value2;
using example::value3;
using example::value4;

final_detail g;     //class object
coffee_machine c;   //class object

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
            c.coffee_choice();
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
