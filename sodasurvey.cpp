#include <iostream>

using namespace std;

int main()

{
//this is where I put in the needed data for the program to run
    int customers = 16500;
    double perc_consume = 0.15;
    double perc_consume_cit = 0.58;

//this is how the data gets implemented
//this is the equation for the amount of people who purchased one or more energy drinks
    float customer_consume = customers * perc_consume,
//this is the equation for the amount of people who purchased one or more energy drinks and prefer citrus
            customer_consume_cit = customer_consume * perc_consume_cit;
  
//this is the output of the program
    cout<<"The amount of costumers that consumed energy drinks once or more per week is "<<customer_consume<<endl;
    cout<<"The amount of costumers that preferred citrus-flavored energy drinks is "<<customer_consume_cit<<endl;

    return 0;
}
