#include <iostream>

#include "assignment/linear_search_two_pointers.hpp"

using namespace std;
using namespace assignment;

int main(int argc, char **argv) {

  SearchStrategy* searchStrategy = new LinearSearchTwoPointers;
  cout << searchStrategy->Search({51}, 51).value();

  return 0;
}
