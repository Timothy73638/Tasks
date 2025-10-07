
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number (any number ig)";
    cin >> number;
    
    string str_number =  to_string(number);
    cout << "The number that u entered as a line: "<< str_number << endl;

    return 0;
}