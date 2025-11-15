//Lab_06_1_it

#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <iomanip> 

const int ARRAY_SIZE = 27;
const int MIN_VALUE = -35;
const int MAX_VALUE = 25;

bool checkCriterion(int element);

void fillArrayIterative(int arr[], int size, int min, int max);

void printArrayIterative(const int arr[], int size);

int countElementsIterative(const int arr[], int size);

int sumElementsIterative(const int arr[], int size);

void replaceElementsIterative(int arr[], int size);

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int c[ARRAY_SIZE];

    fillArrayIterative(c, ARRAY_SIZE, MIN_VALUE, MAX_VALUE);

    std::cout << "Original array:\n";
    printArrayIterative(c, ARRAY_SIZE);

    int count = countElementsIterative(c, ARRAY_SIZE);
    int sum = sumElementsIterative(c, ARRAY_SIZE);

    std::cout << "\nResults (Iterative):\n";
    std::cout << "Count of elements (positive or odd): " << count << "\n";
    std::cout << "Sum of elements (positive or odd):   " << sum << "\n\n";

    replaceElementsIterative(c, ARRAY_SIZE);

    std::cout << "Modified array:\n";
    printArrayIterative(c, ARRAY_SIZE);

    return 0;
}


bool checkCriterion(int element) {
    
    return (element > 0) || (element % 2 != 0);
}

void fillArrayIterative(int arr[], int size, int min, int max) {
    int range = max - min + 1;
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % range + min;
    }
}

void printArrayIterative(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(4) << arr[i] << " ";
    }
    std::cout << std::endl;
}

int countElementsIterative(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (checkCriterion(arr[i])) {
            count++;
        }
    }
    return count;
}

int sumElementsIterative(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (checkCriterion(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

void replaceElementsIterative(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (checkCriterion(arr[i])) {
            arr[i] = 0;
        }
    }
}