#include <iostream>
#include "Input_Validation_Extended.h"

//definition of recursion: Recursion is the process of defining a problem (or the solution to a problem) in terms of (a simpler version of) itself. Simplifying a problem continously until a base answer that is used to solve upwards

int factorialIR(int num){

  if(num == 1){
    return num;
  }
  else{
    return (num*factorialIR(num-1));
  }

}



int main() {
  int factorial = 0;
  int val = 0;
  cout << "Enter a value to return the factorial!" << endl;
  val = validateInt(val);

  factorial = factorialIR(val);

  cout << "Factorial of " << val << " = " << factorial << endl;
  
}