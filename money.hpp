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
    money_input(float a,float b, float c, float d):ingridient(a,b,c,d){ };
    void latt()
    {
        ingridient::remaning_amount();
        ingridient::coffee_cost();
    }
};
    
#endif
//undefined reference to `ingridient::coffee_cost()
