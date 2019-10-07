#include <iostream>
#include <string>


int main(){

  std::cout << "Please enter an integer" << std::endl;
  int n;
  std::cin >> n;
  std::stirng row;
  for(unsigned int i = 1; i < n+1; i++){
    row = "X"*i;
    std::cout << row << std::endl;
  }
  return 0;
}
