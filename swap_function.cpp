#include<iostream>
using namespace std;

void swapNum(int &x, int &y){
int z=x;
x=y;
y=z;
}

int main(){
int x=8;
int y=5;
cout<< "before swap" <<endl;
cout<< "x = " << x <<endl;
cout<< "y = " << y <<endl;
swapNum(x,y);
cout<< "After swap" <<endl;
cout<< "x = "<< x <<endl;
cout<< "y = "<< y <<endl; 
return 0;
}
