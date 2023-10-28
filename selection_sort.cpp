#include<iostream>
using namespace std;

int main(){
    int n,a[100],temp;
    cout<< "Enter the range : " <<endl;
    cin>> n;
    cout<< "Enter numbers one by one: " <<endl;
    for(int i=0;i<=n-1;i++){
        cin>> a[i];
    }
    cout<< "Entered Numbers are: " <<endl;
    for(int i=0;i<=n-1;i++){
        cout<< a[i] <<endl;
    }
    // Sorting started 
    for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  

}
