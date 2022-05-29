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
    int n; //Number untuk memilih operasi
    float a, b, x, y, hasil;
    void pilihan();
    void substract(float a,float b);
    void multiplication (float a, float b);
    void exponent(float a,float b);
    void tangen(float a, float b);
    
};
    
void op_dasar::substract(float a, float b){
    if (a<b){
        hasil = b-a;
    }
    else if (a>=b){
        hasil = a-b;
    }
    cout<<"hasilnya adalah "<<hasil<<endl;

}

void op_dasar::multiplication(float a, float b){
    hasil = a*b;
    cout << "hasilnya adalah " << hasil << endl;
}

void op_dasar::exponent(float a, float b){
    hasil= pow(a,b);
    cout<<"hasilnya adalah "<<hasil<<endl;
}

void op_dasar::pilihan() {
    cout << "Enter your choice" << endl;
    cin >> n;
    switch(n) {
    case 2:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        substract(x,y);
        break;
    case 3:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        multiplication (x,y);
        break;
    case 5:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        exponent(x,y);
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