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
    void addition(int a,int b);
    void substract(int a,int b);
    void exponent(int a,int b);
    void cosinus(int a);
    void arctangen(int a);
    void root(int a);
    void tangen(int a,int b);};

void op_dasar::addition(int a,int b){
    hasil= a+b;
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}

void op_dasar::substract(int a,int b){
    if (a<b){
        hasil = b-a;
    }
    else if (a>=b){
        hasil= a-b;
    }
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}
void op_dasar::exponent(int a,int b){
    hasil= pow(a,b);
    cout<<"hasilnya adalah "<<hasil<<endl;
}

void op_dasar::root(int a){
    hasil= sqrt(a);
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}

void op_dasar::cosinus(int a){
    c = a*(22/7)/180;
	hasil= cos(c);
    cout<<"hasilnya adalah "<<hasil<<endl;
    
}

void op_dasar::arctangen(int a){
	c = a*(22/7)/180;
    hasil= atan(c);
    cout<<"hasilnya adalah "<<hasil<<endl;
    
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
        cos(x);
        break;
    case 12:
        cout << "Enter the number" << endl;
        cin >> x;
        atan(x);
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