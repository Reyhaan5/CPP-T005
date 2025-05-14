#include<iostream>
using namespace std;

class comp {
public:
int r, i;  // Real and imaginary parts of the complex number

// Function to add two complex numbers
comp add(comp CA, comp CB) {
comp CC;
CC.r = CA.r + CB.r;  // Add real parts
CC.i = CA.i + CB.i;  // Add imaginary parts
return CC;
}

// Input function to accept complex number values
void input() {
cout << "Enter the real part of the complex number: ";
cin >> r;
cout << "Enter the imaginary part of the complex number: ";
cin >> i;
}

// Display function to show the complex number
void display() {
cout << "Complex number: " << r << " + " << i << "i" << endl;
}
};

int main() {
comp C1, C2, C3;  // Declare 3 complex number objects

// Input for two complex numbers
cout << "Enter first complex number:" << endl;
C1.input();
cout << "Enter second complex number:" << endl;
C2.input();

// Add the complex numbers
C3 = C3.add(C1, C2);

// Display the result
cout << "The result of addition is: ";
C3.display();

return 0;
}
