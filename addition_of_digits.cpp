//========  sum Of digits ===========
#include<iostream>
using namespace std;
int main(){
int a,rem,rev;
cout<< "Enter a number: ";
cin>>a;
rev=0;
while(a>0){
    rem=a%10;
    a=a/10;
    rev=rev*10+rem;
}     
cout<< "reverse No. : "<< rev <<endl;   
return 0;    
}


