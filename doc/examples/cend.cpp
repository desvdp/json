#include <json.hpp>

using namespace nlohmann;

int main()
{
    // create an array value
    json array = {1, 2, 3, 4, 5};

    // get am iterator to one past the last element
    json::const_iterator it = array.cend();

    // decrement the iterator to point to the last element
    --it;

    // serialize the element that the iterator points to
    std::cout << *it << '\n';
}
