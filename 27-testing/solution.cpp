#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

/**
 * By BingLi224
 * 01:21 THA 15/03/2019
 *
 * Testing
 */
class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        return vector<int> ();
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        return vector<int> { 1, 2, 3 };
    }

    static int get_expected_result() {
        // complete this function
        return 0;   // first one is the smallest
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        return vector<int> { 2, 2 };    // must be equal
    }

    static int get_expected_result() {
        // complete this function
        return 0;   // choose the first on as the index of first minimum
    }

};


void TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        auto result = minimum_index(seq);
    } catch (invalid_argument& e) {
        return;
    }
    assert(false);
}

void TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);

    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

    auto expected_result = TestDataUniqueValues::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);

    auto tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}
