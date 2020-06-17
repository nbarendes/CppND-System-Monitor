#include <string>
#include <unistd.h>
#include "format.h"

#define HOUR 3600
#define MIN 60

using std::string;
using std::to_string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    int hour, minute, second;
    string h , m , s ;
  
    hour=seconds/HOUR;
    second=seconds % HOUR;
    minute=second/MIN;
    second %= MIN;
    
  
    h = to_string(hour);
    m = to_string(minute);
    s = to_string(second);
  
  return  h + ":" + m  + ":" + s ;
}