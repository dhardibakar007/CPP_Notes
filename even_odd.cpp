#include<iostream>
using namespace std;
int main(){
int a,rem;
cout<< "Enter your number: " ;
cin>> a;
rem=a%2;
if(rem==0){
cout<< "Even No." <<endl;
}
else {
cout<< "Odd No." <<endl;
}
return 0;
}
