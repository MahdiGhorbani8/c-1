#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
    float weight,height,bmi;
    cout << "Enter your weight(Kg) and height(meter): "<<endl;
    cin>>weight>>height;
    bmi=weight/(height*height);
    cout<<"BMI: "<<bmi<<endl;
    if(bmi<18)
            cout<<"Thin";
    else if(bmi>=18 && bmi<25)
            cout<<"Normal";
    else if(bmi>=25 && bmi<30)
            cout<<"Fat";
    else
            cout<<"Out of range";

    getch();
}


