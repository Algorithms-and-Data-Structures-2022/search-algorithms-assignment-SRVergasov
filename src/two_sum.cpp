#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int a{0};
    int b{static_cast<int>(arr.size()) - 1};

    while (a <= b) {
      if (arr[a] + arr[b] == sum) {
        return std::make_pair(a, b);
      }
      if (arr[a] + arr[b] < sum) {
        a++;
      } else if (arr[a] + arr[b] > sum) {
        b--;
      }
    }

    return std::nullopt;
  }

}  // namespace assignment