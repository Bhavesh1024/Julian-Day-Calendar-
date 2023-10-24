// Bhavesh Malhi
// Bhavesh05@csu.fullerton.edu
// @bhavesh1024
// Partners: @roas23

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "datediff_functions.h"

// Main function - the entry point to our program
int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 7) {
    std::cout
        << "Please provide a starting date and an ending date. Exiting.\n";
  }
  int start_month{0};
  int start_day{0};
  int start_year{0};
  start_month = std::stoi(arguments[1]);
  start_day = std::stoi(arguments[2]);
  start_year = std::stoi(arguments[3]);
  int end_month{0};
  int end_day{0};
  int end_year{0};
  end_month = std::stoi(arguments[4]);
  end_day = std::stoi(arguments[5]);
  end_year = std::stoi(arguments[6]);
  int number_days{DateDifference(start_month, start_day, start_year, end_month,
                                 end_day, end_year)};
  std::cout << "The number of days between ";
  PrintDate(start_month, start_day, start_year);
  std::cout << " and ";
  PrintDate(end_month, end_day, end_year);
  std::cout << " is " << number_days << " days\n";
  return 0;
}
