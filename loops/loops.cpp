#include <iostream>
using namespace std;

int main()
{

    // int num = 347;

    // int rev = 0;
    // while (num != 0)
    // {
    //     int digit = num % 10;
    //     rev = (rev * 10) + digit;
    //     num /= 10;
    // }

    // cout << rev;

    // int num = 6;

    // int fact = 1;

    // for (int i = 1; i <= num; i++)
    // {
    //     fact = fact * i;
    // }

    // cout << fact;

    int n = 34;
    bool isPrime = true;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            isPrime = false;
        }
    }

    if(isPrime){
        cout << "Prime number";
    }else{
        cout << "Not prime";
    }

        return 0;
}