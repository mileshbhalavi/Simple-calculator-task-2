#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char operation;
    cout<<"Simple calculator\n";
    cout<<"Enter first number :";
    cin>>num1;
     cout<<"Enter an operation(+,-,/,*):";
     cin>>operation;
     cout<<"Enter second number :";
     cin>>num2;
     cout<<"Result is:";
     switch(operation){
        case '+':
        cout<<(num1 + num2)<<endl;
        break;
        case '-':
        cout<<(num1 - num2)<<endl;
        break;
        case '*':
        cout<<(num1 * num2)<<endl;
        break;

        case '/':
        if(num2 !=0)
        cout<<(num1 / num2)<<endl;
        else
        cout<<"Error: Division by Zero!"<<endl;
        break;
        default:
        cout<<"Invalid operation!"<<endl;
       
        
     }
     return 0;
}