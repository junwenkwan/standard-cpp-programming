#include <iostream>
#include <tuple>

using std::cout;   
using std::endl;
using std::pair;

pair<int, int> findPriceRange(int dist){
    int min = static_cast<int>(dist*0.08+100);
    int max = static_cast<int>(dist*0.36+750);
    return {min, max};
}

int main() {
    int dist = 6452;
    auto [min, max] = findPriceRange(dist);
    cout << "Min: " << min << "\nMax: " << max << endl;

    // make_pair/tuple
    auto prices = std::make_pair(3.4, 5);
    auto values = std::make_tuple(3, 4, "hi");

    // access via get/set
    prices.first = prices.second; // prices = {5.0, 5}
    get<0>(values) = get<1>(values); // values = {4, 4, "hi"}
    
    auto [a, b] = prices;
    const auto& [x, y, z] = values;
    cout << "prices.first: " << a << "\nprices.second: " << b << endl;
    cout << "get<0>(values): " << x << "\nget<1>(values): " << y << endl;
}


