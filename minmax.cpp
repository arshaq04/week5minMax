#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    cout << "Enter an integer: ";
    
    for (int i = 0; i < 10; i++) {
        int randomints = i % 101;
        nums.push_back(randomints);
        cout << randomints << " ";
    }
    
    return 0;
}