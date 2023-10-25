// Saraii Roa
// roas23@csu.fullerton.edu
// @roas23
// Partners: @bhavesh1024

#include "parking_functions.h"

bool CanParkOnAsh(const std::string& day, int hour) {
  if (day == "wed" && hour >= 10 && hour <= 12) {
    return false;
  } else {
    return true;
  }
}

bool CanParkOnBeech(const std::string& day, int hour) {
  if (day == "fri" && hour >= 8 && hour <= 12) {
    return false;
  } else {
    return true;
  }
}
bool CanParkOnCedar(const std::string& day, int hour) {
  if (hour > 19 || hour <= 7) {
    return false;
  } else if (day == "tue" && (hour >= 8 && hour <= 10)) {
    return false;
  } else {
    return true;
  }
}

bool CanParkOnDate(const std::string& day, int hour, int min) {
  if ((day == "sat" || day == "sun")) {
    return true;
  } else if ((hour > 6 || (hour == 6 && min >= 30)) && (hour <= 16)) {
    return false;
  } else {
    return true;
  }
}
bool CanParkOnElm(const std::string& day, int hour) {
  if ((day == "mon" || day == "wed" || day == "thu") &&
      (hour >= 8 && hour <= 20)) {
    return false;
  } else if (day == "fri" && hour >= 8 && hour <= 17) {
    return false;
  } else {
    return true;
  }
}