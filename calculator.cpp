#include <iostream>
 
 using namespace std;

 int main()
{
    cout << "**Basic calculator**" << endl; 
    cout << "Your options are: +,-,*,/,%" << endl;

    //take in two numbers and an operator
    float num1 , num2 ;
    char operation ;
    cin >> num1 >> operation >> num2;

    switch(operation)
    {
        case '+': cout << num1 + num2 << endl; break;
        case '-': cout << num1 - num2 << endl; break;
        case '*': cout << num1 * num2 << endl; break;
        case '/': cout << num1 / num2 << endl; break;
        case '%': 
            bool isNum1Int , isNum2Int ;
            isNum1Int = ((int)num1 == num1);//EX: is 5=5.0 ? true /or/ is 5=5.5 ? false  
            isNum2Int = ((int)num2 == num2);
            if (isNum1Int && isNum2Int)
                cout << (int)num1 % (int)num2 ;
            else
                cout << "Not valid" << endl; break;

        default: cout << "Not valid operation" << endl;       
    }
    








    return 0;

}