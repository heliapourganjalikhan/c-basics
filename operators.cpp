#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
    //+,-,*,/,%           //arithmatic operators
    cout << 5+2 << endl;     //basic
    cout << 5/2 << endl;     //2
    cout << 5.0/2 << endl;   //2.5
    cout << 5.0/2.0 << endl; //2.5
    cout << 5%2 << endl;     //1
    cout << "----------------" << endl; 
   

    //++,--             //increment/decrement operators
    int counter = 1;
    cout << ++counter << endl;  //2
    cout << counter++ << endl;  //2
    cout << counter << endl;    //3
    cout << "----------------" << endl; 

    //<,>,<=,>=,==,!=  // relational operators
    int a=5, b=8;           // ',' this is seperator operator
    cout << (a>b) << endl;    // the output should be either 1 or 0  // in this case (0)   
    // a>b is not correct!!! 
    cout << "----------------" << endl; 

    //&&, ||, !        //logical operators
    cout << (a == 5 && b== 5) << endl;      //0
    cout << (a == 5 || b== 5) << endl;      //1
    cout << !(a == 5 || b== 5) << endl;     //0
    cout << "----------------" << endl; 

    // priority of operators:
    // arithmatic > relational > logical
    cout << (a == 5 && b== 5+3) << endl;    //1 // arithmatic> logical
    cout << "----------------" << endl; 
    
    // =, +=, -=, *=, /=, %=    //assignment operators
    int x = 5;  //=
    x += 7;      //x = x+7
    cout << x << endl;     //12


    return 0;
}
