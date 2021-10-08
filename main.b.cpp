#include<iostream>
#include<conio.h>
using namespace std;

main()
{
float a,b;
char op;
cout<<"please type your calculation and press Enter:"<<endl;

cin>>a>>op>>b;
cout<<"\n";
switch(op){
case '+':cout<<a<<'+'<<b<<'='<<a+b;break;
case '-':cout<<a<<'-'<<b<<'='<<a-b;break;
case '*':cout<<a<<'*'<<b<<'='<<a*b;break;
case '/':cout<<a<<'/'<<b<<'='<<a/b;break;
default:cout<<"error....   wrong operation...";
}

getch();
return 0;
}
