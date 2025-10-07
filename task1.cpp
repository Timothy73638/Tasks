
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Vvedit dva chisla: ";
    cin >> a >> b;
    
    int sum = 0;
    if (a<= b){
        for (int i =a; i <=b; i++){
            if (i % 2 == 0){
                sum += i;
            }
        }
    }
    else{
        for (int i = b; i <= a; i++){
            if (i % 2 == 0){
                sum += i;
            }
        }
    }
    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}