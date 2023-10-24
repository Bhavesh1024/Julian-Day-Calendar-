// Saraii Roa
// roas23@csu.fullerton.edu
// @roas23
// Partners: @bhavesh1024

#include <iostream>
#include <string>
#include <vector>

#include "parking_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // xTODO: write an if statement that validates the number of arguments. If
  // the number of arguments is invalid, print
  // error: you must supply four arguments
  // and return non-zero.
  if (arguments.size() != 5) {
    std::cout << "error: you must supply four arguments" << std::endl;
    return 1;
  }

  // xTODO: declare a string variable to hold the first argument (street)
  std::string street = arguments[1];
  // xTODO: declare a string variable to hold the second argument (day)
  std::string day = arguments[2];
  // xTODO: declare an int variable to hold the third argument (hour)
  // HINT: use the std::stoi function to convert the string argument to an int.
  int hour = std::stoi(arguments[3]);
  // xTODO: declare an int variable to hold the fourth argument (minute)
  // HINT: use the std::stoi function to convert the string argument to an int.
  int minute = std::stoi(arguments[4]);
  // xTODO: write an if statement that validates the street.
  // If the street is invalid, print
  // error: invalid street
  // and return non-zero.
  if (street != "Beech"  && street != "Ash" && street != "Elm" && street != "Date" && street != "Cedar") {
    std::cout << "error: invalid street" << std::endl;
    return 1;
  }
  // xTODO: write an if statement that validates the day.
  // If the day is invalid, print
  // error: invalid day
  // and return non-zero.
  if (day != "mon" && day != "tue" && day != "wed" && day != "thu" && day != "fri" && day != "sat" && day != "sun") {
    std::cout << "error: invalid day" << std::endl;
    return 1;
  }
  // xTODO: write an if statement that validates the hour.
  // If the hour is invalid, print
  // error: invalid hour
  // and return non-zero.
  if (hour<0 && hour > 23) {
    std::cout << "error: invalid hour" << std::endl;
    return 1;
  }
  // xTODO: write an if statement that validates the minute.
  // If the minute is invalid, print
  // error: invalid minute
  // and return non-zero.
  if (minute <0 && minute > 59){
    std::cout << "error: invalid minute" << std::endl;
    return 1;
  }
  // xTODO: Declare a bool variable that will store true when parking is
  // allowed, or false when not allowed.
  bool parkingAllowed{false};
  // xTODO: write an if-else-chain that uses the day to decide which
  // function to call (CanParkOnAsh, etc.)
  // Call the chosen function, and assign the return value into your bool
  // variable.
  if (street == "Ash") {
    parkingAllowed CanParkOnAsh(day, hour);
  } else if (street == "Beech") {
    parkingAllowed = CanParkOnBeech(day, hour);
  } else if (street == "Cedar") {
    parkingAllowed = CanParkOnCedar(day, hour);
  } else if (street == "Date") {
    parkingAllowed = CanParkOnDate(day, hour, min);
  } else if (street == "Elm") {
    parkingAllowed = CanParkOnElm(day, hour);
  } 
  // xTODO: Write an if statement that prints
  // allowed
  // or
  // not allowed
  // according to the value in your bool variable.
  if (parkingAllowed) {
    std::cout << "allowed" << std::endl;
  } else {
    std::cout << "not allowed" << std::endl;
  }

  return 0;
}