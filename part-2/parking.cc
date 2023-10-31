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
  if (arguments.size() != 5) {
    std::cout << "error: you must supply four arguments\n";
    return 1;
  }
  std::string street(arguments.at(1));
  std::string day(arguments.at(2));
  int hour{std::stoi(arguments.at(3))};
  int minute{std::stoi(arguments.at(4))};
  if (day != "mon" && day != "tue" && day != "wed" && day != "thu" &&
      day != "fri" && day != "sat" && day != "sun") {
    std::cout << "error: invalid day\n";
    return 1;
  }
  if (!(hour >= 0 && hour <= 23)) {
    std::cout << "error: invalid hour\n";
    return 1;
  }
  if (!(minute >= 0 && minute <= 59)) {
    std::cout << "error: invalid minute\n";
    return 1;
  }
  bool parking_allowed = false;
  if (street == "ash") {
    parking_allowed = CanParkOnAsh(day, hour);
  } else if (street == "beech") {
    parking_allowed = CanParkOnBeech(day, hour);
  } else if (street == "cedar") {
    parking_allowed = CanParkOnCedar(day, hour);
  } else if (street == "date") {
    parking_allowed = CanParkOnDate(day, hour, minute);
  } else if (street == "elm") {
    parking_allowed = CanParkOnElm(day, hour);
  } else {
    std::cout << "error: invalid street\n";
    return 1;
  }
  if (parking_allowed == true) {
    std::cout << "allowed\n";
  } else {
    std::cout << "not allowed\n";
  }
  return 0;
}