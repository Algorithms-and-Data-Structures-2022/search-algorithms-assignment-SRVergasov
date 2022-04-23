#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    int a{0};
    int b{static_cast<int>(arr.size()) - 1};

    while (a <= b) {
      if (arr[a] == search_elem) {
        return a;
      }
      if (arr[b] == search_elem) {
        return b;
      }
      a++;
      b--;
    }

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    return std::nullopt;
  }

}  // namespace assignment