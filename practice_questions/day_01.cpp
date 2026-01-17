#include <iostream>
using namespace std;

int fact(int number)
{
    int fact = 1;

    for (int i = 1; i <= number; i++){
        fact = fact * i;
    }

    return fact;
}

bool isPrime(int number){
    if(number < 2)
        return false;

    for (int i = 2; i < number; i++){
        if(number % i == 0)
            return false;
    }

    return true;
}

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

    // int decimalNumber = 2134;
    // int result = 0, mul = 1;

    // while (decimalNumber != 0)
    // {
    //     int digit = decimalNumber % 8;
    //     result = (digit * mul) + result;
    //     decimalNumber /= 8;
    //     mul *= 10;
    // }

    // cout << result;

    // Quadrant in which coordinate lies

    // int x, y;
    // cout << "Enter value for x and y : ";
    // cin >> x >> y;

    // if(x > 0 && y > 0){
    //     cout << "Quadrant 1";
    // }else if(x < 0 && y > 0){
    //     cout << "Quadrant 2";
    // }else if(x < 0 && y < 0){
    //     cout << "Quadrant 3";
    // }else if(x > 0 && y < 0){
    //     cout << "Quadrant 4";
    // }else if (x == 0 && y != 0){
    //     cout << "Y Axis";
    // }else if(x != 0 && y == 0){
    //     cout << "X axis";
    // }else{
    //     cout << "origin";
    // }


    // permutation

    // formula is = n! / (n - r)!



    // int n, r;

    // cout << "Enter value for n and r : ";
    // cin >> n >> r;

    // int result = fact(n) / fact(n - r);
    // cout << result;

    // Maximum number of handshake

    // formula = (n * (n - 1) ) / 2

    // int n;
    // cout << "Enter number : ";
    // cin >> n;

    // cout << (n * (n - 1)) / 2;



    // replace all the zeros with 1

    // int n = 12090;

    // int result = 0, place = 1;

    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     if(digit == 0){
    //         digit = 1;
    //     }
    //     result = (digit * place) + result;
    //     n /= 10;
    //     place *= 10;
    // }

    // cout << result;


    // Whether a number can be express as a sum of two prime    
    // int n = 10;
    // bool flag = false;

    // for (int i = 1; i <= (n / 2); i++){
    //     if(isPrime(i) && isPrime(n - i)){
    //         cout << i << endl;
    //         cout << n - i << endl;

    //         flag = true;
    //     }
    // }


    // if(flag){
    //     cout << "true";
    // }else{
    //     cout << "false";
    // }


    // Area of a circle

    // float r = 5;
    // float pi = 3.14;

    // cout << "Area of a circle is " << pi * (r * r);

    // Prime number between 1 to 100

    // for (int i = 1; i <= 100; i++){
    //     if(isPrime(i)){
    //         cout << i <<" ";
    //     }
    // }


    // calculate the number of digits of a number

    // int n = 325332399;

    // int digitCount = 0;

    // while (n != 0)
    // {
    //     digitCount++;
    //     n /= 10;
    // }

    // cout << digitCount;

    // int month = 7, year = 2015;

    // if(month == 2){
    //     cout << "28 days";
    // }else if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))){
    //     cout << "29 days";
    // }
    // else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    // {
    //     cout << "31 days";
    // }
    // else if (month == 4 || month == 6 || month == 9 || month == 11){
    //     cout << "30 days";
    // }else{
    //     cout << "Invalid";
    // }

    // int n = 373272588;
    // int find = 2;
    // int count = 0;

    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     if(digit == find)
    //         count++;

    //     n /= 10;
    // }

    // cout << count;

    int n = 10, x = 3;

    int finalCount = 0;
    for (int i = 1; i <= n; i++){

        int divisor = 0;
        for (int j = 1; j <= i; j++){
            if(i % j == 0){
                divisor++;
            }
        }

        if(divisor == x){
            finalCount++;
        }
    }

    cout << finalCount;

    return 0;
}