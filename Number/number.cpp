#include<iostream>
using namespace std;

int main () {

    int decimal = 1000;

    int result = 0;
    int mul = 1;

    // while (decimal != 0)
    // {
    //     int digit = decimal % 2;
    //     result = (digit * mul) + result;
    //     decimal /= 2;
    //     mul = mul * 10;
    // }

    // cout << result;

    while (decimal != 0)
    {
        int digit = decimal % 10;
        result = (digit * mul) + result;
        decimal /= 10;
        mul = mul * 8;
    }

    cout << result;



    return 0;
}