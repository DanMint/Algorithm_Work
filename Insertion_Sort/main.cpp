#include <iostream>
#include <vector>

void InsertionSort (std::vector<int> &arr) {
    int i = 1;
    while (i < arr.size()) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j -= 1;
        }
        i += 1;
    }
}

int main() {

    std::vector<int> arr = {3, 2, 1, 6, 7, 10, 4};
    InsertionSort(arr);
    for (const auto &el : arr)
        std::cout << el << " ";

    return 0;
}
