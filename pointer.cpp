#include<iostream>
using namespace std;

int main(){
string food = "Ramen";
string* pointer = &food;

cout<< food <<endl;
cout<< &food <<endl;
cout<< pointer <<endl;

return 0;
}
