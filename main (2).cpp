

#include <iostream>
using namespace std;
int main()
{
    int value;
    cout << "Enter a number";
    cin >> value;
    if (value > 0){
        cout << "This number is dodatne" << endl;
    }
        else if(value < 0){
            cout <<"Number is vidyemne" << endl;
        }
        else{
            cout << "Number is 0";
            return 0;
    }
}