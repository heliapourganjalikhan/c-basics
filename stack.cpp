#include <iostream>
using namespace std;
// stack class declaration using fixed size array 
class Stack{
    private:
    int stack[100];
    int top = -1;
    bool isEmpty();
    bool isFull();

    public:
    // constructor & destructor declaration
    Stack ();
    ~Stack ();
    // piblic member functions declaration
    void push (int);
    void pop();
    void display();

};
// member functions definitions
Stack :: Stack(){
    cout << "stack is being created." << endl;
}
Stack :: ~Stack(){
    cout << "object is being deleted" << endl;
}
bool Stack::isEmpty(){
    if (top <= -1)
        return true;
    else 
        return false;
}
bool Stack::isFull(){
    if (top == 100)
        return true;
    else 
        return false;
}
void Stack::push(int value){
    if (isFull())
        cout << "Stack overflow!" << endl;
    else {
        top++;
        stack[top] = value;
    }  
    
}
void Stack :: pop(){
    if (isEmpty())
        cout << "Stack underflow!" << endl;
    else {
        cout << "The poped element is:" << stack[top] << endl;
         top--;
    }
}
void Stack :: display(){
    if (top>=0){
         cout << "Stack elements are :\n";
         for(int i=top; i>=0; i--)
            cout << stack[i] << ',';
            cout << endl;
    }else
        cout << "Stack is empty!\n";
}


// main function definition
int main (){
    int chr,val;
    Stack stack;
    // intriduce options to users    
    cout << "1) Push in stack"<<endl;
    cout << "2) Pop from stack"<<endl;
    cout << "3) Display stack"<<endl;
    cout << "4) Exit program"<<endl;

    do {
        cout << "Enter your choice: "<<endl;
        cin >> chr;
        switch(chr){
            case 1:{
                cout << "Enter value to be pushed: "<<endl;
                cin >> val;
                stack.push(val);
                break;
            }
            case 2:{
                stack.pop();
                break;
            }
            case 3:{
                stack.display();
                break;
            }
            case 4:{
                cout << "Exit" << endl;
                break;
            }
            default:{
                 cout << "Unvalid choice.\n";
            }
        }

    }while(chr!=4);

    return 0;

}