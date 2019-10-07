#include <iostream>
#include <string>


int main(){

  std::cout << "Please enter an integer";;
  int n;
  std::cin >> n;
  std::stirng row;
  for(unsigned int i = 0; i < n; i++){
    row = "X"*i;
    std::cout << row << std::endl;
  }
  return 0;
}
