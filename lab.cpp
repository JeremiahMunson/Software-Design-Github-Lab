#include <iostream>

using namespace std;

int power(int base, int exponent)
{
    int val;
    if(exponent == 0 && base != 0)
    {
        val = 1;
    }
    else{
        val = base;
        // Because val = base above that is the base^1 case so the for loop goes to i < (exponent - 1)
        for(int i = 0; i < (exponent - 1); i++)
        {
            val*=base;
        }
    }
    cout << val << endl;
    return val;
}

int main(){

    power(2,3);
    power(7,0);
    power(3,2);

}