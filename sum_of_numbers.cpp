#include<iostream>
using namespace std;
int main(){
int a,sum,rem;
cout<< "Enter a no. ";
cin>> a;
sum=0;
while(a>0){
    rem=a%10;
    a=a/10;
    sum=sum+rem;
}  
cout<< "Sum of Digit is: " << sum <<endl;
return 0;
}
