// function overloading

#include<iostream>
using namespace std;

int Add(int x, int y){
int z= x+y;
return z;
}

double Add(double x, double y){
double z=x+y;
return z;
}

int main(){
cout<< "integer : " << Add(22,27) <<endl;
cout<< "double : " <<Add(22.4,27.4) <<endl;
return 0;
}
