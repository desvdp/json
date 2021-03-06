#include <json.hpp>

using namespace nlohmann;

int main()
{
    // create an array value
    json array = {1, 2, 3, 4, 5};

    // get an iterator to the reverse-beginning
    json::reverse_iterator it = array.rbegin();

    // serialize the element that the iterator points to
    std::cout << *it << '\n';
}
