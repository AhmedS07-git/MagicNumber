#include <iostream>
using namespace std;

int main(){

    int number;
    int result;

    cout << "Give me your favorite number:";
    cin >> number;

    result = ((( number  * 2) + 10 ) / 2) -number;

    cout << "Result: " << result << endl;
   
    return 0;
}