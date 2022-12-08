#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> v{1, 3, 2, 4};
    int n1 = 2;
    int n2 = 5;
    auto is_even = [](int i){ return i%2 == 0; };

    auto result1 = std::find(begin(v), end(v), n1);
    auto result2 = std::find(begin(v), end(v), n2);
    auto result3 = std::find_if(begin(v), end(v), is_even);

    (result1 != std::end(v))
        ? std::cout << "v contains " << result1-v.begin() << '\n'
        : std::cout << "v does not contain " << n1 << '\n';
}




















