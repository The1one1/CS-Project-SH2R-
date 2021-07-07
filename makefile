all: CoffeeMachine

CoffeeMachine: feedback.h feedback.cpp calculation.h calculation.cpp initial_ing_amount.h final_ingridient.h final_ingridient.cpp ingridient.h ingridient.cpp main.cpp
	g++ -o CoffeeMachine main.cpp ingridient.cpp final_ingridient.cpp calculation.cpp feedback.cpp

clean:
	rm -f CoffeeMachine