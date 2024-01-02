#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::pair<int, int> pair1 = std::make_pair(1, 5);
    std::pair<int, int> pair2 = std::make_pair(3, 7);
    std::pair<int, int> pair3 = std::make_pair(5, 9);

    std::vector<std::pair<int, int> > myPairs;
    myPairs.push_back(pair1);
    myPairs.push_back(pair2);
    myPairs.push_back(pair3);

    // Sort the vector of pairs based on the first element of the pair
    std::sort(myPairs.begin(), myPairs.end());

    // Use lower_bound on the sorted vector of pairs
    std::vector<std::pair<int, int> >::iterator it = std::lower_bound(
        myPairs.begin(), myPairs.end(), std::make_pair(3, 0)
    );

    // 'it' now points to the first element in 'myPairs' that is not less than {3, 0}

    return 0;
}
