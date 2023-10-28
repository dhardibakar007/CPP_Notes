#include<iostream>
using namespace std;

int main(){
string a[100];
cout<< "Enter 3 names:" <<endl;
    for(int i=0;i<=3;i++){
        cin>> a[i];
    }
cout<< "You have entered: "<< endl;
    for(int i=0;i<=3;i++){
        cout<< a[i] <<endl;
    }
return 0;
}
