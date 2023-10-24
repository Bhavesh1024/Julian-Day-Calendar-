// Saraii Roa
// roas23@csu.fullerton.edu
// @roas23
// Partners: @bhavesh1024

#include "parking_functions.h"

bool CanParkOnAsh(const std::string& day, int hour) {
  // xTODO: Write an if statement that returns true when parking is allowed on
  // Ash Street, or false otherwise.
  // HINT: The if statement needs a compound Boolean expression with multiple
  // && operators.
  if (day == "wed" && hour >= 10 && hour <= 12) {
    return false;
  return true;
}

bool CanParkOnBeech(const std::string& day, int hour) {
  if (hour >= 8 && hour <= 12) {
    return false;
  }
  return true;
}
bool CanParkOnCedar(const std::string& day, int hour) {
  // xTODO: Write an if statement that returns true when parking is allowed on
  // Cedar Street, or false otherwise.
  if (hour >= 700 && hour <= 1900) {
    return false;
  } if (day == "tue" && hour >= 8 && hour <= 10) {
    return false;
  }
  return true;
  }

bool CanParkOnDate(const std::string& day, int hour, int min) {
  if ((day == "sat" || day == "sun" && (hour <= 6  && min <= 30) || ( hour >= 16))) {
    return false;
  }
   return true;
  }
bool CanParkOnElm(const std::string& day, int hour) {
  // xTODO: Write an if statement that returns true when parking is allowed on
  // Elm Street, or false otherwise.
  if ((day == "mon" && day == "wed" && day == "thu") && hour >= 8 && hour <= 20) {
    return false;
  } if (day == "fri" && hour >= 8 && hour <= 17) {
    return false;
  } if (day == "tue") {
    return false;
  }
  return true;
  } 