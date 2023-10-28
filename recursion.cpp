#include<iostream>
using namespace std;

int fact(int n){
  int sum=1;
    if (n>1){
        sum = n*fact(n-1);
        return sum;
    }
    else{
    return 1;
    }
}

int main(){
int n;
cout<< "enter a no. : " ;
cin>> n;

int res=fact(n);

cout<< "Factorial is: " << res <<endl;
return 0;
}
