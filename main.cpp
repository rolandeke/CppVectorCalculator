#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<limits>

int main(int argc, char const *argv[])
{
    
    double num1, num2, ans;
    std::string userInput = "";
    std::string singleValue;
    char cSpace = ' ';

    std::cout << "Enter a calculation(Ex: 5 + 6) : " << std::endl;
    getline(std::cin, userInput);

    std::vector<std::string> calc_vector;

    std::stringstream ss(userInput);

    while(getline(ss, singleValue, cSpace))
    {
        calc_vector.push_back(singleValue);
    }
    
    num1 = std::stod(calc_vector[0]);
    std::string operation = (calc_vector[1]);
    num2 = std::stod(calc_vector[2]);

   if(operation == "+"){
       ans = num1 + num2;
       std::cout << num1 << " + " << num2 << " = " << ans << std::endl;
   }
   else if (operation == "*")
   {
       ans = num1 * num2;
       std::cout << num1 << " * " << num2 << " = " << ans << std::endl;
    }else if(operation == "-"){
        ans = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << ans << std::endl;
    }else if(operation == "/"){
        ans = num1 / num2;
        std::cout << num1 << " / " << num2 << " = " << ans << std::endl;
    }else if (operation == "%"){
        ans = (int)num1 % (int)num2;
        std::cout << num1 << " % " << num2 << " = " << ans << std::endl;
    }else{
        std::cout << "Invalid Operation\n";
    }

    


    return 0;
}
