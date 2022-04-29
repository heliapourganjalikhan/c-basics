#include <iostream>

using namespace std;

    // Prigram for swapping values of two variables

int main ()
{
    // with a temporary variable
    int a = 10;
    int b = 20; 
    cout << "a = " << a << " , " << "b = " << b << endl;
    cout << "swapping values :    ";

    int temp = a;
        a = b;
        b = temp;

    cout << "a = " << a << " , " << "b = " << b << endl;  

    cout << "------------------------\n";

    // without a temporary variable
    int c = 25;
    int d = 35;
    cout << "c = " << c << " , " << "d = " << d << endl;
    cout << "swapping values :    ";

    c = c - d;  //-10
    d = d + c;  //25
    c = d - c;  //35

    cout << "c = " << c << " , " << "d = " << d << endl;  


    return 0;
}