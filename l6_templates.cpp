#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename T>
pair<T, T> my_minmax(T a, T b){
    if (a < b) return {a, b};
    else return {a, b};
}

template <typename T>
void printMinAndMax(T min, T max){
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;    
}

void minmaxTestBasic() {
    auto [min1, max1] = my_minmax(3, -2);
    printMinAndMax(min1, max1);
    
    auto [min2, max2] = my_minmax(8.3, 7.4);
    printMinAndMax(min2, max2);

    auto [min3, max3] = my_minmax("Avery", "Anna");
    printMinAndMax(min3, max3);

    auto [min4, max4] = my_minmax<vector<int>>({1,2}, {3,1});
}

template <typename InputIterator, typename DataType>
int countOccurences(InputIterator begin, InputIterator end, DataType val){
    int count = 0;
    for (auto iter = begin; iter != end; ++iter){
        if (*iter == val) ++count;
    }
    return count;
}

int main(){
    minmaxTestBasic();

    list<double> list = {1.1, 3.14, 3.14, 3.14, 1.1};
    int count = countOccurences(list.begin(), list.end(), 3.14);

    cout << "Count: " << count << endl;
    return 0;
}