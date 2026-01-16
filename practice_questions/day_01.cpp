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

    int binaryNumber = 100011001;
    int result = 0, mul = 1;

    while (binaryNumber != 0)
    {
        int digit = binaryNumber % 10;
        result = (digit * mul) + result;
        binaryNumber /= 10;
        mul *= 2;
    }

    cout << result;


    
    return 0;
}