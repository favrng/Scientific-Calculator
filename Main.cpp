#include <iostream>
#include <cmath>
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
    int opsi;
    float a,b,x,y,hasil;
    void pilihan();
    void addition(float a,float b);
    void substract(float a,float b);
    void exponent(float a,float b);
    void cosinus(float a);
    void arctangen(float a);
    void root(float a);
    void tangen(float a,float b);};

void op_dasar::addition(float a,float b){
    hasil= a+b;
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}

void op_dasar::substract(float a,float b){
    if (a<b){
        hasil = b-a;
    }
    else if (a>=b){
        hasil= a-b;
    }
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}
void op_dasar::exponent(float a,float b){
    hasil= pow(a,b);
    cout<<"hasilnya adalah "<<hasil<<endl;
}

void op_dasar::root(float a){
    hasil= sqrt(a);
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}

void op_dasar::cosinus(float a){
	hasil= cos(a*PI/180);
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}

void op_dasar::arctangen(float a){
    hasil= atan(a)*180/PI;
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}

void op_dasar::pilihan() {
    cout << "Enter your choice" << endl;
    cin >> opsi;
    switch(opsi){
    case 1:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        addition(x,y);
        break;
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
    case 6:
        cout << "Enter The Number" << endl;
        cin >> x;
        root(x);
        break;
    case 8:
        cout << "Enter the number" << endl;
        cin >> x;
        cosinus(x);
        break;
    case 12:
        cout << "Enter the number" << endl;
        cin >> x;
        arctangen(x);
        break;
    default:
        cout << "Invalid input. Try Again!" << endl;
    }
}

int main(){
    while (true) {
        op_dasar Calculator;
        menu();
        Calculator.pilihan();
    }
    
  return 0;
}