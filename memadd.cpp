#include<iostream>
using namespace std;

int main(){
    string food="Apple";
    string &meal=food;
    cout<< &food <<endl;
    cout<< food <<endl;
    cout<< meal <<endl;
return 0;
}
