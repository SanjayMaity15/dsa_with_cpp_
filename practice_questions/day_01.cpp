#include <iostream>
using namespace std;

int main()
{

    // HCH || GCD

    // int n1, n2;
    // cout << "Enter two number : " << endl;
    // cin >> n1 >> n2;
    // int hcf = 1;
    // int smallNum;
    // if (n1 < n2)
    // {
    //     smallNum = n1;
    // }
    // else
    // {
    //     smallNum = n2;
    // }

    // for (int i = 1; i <= smallNum; i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         hcf = i;
    //     }
    // }

    // cout << hcf;



    // LCM

    // int n1, n2;
    // cout << "Enter 2 numbers : ";
    // cin >> n1 >> n2;

    // int maximum = n1 > n2 ? n1 : n2;
    // int lcm;
    // for (int i = maximum; i <= n1 * n2; i++){
    //     if(i % n1 == 0 && i % n2 == 0){
    //         lcm = i;
    //         break;
    //     }
    // }

    // cout << lcm;

    // Binary to decimal

    // int octalNumber = 100011001;
    // int result = 0, mul = 1;

    // while (octalNumber != 0)
    // {
    //     int digit = octalNumber % 10;
    //     result = (digit * mul) + result;
    //     octalNumber /= 10;
    //     mul *= 2;
    // }

    // cout << result;


    // Octal to decimal

    // int octalNumber = 13242023;
    // int result = 0, mul = 1;

    // while (octalNumber != 0)
    // {
    //     int digit = octalNumber % 10;
    //     result = (digit * mul) + result;
    //     octalNumber /= 10;
    //     mul *= 8;
    // }

    // cout << result;


    // decimal to binary 

    // int decimalNumber = 2134437828;
    // string result = "";
    // int mul = 1;

    // while (decimalNumber != 0)
    // {
    //     int digit = decimalNumber % 2;
    //     // result = (digit * mul) + result;
    //     result = to_string(digit) + result;
    //     decimalNumber /= 2;
    //     mul *= 10;
    // }

    // cout << result;


    // decimal to octal

    int decimalNumber = 2134;
    int result = 0, mul = 1;

    while (decimalNumber != 0)
    {
        int digit = decimalNumber % 8;
        result = (digit * mul) + result;
        decimalNumber /= 8;
        mul *= 10;
    }

    cout << result;

    return 0;
}