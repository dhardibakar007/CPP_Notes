#include<iostream>
#include<fstream>
using namespace std;

int main(){
string myText;
ifstream MyReadFile("ABC.txt");
while(getline (MyReadFile, myText)){
cout << myText;
}
MyReadFile.close();
cout<< " "<< endl;
return 0;
}
