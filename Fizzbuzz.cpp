#include <iostream>

int main(){

//variable to go from 1 to 100
int i = 1;
//a loop to increase the variable and print it
for(i;i<=100;i++){
  //an if statement to decide what to print
  
  //if it is multiple of 3 or 5 it will give a 0 remainder and will get inside the if statement
  if(i%3 == 0 || i%5 == 0){
     // it has to check first it it is a multiple of both
    if(i%3 == 0 && i%5 == 0){
      std::cout << "FizzBuzz\n";
     // if not, it will check if it is a multiple of 3
    } else if(i%3==0){
      std::cout << "Fizz\n";
      // if not, it has to be a multiple of 5
    } else {
      std::cout <<"Buzz\n";
    }
  // if it is not a multiple of 3 or 5, it will print the number
  } else {
    std::cout << i <<"\n";
  }
}


}
