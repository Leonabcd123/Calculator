#include <iostream>
#include <cmath>
#include <limits>

int main(){

  double num1;
  double num2;
  int choice;
  bool running = true;

  std::cout << "Welcome To My Calculator!\n";
  
  while (running){

    std::cout << "******************************\n";
    std::cout << "What Would You Like To Do?\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Modulo\n";
    std::cout << "6. Exponentiation\n";
    std::cout << "7. Exit\n";
    std::cin >> choice;

    if (choice == 7){

      running = false;
      break;

    }

    if (std::cin.fail() || std::cin.peek() != '\n'){

      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "Please Enter A Valid Number.\n";
      continue;
    }

    
    std::cout << "Enter Your First Number: \n";
    std::cin >> num1;
    std::cout << "Enter Your Second Number: \n";
    std::cin >> num2;

    if (std::cin.fail()){

      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << "Please Enter A Valid Number.\n";
      continue;
    }

    switch (choice)
    {
    case 1:

      std::cout << "Your Result Is: " << num1 + num2 << '\n';
      break;

    case 2:

      std::cout << "Your Result Is: " << num1 - num2 << '\n';
      break;

    case 3:

      std::cout << "Your Result Is: " << num1 * num2 << '\n';
      break;

    case 4:

      if (num2 != 0){

        std::cout << "Your Result Is: " << num1 / num2 << '\n';

      }

      else 

      {

        std::cerr << "You Can't Divide By 0!\n";

      }

      break;


    case 5:

      std::cout << "Your Result Is: " << fmod(num1, num2) << '\n';
      break;

    case 6:

      std::cout << "Your Result Is: " << pow(num1, num2) << '\n';
      break;

    default:
      std::cout << "Please Enter A Valid Number (1, 2, 3, 4, 5).\n";
      break;
    }

  }
  

  return 0;
}