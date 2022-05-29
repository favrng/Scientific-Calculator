#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265359

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
    void substract(float a,float b);
    void exponent(float a,float b);
    void tangen(float a);
    void incos(float a);
};

    
void op_dasar::substract(float a,float b){
    hasil= a-b;
    cout<< hasil<<endl;
}
void op_dasar::exponent(float a,float b){
    hasil= pow(a,b);
    cout<< hasil<<endl;
}
void op_dasar::tangen(float a){
    hasil = tan(a*PI/180);
    cout<<"The result is "<<hasil<<endl;
}
void op_dasar::incos(float a){
    hasil = acos(a)*PI/180;
    cout<<"The Result is"<<hasil<<endl;
}
void op_dasar::pilihan() {
    cout << "Enter your choice" << endl;
    cin >> a;
    switch(a){
    case 2:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        substract(x,y);
        break;
    case 5:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        exponent(x,y);
        break;
        
    case 9: cout<<"Enter the Number"<<endl;
            cin>>x;
            tangen(x);
            break;
    case 11: cout<<"Enter the Number"<<endl;
            cin>>x;
            incos(x);
            break;
            
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
