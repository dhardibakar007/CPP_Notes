// continue statement is used
// to omit some values.

#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<=10;i++){
        if(i==4 || i==6 || i==8){
            continue;  // this is going to omit 
                       //4 ,6 and 8 from the list
        }
    cout << i << endl;
    }
return 0;
}
