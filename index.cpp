#include <iostream>
using namespace std;

        int main(){
            int a, b;
            char option;
            
        cout <<"Enter two number one by one: ";
            cin>>a>>b;
        cout <<"Enter your opration symbol '+', '-', '*', '/' ";
            cin>>option;
if (option == '+'){
    cout <<"Sum = "<<a + b;
}
else if (option == '-'){
    cout<< "Substraction = "<<a - b;
}
else if (option == '*'){
    cout <<"multipl = "<<a * b;
}
else if(option == '/'){
    cout <<"division = "<<a / b;
}
                                    return 0;
        }