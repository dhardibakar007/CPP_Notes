#include<iostream>
using namespace std;

int main(){
int a,b,c;
int add,sub,mul,rem;
float div;
 cout<< "---------------------------------------" <<endl;
 cout<< "-- Basic Calculator With Switch Case --" <<endl;
 cout<< "---------------------------------------" <<endl;
 cout<< "Enter your first number: " <<endl;
 cin>> a;
 cout<< "Enter second number: " <<endl;
 cin>> b;
 cout<< "======================================="<<endl;
 cout<< "Select any options from below: "<<endl;
 cout<< "---------------------------------------"<<endl;
 cout<< "1. Addition " <<endl;
 cout<< "2. Subtraction "<<endl;
 cout<< "3. Multiplcation "<<endl;
 cout<< "4. Division "<<endl;
 cout<< "5. Remainder "<<endl;
 cout<< "---------------------------------------"<<endl;
 cout<< "Enter your choice: ";
 cin>> c;
 cout<< "=======================================" <<endl;
 //============   starting switch case   ================
 switch(c){
     case 1:
	     add=a+b;
	     cout<< "Addition is : " << add <<endl;
	     break;
     case 2:
	     sub=a-b;
	     cout<< "Subtraction is :" << sub <<endl;
	     break;
     case 3:
	     mul=a*b;
	     cout<< "Multiplication is: "<< mul <<endl;
	     break;
     case 4:
	     div=(float)a/(float)b;
	     cout<< "Division is: "<< div <<endl;
	     break;
     case 5:
	     rem= a%b;
	     cout<< "Remainder is: "<< rem <<endl;
	     break;
     default: 
	     cout<< "You have entered a wrong choice..." <<endl;
	     break;

 }
 cout<< "---------------------------------------" <<endl;
return 0;
}
