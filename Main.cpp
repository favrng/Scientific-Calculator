#include <iostream>
#include <string>
using namespace std;

class MyMenu {       // The class
  public:             // Access specifier
    int MenuNumb ;    // Attribute (int variable)
    string MenuString;  // Attribute (string variable)
};

int main() {
  MyMenu menu;  // Create an object of MyClass

cout<<"********************** Scientific Calculator ******************************"<<endl;
cout<<"-------------------------------------------------------------------------------------"<<endl;
cout<<"Choose an Operation Based on the Options provided below :"<<endl;

  // Access attributes and set values
  menu.MenuNumb = 1;
  menu.MenuString = "1: \t Addition" ;

  // Print values
  cout << menu.MenuString; 
  return 0;
}
