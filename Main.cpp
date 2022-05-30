#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265359
int i = 0; //Counter

void menu_once(){
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

void menu_repeat(){
    cout << "Choose an Operation" << endl;
}

class op_dasar {
    public:
    int n; //Number untuk memilih operasi
    float a, b, x, y, hasil;
    void pilihan();
    void substract(float a,float b);
    void exponent(float a,float b);
    void tangen(float a);
    void incos(float a);
    void multiplication (float a, float b);
    void division (float a, float b);
    void exponent(float a,float b);
    void sinus (float a);
    void tangen(float a, float b);
    void inverse_sin (float a);
    
};
    
void op_dasar::substract(float a, float b){
    if (a<b){
        hasil = b-a;
    }
    else if (a>=b){
        hasil = a-b;
    }
    cout<<"Hasilnya adalah "<<hasil<<endl;

}

void op_dasar::multiplication(float a, float b){
    hasil = a*b;
    cout << "Hasilnya adalah " << hasil << endl;
}

void op_dasar::division (float a, float b){
    hasil = a/b;
    cout << "Hasilnya adalah " << hasil << endl;
}

void op_dasar::exponent(float a, float b){
    hasil= pow(a,b);
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::inverse_sin(float a){
    hasil = (asin(a)/PI)*180;
    cout<<"Hasilnya adalah "<<hasil<<endl;
}
void op_dasar::sinus (float a){
    hasil = round((sin(a/180*PI))*10000)/10000;
    if (hasil == -0.00){
        hasil = 0.00;
    }
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

    
void op_dasar::substract(float a,float b){
    hasil= a-b;
    cout<< hasil;
}
void op_dasar::exponent(float a,float b){
    hasil= pow(a,b);
    cout<< hasil;
}
void op_dasar::tangen(float a){
    hasil = tan(a*PI/180);
    cout<<hasil;
}
void op_dasar::incos(float a){
    hasil = acos(a)*PI/180;
    cout<<hasil;
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
        i++;
        break;
    case 3:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        multiplication (x,y);
        i++;
        break;
    case 4:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        division (x,y);
        i++;
        break;
    case 5:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        exponent(x,y);
        i++;
        break;
    
    case 7:
        cout << "Enter number" << endl;
        cin >> x;
        sinus (x);
        i++;
        break;
    case 10:
        cout << "Enter number" << endl;
        cin >> x;
        inverse_sin (x);
        i++;
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
        i++;
    }

}

int main(){
    op_dasar Calculator;
    if (i == 0){
        menu_once();
        Calculator.pilihan();
    }
    while (i>0) {
        menu_repeat();
        Calculator.pilihan();
    }
    
   
  return 0;
}
