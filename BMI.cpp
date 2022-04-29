#include <iostream>

using namespace std;

    //BMI calculator ;
    //weight(kg)/ (height(m))^2 
    //Underweight  (< 18.5)
    //Normal weight (18.5-24.9)
    //Overweight (>25)

 int main()
{ 
    //general warning!
    cout << "Hello :)" << endl;
    cout << "This is not for athletes !" << endl;
 
    //getting user's information
    float height , weight;
    cout << "Please enter your height(m) and weight(kg) :" << endl;
    cin >> height >> weight ;
    
    //calculating BMI
    float BMI = (weight / (height * height));  // ! DON'T FORGET PARENTHESIS !
    cout <<"BMI : " << BMI << endl;
    
    //checking the BMI using if/else statements
    if ( BMI < 18.5)
    {
        cout << " howwwwww ! \n" ;
        cout << " you're underweight \n " ;
    }
    else if( BMI > 25)
        cout << " you're overweight and so am I 😞 " << endl; 
    else
        cout << " Congratulations:) you're fine " << endl;
 
    //I'm ok with not being perfect cause that's perfect to me ...

    return 0;
}