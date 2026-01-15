#include<iostream>

using namespace std;

bool checkEven(int n){
    if(n % 2 == 0){
        return true;
    }

    return false;
}

int main(){

    bool result = checkEven(4);
    cout << result;
    return 0;
}