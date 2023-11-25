#include <iostream>
#include <vector>

using namespace std;

vector<int> generate_fibonacci(int num) {
    if (num <= 0) {
        return {};  // Return an empty vector when 'num' is less than or equal to 0
    }

    vector<int> fib = {5, 8, 13, 21, 34};

    if (num > 5) {
        for (int i = 5; i < num; i++) {
            fib.push_back(fib[i - 1] + fib[i - 2]);
        }
    } else {
        fib.resize(num);  // Resize the vector to contain only the first 'num' elements
    }

    return fib;
}

#ifndef TEST

int main()
{
    int num;

    cout << "How many fibonacci numbers would you like to see? ";
    cin >> num;

    // Check if input is valid
    if (!cin.good())
    {
        cout << "Invalid input. Exiting..." << endl;
        return 0;
    }

    vector<int> fib = generate_fibonacci(num);

    for (int i = 0; i < num; i++)
    {
        cout << fib[i] << endl;
    }

    cout << "Press any key to exit." << endl;
    cin.ignore();
    cin.get();
    return 0;
}

#endif