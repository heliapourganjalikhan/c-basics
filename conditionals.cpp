#include <iostream>

using namespace std;

int main(){
 
    // User inters integer number 
    // Program will write out if that number is even or odd
  
    // Getting a number  
    int number ;
    cout << "please enter a number: \n";
    cin >> number ;

    // Checking if it's even or odd
    if ( number % 2 == 0)  // (==) equality of two sides , (=) asign a value to a variable 
    {
        cout << "this number is even \n";
    }
    else
    {
        cout << "this number is odd \n";    
    }


    // User inters side length of a tirangle (a,b,c)
    // Program should write out whether that triangle is equilateral, isosceles or scalene

    float a, b, c; 
    cout << "please enter a, b, c: \n";
    cin >> a >> b >> c ;

    if (a==b && b==c)

         cout << " equilateral triangle \n";
     
    else 
    {
        if (a!=b && b!=c)
            cout << " scalene triangle \n";
        else
            cout << " isosceles triangle \n";
        
    }

    cout << " hope you have had some fun here :)" << endl;


    return 0;   
}