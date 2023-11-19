#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    cout << "Please enter random numbers: ";
    srand((unsigned) time(NULL)); //This is so a new a fresh new sequence of 
    //random numbers can be generated, otherwise the output will remain the same if a new seed value is not generated.
    
    for (int i = 0; i < 10; i++) { //sets max to 10 integers printed
        int randomints = rand() % 101; // range set from 0 to 100
        nums.push_back(randomints); //pushes each element into the array
        cout << randomints << " "; // " " to create space between each array when displayed.
    }
    
    int min = nums[0];
    int max = nums[0]; // starts position 0 in array
    
    for (int i = 1; i < 10; i++) { //iterates through each integer
        if (nums[i] < min) { //iterates throug each pair integers in the array and determines the min and max values.
            min = nums[i];
        }
        if (nums[i] > max) { // e.g. if 70 and 95 are the first values, then min will be set
        // at 70 and max at 95. Until there is another element less than the current min and higher than 
        // the current max it will not change.
            max = nums[i];
        }
    }
         cout << endl << "minimum is " << min << " maximum is " << max;
    
    return 0;
}