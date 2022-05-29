#include <iostream>
#include <cmath>
using namespace std;

void menu(){
cout<<"********************** Scientific Calculator ******************************"<<endl;
cout<<"-------------------------------------------------------------------------------------"<<endl;
cout<<"Choose an Operation Based on the Options provided below :"<<endl;

cout<<"1: Addition        \t \t \t7: Sin "<<endl  
    <<"2: Substraction    \t \t \t8: Cos"<<endl
    <<"3: Multiplication  \t \t \t9: Tan "<<endl
    <<"4: Division        \t \t \t10: Inverse Sin "<<endl
    <<"5: Exponent        \t \t \t11: Inverse Cos "<<endl
    <<"6: Square Root     \t \t \t12: Inverse Tan "<<endl;
}

class op_dasar {
    public:
    int a;
    float b,x,y,hasil;
    void pilihan();
    int addition (int a, int b);
    void substract(int a,int b);
    void exponent(int a,int b);
    void tangen(int a,int b);};
    
int op_dasar::addition(int a, int b){
    hasil = a+b;
    return hasil;m
}


void op_dasar::pilihan() {
    cout << "Enter your choice" << endl;
    cin >> a;
    switch(a){
        case 1:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        addition (x,y);
    default:
        cout << "Invalid input. Try Again!" << endl;
    }
}

int main(){
    op_dasar Calculator;
    menu();
    Calculator.pilihan();
    
  return 0;
}

