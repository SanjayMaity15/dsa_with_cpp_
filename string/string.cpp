#include<iostream>

using namespace std;

int main (){

    string name;
    getline(cin, name);
    cout << name;

    // string rev = "";

    // for (int i = name.length() - 1; i >= 0; i--){
    //     rev += name[i];
    // }

    // cout << rev;

    int count = 0;

    for (int i = 0; i < name.length(); i++){
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
    }

    cout << count;



    return 0;
}