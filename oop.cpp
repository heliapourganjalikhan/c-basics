#include <iostream>
#include <string>
using namespace std;
//Abstraction
//contract
class AbstractEmployee {
  virtual void AskForPromotion() = 0;    //virtual makes thr implementation for this contract obligatory
};

class Employee:AbstractEmployee {
private:              // to make it more readable
  string Company;
  int Age;
protected:
  string Name;  
public :
  // name setter
  void SetName(string name){
    Name = name;
  }
  // name getter
  string GetName(){
    return Name;
  }
  // company setter
  void SetCompany(string company){
     Company = company;
  }
  // company getter
  string GetCompany(){
    return Company;
  }
  // age setter
  void SetAge(int age){
    if (age >= 18)    //introduce a validation rule for age
    Age = age;
  }
  // age getter
  int GetAge(){
    return Age;
  }

  // the function (method)
  void IntroduceYourself(){
    cout << "Name: " << Name << endl;
    cout << "Company: " << Company << endl;
    cout << "Age: " << Age << endl;
  }

  // the constructor (method)  //constructor make our code more optimal
  /*Employee(string name, string company, int age){   
    Name=name;
    Company=company;
    Age=age;
  }*/
  Employee(string name = "helia", string company = "Google", int age = 23) : Name(name) ,Company(company) , Age(age) {}

  void AskForPromotion(){
    if (Age > 30)
      cout << Name << " got promoted! " << endl;
    else
      cout << Name << " Sorry no permotion for you." << endl;
    
  }

   virtual void Work(){
    cout << Name << " is now working ." << endl;
  }

};

// Inhetritance  //drived class  
class Developer : public Employee {
public:
  string FavProgrammingLanguage;

  Developer(string name , string company, int age , string favProgrammingLanguage)
    :Employee(name, company, age)
  {
    FavProgrammingLanguage = favProgrammingLanguage;
  }

  void FixBug(){
    cout << Name << " use " << FavProgrammingLanguage << " to fix bugs." << endl;
  }

   void Work(){
    cout << Name << " is writing " << FavProgrammingLanguage << "." << endl;
  }

};

int main()
{
  Employee employee1 = Employee( "Helia", "Google" ,24 );  //When we make our own constructor
 /* employee1.Name = "Helia";                              //When we use the default constructor
  employee1.Company = "Google";
  employee1.Age = 24;*/

  employee1.IntroduceYourself();

  cout << "------------------------------" << endl;

  employee1.SetAge(16);
  cout << employee1.GetName() << " is " << employee1.GetAge() << " years old." << endl;

  employee1.AskForPromotion(); //this is like a button on our smart phone.

  Developer d = Developer("Ali" , "Microsoft" , 25 , "Python");
  d.FixBug();
  
  // the most comme use of polymorphism is when a 
  // parent class reference is used to refer to a child class object 
  Employee* e1 = &d;
  e1 -> Work();
}