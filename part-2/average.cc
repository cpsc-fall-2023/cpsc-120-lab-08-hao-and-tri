// Tri Lam
// trilam@csu.fullerton.edu
// @tril27
// Partners: @Haoluc1

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number.\n";
    return 1;
  }

  double total_sum{0.0};
  int num_arguments = arguments.size() - 1;

  for (int i = 1; i < arguments.size(); i++) {
    double number = std::stod(arguments[i]);
    total_sum += number;
  }

  double average = total_sum / num_arguments;

  std::cout << "average = " << average << "\n";

  return 0;
}