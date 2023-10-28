#include<iostream>
using namespace std;

int main(){
string food = "Butter";
string* pointer= &food;

cout<< food <<endl;
cout<< pointer <<endl;
cout<< *pointer <<endl; //dereferencing
return 0;
}
