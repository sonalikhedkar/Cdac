#include <iostream>
using namespace std;
int main(){
    int row ,col;
   cout<<"Enter column and row"; 
    cin>>row>>col;
     char ch='A';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            
        }
        ch++;
        cout<<endl;
    }
    
/*
A
B B
C C C
D D D D
*/

 char ch='A';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        
        cout<<endl;

    }
/*
A 
B C 
D E F 
G H I J 
*/
 return 0;

}


