#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter opertator(+,-,*,/) : ";
cin>>op;
cout<<"Enter 2nd number: ";
cin>>b;
  switch(op){
    case '+':
    cout<<"add of a & b: "<<a+b;
    break;
    case '-':
    cout<<"sub of a & b: "<<a-b;
    break;
    case '*':
    cout<<"mul of a & b: "<<a*b;
    break;
    case '/':
    if(b!=0){
    cout<<"div of a & b: "<<a/b;
    break;
    }else{
        cout<<"a number can't be divided by 0";
    }
    default:
    cout<<"invalid operators";

  }
    return 0;
}   