#include <iostream>
using namespace std;

int main()
{

    // HCH || GCD

    int n1, n2;
    cout << "Enter two number : " << endl;
    cin >> n1 >> n2;
    int hcf;
    int smallNum;
    if (n1 < n2)
    {
        smallNum = n1;
    }
    else
    {
        smallNum = n2;
    }

    for (int i = 1; i <= smallNum; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << hcf;

    return 0;
}