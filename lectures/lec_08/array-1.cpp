#include <iostream>

// int arr[3];

int main() {
    int arr[3];

    arr[0] = 13;
    arr[1] = 9;
    arr[2] = -19;

    // arr[3] = 90; // out of bounds

    std::cout << arr[0] << " " << arr[1] << " " << arr[2] 
                << " " << arr[3] << "\n";

    for (int i = 0; i < 3; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 3; i++) {
        std::cout << arr[i] << " ";
    }

}