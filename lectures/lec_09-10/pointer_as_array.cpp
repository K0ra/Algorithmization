#include <iostream>

const int max_n = 100005;

int main() {
    /*** Example with char array or string ***/

    // You may use pointer to work with arrays
    // (for now it's better to use typical arrays - look at line 11)
    char *s1 = "Hi!"; // array of chars

    // Other ways to create char array or string
    char s2[3] = {'H', 'i', '!'};
    std::string s3 = "Hi!";

    // Output the values of s1
    std::cout << s1[0] << " " << s1[1] << " " << s1[2] << "\n";
    // Has the same meaning as the previous line
    std::cout << *s1 << " " << *(s1 + 1) << " " << *(s1 + 2) << "\n";


    /*** Example with float array ***/

    int n;
    std::cin >> n;
    // float arr[n] - THIS MAY GIVE an ERROR in Visual Studio, because
    //                "n" is not identified during the compilation time

    // float* arr = new float[n]; - YOU MAY ALSO CREATE ARRAY allocating the space in HEAP

    float arr[max_n];   // It's the usual practice in Contests to initialize
                        // array with Max value of "n"
    
    // Insert data using pointer notation
    std::cout << "Enter n numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> *(arr + i); // the same as std::cin >> arr[i];
    }

 
    return 0;
}