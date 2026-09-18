#include <string>

using namespace std;

namespace log_line {
  std::string message(std::string line) {
    int pos = line.find(": ");
    string info = line.substr(pos + 2);
    return info;
  }

  std::string log_level(std::string line) {
    int end = line.find("]");
    string level = line.substr(1, end + 1);
    return level;
  }

  std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line) + ")";
  }
} // namespace log_line
