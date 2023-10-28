#include<iostream>
using namespace std;

int main(){
string food = "Bread";
string* pointer= &food;

cout<< food <<endl;
cout<< &food <<endl;
cout<< pointer <<endl;
cout<< *pointer <<endl;

//modifying values

*pointer = "Burger";

cout<< "Modified values are: " <<endl;
cout<< pointer <<endl;
cout<< *pointer <<endl;
cout<< "food value :" << food <<endl;
return 0;
}
