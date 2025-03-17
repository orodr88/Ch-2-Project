#include <iostream>

using namespace std;

int main()
{
    //this is where ill insert my input data
    const double MIll_PER_YEAR = 1.5;

    int year_1 = 5,
        year_2 = 7,
        year_3 = 10;

    //this is the process of implementing data
    float MILLS_AFTER_5 = MIll_PER_YEAR * year_1,
          MILLS_AFTER_7 = MIll_PER_YEAR * year_2,
          MILLS_AFTER_10 = MIll_PER_YEAR * year_3;

    //this is the output
    cout <<"In " << year_1<<" years, the ocean's level will grow "<<MILLS_AFTER_5<<" millimeters tall."<<endl
    cout <<"In "<<year_2<<" years, the ocean's level will grow "<<MILLS_AFTER_7<<" millimeters tall."<<endl
    cout <<"In "<<year_3<<" years, the ocean's level will grow "<<MILLS_AFTER_10<<" millimeters tall."<<endl;

    return 0;

}
