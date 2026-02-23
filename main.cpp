#include <iostream>
#include "sqrt_smpl.cpp"

int main(){
    int input;
    std::cout << "Enter Value to sqrt: ";
    std::cin >> input;
    if(sqrt_smpl(input)[0] == 0){
        std::cout << '/' << sqrt_smpl(input)[1];
    }else if(sqrt_smpl(input)[1] == 0){
        std::cout << sqrt_smpl(input)[0];
    }else{
        std::cout << sqrt_smpl(input)[0] << '/' << sqrt_smpl(input)[1];
    }
    return 0;
}
