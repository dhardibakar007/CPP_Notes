#include<iostream>
using namespace std;

int Add(int n){
if (n>0){
return n+Add(n-1);
}
else{
return 0;
}
}

int main(){
int n;
cout<< "Enter a Number : ";
cin>> n;
cout<< "Sum of " << n << "Numbers are: "<< Add(n) <<endl;
return 0;
}
