#include<iostream>
using namespace std;

int main(){
float a,b;

cout<< "-----------------------------------" <<endl;
cout<< "----- Basic Calculator Part 1 -----" <<endl;
cout<< "-----------------------------------" <<endl;
cout<< "Enter first number:" <<endl;
cin>> a;
cout<< "Enter second number:" <<endl;
cin>> b;
float add=(a+b);
float sub=(a-b);
float mul=(a*b);
float div=(a/b);
cout<< "-----------------------------------" <<endl;
cout<< "Entered 1st no. is: "<< a <<endl;
cout<< "Enterd 2nd no. is: " << b <<endl;
cout<< "-----------------------------------" <<endl;
cout<< "Addition is : " << add <<endl;
cout<< "Subtraction is : "<< sub <<endl;
cout<< "Multiplication is : " << mul <<endl;
cout<< "Division is : "<< div <<endl;
cout<< "-----------------------------------"<<endl;
return 0;
}
