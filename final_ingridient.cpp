#include<bits/stdc++.h>
#include"final_ingridient.hpp"
using namespace std;

void final_detail::final(float x,float y,float z,float w)
{    
    	int t,i=0;
    	for( i=1;i<=3;i++)
    	{
    		cout<<"Password:";
    	    cin>>t;
    	    if(t==456)
    	    {
               cout<<"------------------------------------------------------------------------------\n";
	           cout<<"| Remaning water  ="<<x<<" ml\n";
	           cout<<"------------------------------------------------------------------------------\n";
	           cout<<"| Remaning Milk   ="<<y<<" ml\n";
	           cout<<"------------------------------------------------------------------------------\n";
	           cout<<"| Remaning Coffee ="<<z<<" g\n";
	           cout<<"------------------------------------------------------------------------------\n";
	           cout<<"| Today Earning   ="<<w<<" rupesss\n";
	           cout<<"------------------------------------------------------------------------------\n\n\n\n";
	           break;
	        }
	        else if(i<3)
	         	cout<<"Enter Correct ";
	    }
	    if(i>3)
		{
			cout<<"Your account is block for 24 hours:\n";
			cout<<"------------------------------------------------------------------------------\n\n";
			exit(0);
		}
}
