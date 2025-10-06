//Program to find the number is even or odd
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:"<<endl;
    cin>>x;
    if(x%2 == 0){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Numer is odd"<<endl;
    }
    return 0;
}