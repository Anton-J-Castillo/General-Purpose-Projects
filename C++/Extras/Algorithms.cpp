#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &numbers){
    int temp;

    for (int i = 0; i < numbers.size() - 1; i++){
        for (int j = 0; j < numbers.size() - i - 1; j++){
            if (numbers[j] > numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // prevents overflow
        if (arr[mid] == target)
            return mid; // found
        else if (arr[mid] < target)
            left = mid + 1; // search right half
        else
            right = mid - 1; // search left half
    }
    return -1; // not found
}

int main(){

    vector<int> numbers = {8,7,3,4,6,10,9,5,1,2};

    bubbleSort(numbers);

    for (int number: numbers){
        cout << number << " ";
    }

    return 0;
}