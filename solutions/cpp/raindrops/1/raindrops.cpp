#include "raindrops.h"
#include <array>
#include <string>
#include <iostream>

using namespace std;

namespace raindrops {
  string convert(int number) {
    string result{""};

    if (number % 3 == 0)
      result += "Pling";
    if (number % 5 == 0)
      result += "Plang";
    if (number % 7 == 0)
      result += "Plong";

    if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0)
      result = to_string(number);

    return result;
  }
} // namespace raindrops

int main(void) {
  array<int, 3> test{28, 30, 34};
  for (int i = 0; i < 3; i++) {
    string result = raindrops::convert(test[i]);
    cout << result << endl;
  }
}
