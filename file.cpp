#include<iostream>
#include<fstream>
using namespace std;

int main(){
ofstream MyFile("ABC.txt");

MyFile << "Hello World ... !";

MyFile.close();
return 0;
}
