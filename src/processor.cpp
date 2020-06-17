#include "processor.h"
#include "linux_parser.h"

#include <string>
#include <vector>

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
  return (float)LinuxParser::ActiveJiffies() / LinuxParser::Jiffies();
}