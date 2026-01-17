#include <iostream>
#include <climits>

using namespace std;

int main()
{

    // find the largest element in the array

    // int arr[8] = {34, 567, 35232, 678, 39, 95, 37, 85};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // int maximum = INT_MIN;

    // for (int i = 0; i < size; i++){
    //     if(arr[i] > maximum){
    //         maximum = arr[i];
    //     }
    // }

    // cout << "The maximum number is : " << maximum;

    // Find the smallest element in the array

    // int arr[8] = {34, 567, 35232, 678, 9, 95, 37, 85};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // int minimum = INT_MAX;

    // for (int i = 0; i < size; i++){
    //     if(arr[i] < minimum){
    //         minimum = arr[i];
    //     }
    // }

    // cout << "The minimum element is : " << minimum;

    // // Find the smallest and largest element in the array

    // int arr[8] = {34, 567, 35232, 678, 9, 95, 37, 85};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // int minimum = INT_MAX;
    // int maximum = INT_MIN;

    // for (int i = 0; i < size; i++){
    //     if(arr[i] < minimum){
    //         minimum = arr[i];
    //     }

    //     if(arr[i] > maximum){
    //         maximum = arr[i];
    //     }
    // }

    // cout << "The minimum element is : " << minimum<<endl;
    // cout << "The maximum element is : " << maximum<<endl;

    // Find 2nd largest element

    // int arr[8] = {34, 567, 35232, 678, 39, 95, 37, 85};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // int maximum = INT_MIN;

    // int secondMaximum = INT_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > maximum)
    //     {
    //         secondMaximum = maximum;
    //         maximum = arr[i];
    //     }
    //     else if (arr[i] > secondMaximum && arr[i] < maximum)
    //     {
    //         secondMaximum = arr[i];
    //     }
    // }

    // cout << secondMaximum;

    // Find second smallest element

    // int arr[8] = {34, 567, 35232, 678, 39, 95, 37, 85};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // int minimum = INT_MAX;
    // int secondMinimum = INT_MAX;

    // for (int i = 0; i < size; i++){
    //     if(arr[i] < minimum){
    //         secondMinimum = minimum;
    //         minimum = arr[i];
    //     }
    //     else if (arr[i] < secondMinimum &&  arr[i] > minimum)
    //     {
    //         secondMinimum = arr[i];
    //     }
    // }

    // cout << minimum << "  " << secondMinimum;

    // sum of array element

    // int arr[8] = {34, 567, 35232, 678, 39, 95, 37, 85};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // int sum = 0;

    // for (int i = 0; i < size; i++){
    //     sum += arr[i];
    // }

    // cout << sum;

    // reverse an array

    // int arr[8] = {34, 567, 35232, 678, 39, 95, 37, 85};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < (size / 2); i++ ){
    //     int temp = arr[i];

    //     arr[i] = arr[size - i -1];
    //     arr[size - i] = temp;
    // }

    // for (int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }

    // Sort first half of the array asending and last half decending

    // int arr[8] = {3, 2, 4, 1, 10, 30, 40, 20};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < (size / 2); j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    //     for (int k = (size / 2); k < size; k++)
    //     {
    //         if (arr[k] < arr[k + 1])
    //         {
    //             swap(arr[k], arr[k + 1]);
    //         }
    //     }
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    // Sort the element of the array

    // int arr[6] = {3, 6, 1, 9, 5, 7};

    // int size = sizeof(arr) / sizeof(arr[0]);
    // // cout << size;

    // for (int i = 0; i < size; i++){

    //     for (int j = 0; j < size - 1; j++){
    //         if(arr[j] > arr[j+ 1]){
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    // for (int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }

        int arr[6] = {1, 2, 2, 3, 1, 2};
        int size = 6;

        bool visited[6] = {false};

        for (int i = 0; i < size; i++)
        {

            if (visited[i] == true)
                continue;

            int count = 1;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = true;
                }
            }

            cout << arr[i] << " comes " << count << " times" << endl;
        }
    

    return 0;
}