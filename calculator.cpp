#include<iostream>
using namespace std;
int main()
{
    double num1, num2;
    char choice;
    cout<<"----------------------------------------------SIMPLE CALCULATOR---------------------------------------------";
    cout<<"\nEnter the first number:  "; cin>>num1;
    cout<<"\nEnter the second number: ";cin>>num2;
    cout<<"\nEnter the operation you want to perform ( +, -, *, / ):  ";cin>>choice;
    switch(choice)
    {
        case '+':
            {
                cout<<"\nYou are performing addition: \n"<<num1<<" + "<<num2<<" = "<<num1+num2;
                break;
            }
        case '-':
            {
                 cout<<"\nYou are performing subtraction : \n"<<num1<<" - "<<num2<<" = "<<num1-num2;
                 break;
            }
        case '*':
            {
                 cout<<"\nYou are performing multiplication: \n"<<num1<<" * "<<num2<<" = "<<num1*num2;
                 break;
            }
        case '/':
            {
                if(num2==0)
                    cout<<"\nNot define! Division by zero is not define :( ";
                else
                     cout<<"\nYou are performing division: \n"<<num1<<" / "<<num2<<" = "<<num1/num2;
                break;
            }
        default:
            cout<<"\nInvalid operation. Please choose from +, -, * and / ";
    }
    return 0;
}
