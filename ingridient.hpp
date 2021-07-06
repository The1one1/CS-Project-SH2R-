#ifndef ingridient_hpp
#define ingridient_hpp
#include"calculation.hpp"

using namespace std;

class ingridient:public calculation
{  
    float water,milk,coffee;
    
    public:
    float cost;
    
    //constructor
    ingridient(float a,float b, float c,float d)
	{
	    water=a;   milk=b;  coffee=c;   cost=d;
	}
	
	void coffee_cost();
	void remaning_amount();

};
        	
#endif
