#include <iostream>

using namespace std;

int main()

{
    int customers = 16500;
    double perc_consume = 0.15;
    double perc_consume_cit = 0.58;

    float customer_consume = customers * perc_consume,
            customer_consume_cit = customer_consume * perc_consume_cit;

    cout<<"The amount of costumers that consumed energy drinks once or more per week is "<<customer_consume<<endl;
    cout<<"The amount of costumers that preferred citrus-flavored energy drinks is "<<customer_consume_cit<<endl;

    return 0;
}
