#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // int arr[5] = {1, 2, 3, 4, 5};
    // int n;
    // cin >> n;
    // int arr[n];

    // // int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // // int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < n; i++){
    //     cout << arr[i];
    // }

    // int arr[7] = {34, 45, 2, 76, 3, 24, 86};
 

    // int sum = 0;

    // int maximum = INT_MIN;

    // int even = 0, odd=0;

    // for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){

    //     if(arr[i] % 2 == 0){
    //         even++;
    //     }else{
    //         odd++;
    //     }
    // }

    // cout << even <<endl<<odd;
    // int end = (sizeof(arr) / sizeof(arr[0])) / 2;

    // int start = 0;

        int arr[8] = {1, 2, 3, 4, 5, 6, 7};
        int elem = 1000;
        int pos = 3;
        int size = (sizeof(arr) / sizeof(arr[0]));
        

        for (int i = 0; i < size - 1; i++)
        {
            cout << arr[i] << endl;
        }

        for (int i = size - 2; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[pos] = elem;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        for (int i = 6; i < size - 1; i++){
            arr[i] = arr[i + 1];
        }

            for (int i = 0; i < size - 1; i++)
            {
                cout << arr[i] << " ";
            }

    return 0;
}