#include<iostream>
using namespace std;

void Cal(char A){
    char temp[100]={};
    int x = (int)A;
    int index=0;
    while(x!= 0){
        temp[index] = (x%2+'0');
        x = x/2;
        index++;
    }
    //cout << index ;
   // cout << temp[0] << endl;
    for(int i = index-1 ; i>=0;i--){
        cout << temp[i];
    }
    
}


int main(){
    
    char A[5];
    for(int i=0;i<5;i++) 
    cin >> A[i];
    
    for(int i=0 ; i<5 ;i++){
        cout << "0b";
        Cal(A[i]);
        cout << endl;
    }
    
    return 0;
}
