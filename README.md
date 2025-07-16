# making-simple-calculator-by-sunny
#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
cout<<"Enter the value of a : "<<endl;
cin>>a;
cout<<"Enter operator(+,-,*,/): "<<endl;
cin>>op;
cout<<"Enter the value of b: "<<endl;
cin>>b;

switch(op){
case '+':
cout<<"the sum of a & b is "<<a+b<<endl;
break;
case '-':
cout<<"the sub of a & b is "<<a-b<<endl;
break;
case '*':
cout<<"the mul of a & b is "<<a*b<<endl;
break;
case '/':
if(b!=0){
  cout<<"the div of a & b is "<<a/b<<endl;
}else{
  cout<<"a number can't be divided by zero"<<endl;
}
break;
default:
cout<<"invalid operator"<<endl;
break;
}
return 0;
}  
