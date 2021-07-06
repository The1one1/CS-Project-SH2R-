#ifndef money_hpp
#define money_hpp

#include"ingridient.hpp"
using namespace std;

float value1();
float value2();
float value3();
float value4();

class money_input: public ingridient
{
    public:
    money_input(float a,float b, float c, float d):ingridient(a,b,c,d){ };  //contructor
    void latt()  // function to call remaning_amount() and coffee_cost() function
    {
        ingridient::remaning_amount(); // to calculate remaining_ingridient
        ingridient::coffee_cost(); //to select mode of payment
    }
};
    
#endif

