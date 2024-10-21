#include <iostream>
using namespace std;

int main() 
{
    int num;

    
    cout << "Enter an integer: "; // Prompt the user to enter an integer
    cin >> num;

    
    if (num % 2 == 0) // Check if the number is even or odd
    {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}
