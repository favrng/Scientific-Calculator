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
    void add(float a, float b); //1
    void substract(float a,float b); //2
    void multiply (float a, float b); //3
    void divide (float a, float b); //4
    void exponent(float a,float b); //5
    void root(float a); //6
    void sinus (float a); //7
    void cosinus(float a); //8
    void tangen(float a); //9
    void arcsin (float a); //10
    void arccos(float a); //11
    void arctan(float a); //12
};
    
void op_dasar::add(float a,float b){
    hasil= a+b;
    cout << "Hasilnya adalah " << hasil << endl;
    
}

void op_dasar::substract(float a,float b){
    if (a<b){
        hasil = b-a;
    }
    else if (a>=b){
        hasil = a-b;
    }
    cout<<"Hasilnya adalah "<<hasil<<endl;

}

void op_dasar::multiply(float a, float b){
    hasil = a*b;
    cout << "Hasilnya adalah " << hasil << endl;
}

void op_dasar::divide (float a, float b){
    hasil = a/b;
    cout << "Hasilnya adalah " << hasil << endl;
}

void op_dasar::exponent(float a,float b){
    hasil= pow(a,b);
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::root(float a){
    hasil= sqrt(a);
    cout<<"hasilnya adalah "<<hasil<<endl;
}

void op_dasar::sinus (float a){
    hasil = round((sin(a/180*PI))*10000)/10000;
    if (hasil == -0.00){
        hasil = 0.00;
    }
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::cosinus (float a){
    hasil = round((cos(a/180*PI))*10000)/10000;
    if (hasil == -0.00){
        hasil = 0.00;
    }
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::tangen(float a){
    hasil = round((tan(a*PI/180))*10000)/10000;
    if (hasil == -0.00){
        hasil = 0.00;
    }
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::arcsin(float a){
    hasil = (asin(a)/PI)*180;
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::arccos(float a){
    hasil = (acos(a)/PI)*180;
    cout<<hasil;
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::arctan(float a){
    hasil = (atan(a)/PI)*180;
    cout<<hasil;
    cout<<"Hasilnya adalah "<<hasil<<endl;
}

void op_dasar::pilihan() {
    cout << "Enter your choice" << endl;
    cin >> n;
    switch(n) {
    case 1:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        add(x,y);
        i++;
        break;
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
        multiply (x,y);
        i++;
        break;
    case 4:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        divide (x,y);
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
    case 6:
        cout << "Enter Number" << endl;
        cin >> x;
        root(x);
        i++;
        break;
    case 7:
        cout << "Enter The Number" << endl;
        cin >> x;
        sinus (x);
        i++;
        break;
    case 8:
        cout << "Enter the number" << endl;
        cin >> x;
        cosinus(x);
        i++;
        break;
    case 9: cout<<"Enter the Number"<<endl;
        cin>>x;
        tangen(x);
        i++;
        break;
    case 10:
        cout << "Enter number" << endl;
        cin >> x;
        arcsin (x);
        i++;
        break;
    case 11: cout<<"Enter the Number"<<endl;
        cin>>x;
        arccos(x);
        i++;
        break;
    case 12:
        cout << "Enter the number" << endl;
        cin >> x;
        arctan(x);
        i++;
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
