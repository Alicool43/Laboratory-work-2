                                           //Lab 2 Alybaev Alikhan
//C++ Operators (Arithmetic)
#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    
    int add = x + y;
    int sub = x - y;
    int mult = x * y;
    int div = x / y;
    int mod = x % y;
    int inc = ++x;
    int dec = --y;
    
    cout << "Addition is: " << add << "\n" << endl;
    cout << "Substraction is: " << sub << "\n" << endl;
    cout << "Multiplication is: " << mult << "\n" << endl;
    cout << "Division is: " << div << "\n" << endl;
    cout << "Modulus is: " << mod << "\n" << endl;
    cout << "Increment of x is: " << inc << "\n" << endl;
    cout << "Decrement of y is: " << dec << "\n" << endl;

    return 0;

}

//C++ Operators (Assignment)
#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter your number: ";
    cin >> x;

    int add = x+=5;
    int sub = x-=5;
    int mult = x*=5;
    int div = x/=5;

    cout << "Your addition is: " << add << "\n" << endl;
    cout << "Your substraction is: " << sub << "\n" << endl;
    cout << "Your multiplication is: " << mult << "\n" << endl;
    cout << "Your division is: " << div << "\n" << endl;

    return 0;

}

//C++ Operators (Comparison)
#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number:";
    cin >> y;

    cout << "Is it equal? " << (x == y) << "\n" << endl;
    cout << "Is it not equal? " << (x != y) << "\n" << endl;
    cout << "Is it greater than x? " << (x > y) << "\n" << endl;
    cout << "Is it less than x? " << (x < y) << "\n" << endl;

    return 0;

}

//C++ Operators (Logical)
#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;

    cout << "Logical and is " << (x > 3 && x < 10) << "\n";
    cout << "Logical or is " << (x > 3 || x < 4);


    return 0;

}

//C++ Strings (Concatenation)
#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    string y;
   
    cout << "Enter your first name: ";
    cin >> x;
    cout << "Enter your last name: ";
    cin >> y;
    
    string fullName = x + " " + y;
    cout << fullName;


    return 0;

}

// C++ Strings (Numbers and Strings)
#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    int y;
    string z;
    string w;
   
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    cout << "Enter your third number: ";
    cin >> z;
    cout << "Enter your fourth number: ";
    cin >> w;
    
    int r = x + y;
    string e = z + w;
    cout << r << "\n";
    cout << e;


    return 0;

}

// C++ Strings (String Lenght)
#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;

    cout << "Enter your txt: ";
    cin >> x;

   
    cout << "The length of the txt string is: " << x.length(); 

    return 0;

}

// C++ Strings (Access Strings)
#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    int y;

    cout << "Enter your txt: ";
    cin >> x;
    cout << "Enter your number: ";
    cin >> y;

   
    cout << x[y];

    return 0;

}

// C++ Math
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    
    cout << "Enter your number: ";
    cin >> x;

    cout << "Square root is: " << sqrt(x) << "\n";
    cout << "Round to the nearest integer: " << round(x) << "\n";
    cout << "The natural logarithm is: " <<log(x) << "\n";

    return 0;

}

// C++ Boolean Values
#include <iostream>
using namespace std;

int main(){
    bool areYouCool = true;
    bool areYouLazy = false;
    
    cout << areYouCool << "\n";
    cout << areYouLazy;

    return 0;

}

// C++ Boolean Expressions
#include <iostream>
using namespace std;

int main() {
  int x;
  int y;
  cout << "Enter your number: ";
  cin >> x;

  cout << "Enter your second number: ";
  cin >> y;

  cout << "Your answer is: " << (x == y);
  
  return 0;
}

//C++ If,Else,Else if
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Enter your number: ";
  cin >> x;
  if (x < 18) {
    cout << "Pay 30 dollars ";
  } else if (x < 20) {
    cout << "Pay 40 dollars";
  } else {
    cout << "Pay 50 dollars";
  }
  return 0;
}

//C++ Switch
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Enter your number from 1 to 7: ";
  cin >> x;
  switch (x) {
  case 1:
    cout << "Lucky";
    break;
  case 2:
    cout << "Not Lucky";
    break;
  case 3:
    cout << "Lucky";
    break;
  case 4:
    cout << "Not Lucky";
    break;
  case 5:
    cout << "Lucky";
    break;
  case 6:
    cout << "Not Lucky";
    break;
  case 7:
    cout << "Lucky";
    break;
    default:
    cout << "You entered wrong number! ";
  }
  return 0;
}

// C++ While Loop
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Enter your number: ";
  cin >> x;

  while (x <= 10) {
    if (x < 10) {
      cout << "Red Light\n";
    } else {
      cout << "Green Light\n";
    }
    x = x + 1;
  }

  return 0;
}

// C++ For Loop
#include <iostream>
using namespace std;

int main() {
  int x;
  int i;

  cout << "Enter your number: ";
  cin >> x;

  for (i = 1; i <= 10; i++) {
    cout << x << " * " << i << " = " << x * i << "\n";
  }

  return 0;
}

// C++ Break
#include <iostream>
using namespace std;

int main() {
  int i;
  cout << "Enter your number: ";
  cin >> i;

  while (i < 10) {
    if (i == 6) {
      i++;
      break;
    }
    cout << i << "\n";
    i++;
  } 
  return 0;
}

//C++ Continue
#include <iostream>
using namespace std;

int main() {
  int i;
  cout << "Enter your number: ";
  cin >> i;

  while (i < 10) {
    if (i == 6) {
      i++;
      continue;
    }
    cout << i << "\n";
    i++;
  } 
  return 0;
}



