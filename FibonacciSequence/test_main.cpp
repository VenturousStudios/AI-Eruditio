#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

extern vector<int> generate_fibonacci(int num);

bool are_equal(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

void test_generate_fibonacci() {
    vector<int> result;

    result = generate_fibonacci(1);
    if (are_equal(result, vector<int>{5})) {
        cout << "Test case 1 passed.Expected {5}, got {" << result[0] << "}.\n";
    } else {
        cout << "Test case 1 failed. Expected {5}, got {" << result[0] << "}.\n";
    }

    result = generate_fibonacci(0);
    if (are_equal(result, vector<int>{})) {
        cout << "Test case 2 passed.Expected {}, got {}\n";
    } else {
        cout << "Test case 2 failed. Expected {}, got {" << result[0] << "}.\n";
    }

    result = generate_fibonacci(2);
    if (are_equal(result, vector<int>{5, 8})) {
        cout << "Test case 3 passed.Expected {5, 8}, got {" << result[0] << ", " << result[1] << "}.\n";
    } else {
        cout << "Test case 3 failed. Expected {5, 8}, got {" << result[0] << ", " << result[1] << "}.\n";
    }

    result = generate_fibonacci(10);
    if (are_equal(result, vector<int>{5, 8, 13, 21, 34, 55, 89, 144, 233, 377})) {
        cout << "Test case 4 passed.Expected {5, 8, 13, 21, 34, 55, 89, 144, 233, 377}, got {";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << ", ";
            }
        }
        cout << "}.\n";
    } else {
        cout << "Test case 4 failed. Expected {5, 8, 13, 21, 34, 55, 89, 144, 233, 377}, got {";
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << ", ";
            }
        }
        cout << "}.\n";
    }

    result = generate_fibonacci(-1);
    if (are_equal(result, vector<int>{})) {
        cout << "Test case 5 passed.Expected {}, got {}\n";
    } else {
        cout << "Test case 5 failed. Expected {}, got {" << result[0] << "}.\n";
    }
}

int main() {
    test_generate_fibonacci();
    return 0;
}