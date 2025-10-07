#include <iostream>
using namespace std;
int main(){
    int count = 0;
    
    for (int i = 0; i<= 999999; i++){
        int number = i;
        
        int digit1 = number / 100000 % 10;
        int digit2 = number / 10000 % 10;
        int digit3 = number / 1000 % 10; 
        int digit4 = number / 100 %10;
        int digit5 = number / 10 % 10;
        int digit6 = number %10;
        
        int sum_first = digit1 + digit2 + digit3;
        int sum_second = digit4 + digit5 + digit6;
        
        if (sum_first == sum_second){
            count++;
        if (count % 1000 == 0){
            cout << "The lucky ticket" << digit1 << digit2 << digit3 << digit4 << digit5 << digit6 << endl;
        }
        }
    }
          
        
    

    cout << "Tne number of lucky tickets is: " << count << endl;
    return 0;
}