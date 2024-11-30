#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        if (abs(evenCount - oddCount) > n % 2) {
            cout << -1 << endl;
        } else {
            cout << abs(evenCount - oddCount) / 2 << endl;
        }
    }
    return 0;
}

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         int evenCount = 0, oddCount = 0;
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             if (a[i] % 2 == 0) {
//                 evenCount++;
//             } else {
//                 oddCount++;
//             }
//         }

//         if (abs(evenCount - oddCount) > n % 2) {
//             cout << -1 << endl;
//         } else {
//             cout << abs(evenCount - oddCount) / 2 << endl;
//         }
//     }
//     return 0;
// }

// // Function to calculate the minimum number of operations
// int minOperations(int n, int* arr) {
//     int evenCount = 0, oddCount = 0;

//     // Count even and odd numbers
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }

//     // If the difference between even and odd counts is more than 1, it's impossible
//     if (abs(evenCount - oddCount) > 1)
//         return -1;

//     // The minimum number of operations is half the difference between even and odd counts
//     return abs(evenCount - oddCount) / 2;
// }

// int main() {
//     int t; // Number of test cases
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         int arr[n]; // Array to store the elements

//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         // Output the minimum number of operations for the current test case
//         cout << minOperations(n, arr) << endl;
//     }

//     return 0;
// }

// // Custom comparator function
// bool compare(const int* a, const int* b) {
//     return *a < *b; // Compare the values pointed to by the pointers
// }

// // Function to calculate the minimum number of operations
// int minOperations(int n, int* arr) {
//     int evenCount = 0, oddCount = 0;

//     // Count even and odd numbers
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }

//     // If it's impossible to balance even and odd counts
//     if (abs(evenCount - oddCount) > 1)
//         return -1;

//     // Minimum number of operations to balance
//     return abs(evenCount - oddCount) / 2;
// }

// int main() {
//     int t; // Number of test cases
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         int arr[n];       // Array to store the elements
//         int* pointers[n]; // Array of pointers to the elements

//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             pointers[i] = &arr[i]; // Assign pointers
//         }

//         // Sort the pointers using the custom comparator
//         sort(pointers, pointers + n, compare);

//         // Calculate the minimum operations
//         cout << minOperations(n, arr) << endl;
//     }

//     return 0;
// }

// // Custom comparator function
// bool compare(const int* a, const int* b) {
//     return *a < *b; // Compare the values pointed to by the pointers
// }

// // Function to calculate the minimum number of operations
// int minOperations(int n, vector<int*>& a) {
//     int evenCount = 0, oddCount = 0;

//     // Count even and odd numbers
//     for (int* x : a) {
//         if (*x % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }

//     // If it's impossible to balance even and odd counts
//     if (abs(evenCount - oddCount) > 1)
//         return -1;

//     // Minimum number of operations to balance
//     return abs(evenCount - oddCount) / 2;
// }

// int main() {
//     int t; // Number of test cases
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         vector<int*> pointers(n); // Store pointers to the array elements

//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             pointers[i] = &arr[i]; // Assign pointers
//         }

//         // Sort the pointers using the custom comparator
//         sort(pointers.begin(), pointers.end(), compare);

//         // Calculate the minimum operations using the sorted pointers
//         cout << minOperations(n, pointers) << endl;
//     }

//     return 0;
// }

// int minOperations(int n, vector<int>& a) {
//     int evenCount = 0, oddCount = 0;
//     for (int x : a) {
//         if (x % 2 == 0) 
//             evenCount++;
//         else 
//             oddCount++;
//     }
//     if (abs(evenCount - oddCount) > 1) 
//         return -1;
//     return abs(evenCount - oddCount) / 2;
// }

// int main() {
//     int t; 
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
        
//         for (int i = 0; i < n; i++) 
//             cin >> a[i];

//         cout << minOperations(n, a) << endl;
//     }

//     return 0;
// }

// void printCharacter(int n, char c) {
//     for (int i = 0; i < n; i++) {
//         cout << c << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         char C;
//         cin >> N >> C;
//         printCharacter(N, C);
//     }

//     return 0;
// }

// int main() {
//     int t; 
//     cin >> t;

//     while (t--) {
//         int n; 
//         cin >> n;

//         vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }

//         int oddAtEvenPos = 0, evenAtOddPos = 0;
//         for (int i = 0; i < n; ++i) {
//             if (i % 2 == 0 && a[i] % 2 != 0) {
//                 oddAtEvenPos++;
//             } else if (i % 2 != 0 && a[i] % 2 == 0) {
//                 evenAtOddPos++;
//             }
//         }

//         if (oddAtEvenPos == evenAtOddPos) {
//             cout << oddAtEvenPos << endl;
//         } else {
//             cout << -1 << endl;
//         }
//     }

//     return 0;
// }

// int main() {
//     int t; 
//     cin >> t;

//     while (t--) {
//         int n; 
//         cin >> n;

//         int* a = new int[n];
//         int evenCount = 0, oddCount = 0;

//         for (int i = 0; i < n; i++) {
//             cin >> *(a + i);
//             if (*(a + i) % 2 == 0)
//                 evenCount++;
//             else
//                 oddCount++;
//         }

//         if (abs(evenCount - oddCount) > n % 2) {
//             cout << -1 << endl;
//         } else {
//             int misplacedEven = 0, misplacedOdd = 0;
//             for (int i = 0; i < n; i++) {
//                 if (i % 2 == 0 && *(a + i) % 2 != 0) {
//                     misplacedOdd++;
//                 } else if (i % 2 == 1 && *(a + i) % 2 == 0) {
//                     misplacedEven++;
//                 }
//             }

//             if (misplacedEven == misplacedOdd) {
//                 cout << misplacedEven << endl;
//             } else {
//                 cout << -1 << endl;
//             }
//         }

//         delete[] a;
//     }

//     return 0;
// }

// int main() {
//     int t; 
//     cin >> t;

//     while (t--) {
//         int n; 
//         cin >> n;

//         int* a = new int[n];
//         int evenCount = 0, oddCount = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> *(a + i);
//             if (*(a + i) % 2 == 0)
//                 evenCount++;
//             else
//                 oddCount++;
//         }
//         if (abs(evenCount - oddCount) > 1) {
//             cout << -1 << endl;
//         } else {
//             int minOperations = abs(evenCount - oddCount) / 2;
//             cout << minOperations << endl;
//         }

//         delete[] a;
//     }

//     return 0;
// }


// int main() {
//     int t; // number of test cases
//     cin >> t;

//     while (t--) {
//         int n; // size of the array
//         cin >> n;

//         vector<int> a(n); // array to hold the elements
//         int evenCount = 0, oddCount = 0;

//         // Input the array and count even and odd elements
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] % 2 == 0)
//                 evenCount++;
//             else
//                 oddCount++;
//         }

//         // Check if balancing is possible
//         if (abs(evenCount - oddCount) > 1) {
//             cout << -1 << endl; // Impossible to balance
//         } else {
//             // Calculate the minimum number of operations
//             int minOperations = abs(evenCount - oddCount) / 2;
//             cout << minOperations << endl;
//         }
//     }

//     return 0;
// }

// int main() {
//     int t; // number of test cases
//     cin >> t;

//     while (t--) {
//         int n; // size of the array
//         cin >> n;

//         int* a = new int[n]; // dynamically allocate array
//         int evenCount = 0, oddCount = 0;

//         // Input the array and count even and odd elements
//         for (int i = 0; i < n; i++) {
//             cin >> *(a + i);
//             if (*(a + i) % 2 == 0)
//                 evenCount++;
//             else
//                 oddCount++;
//         }

//         // Check if balancing is possible
//         if (abs(evenCount - oddCount) > 1) {
//             cout << -1 << endl; // Impossible to balance
//         } else {
//             // If the counts are already balanced, no operation is needed
//             if (evenCount == oddCount) {
//                 cout << 0 << endl;
//             } else {
//                 // Determine the minimum number of operations
//                 int operations = abs(evenCount - oddCount) / 2;
//                 cout << operations << endl;
//             }
//         }

//         delete[] a; // free the dynamically allocated memory
//     }

//     return 0;
// }

// int main() {
//     int t; 
//     cin >> t;

//     while (t--) {
//         int n; 
//         cin >> n;
//         vector<int> a(n);

//         int evenCount = 0, oddCount = 0;

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] % 2 == 0)
//                 evenCount++;
//             else
//                 oddCount++;
//         }

//         if (abs(evenCount - oddCount) > 1) {
//             cout << -1 << endl;
//         } else {
//             if (evenCount == oddCount) {
//                 cout << 0 << endl;
//             } else {
//                 int operations = abs(evenCount - oddCount) / 2;
//                 cout << operations << endl;
//             }
//         }
//     }
//     return 0;
// }

// struct Student {
//     int id;
//     string name;
//     char section;
//     int marks;
// };

// int main() {
//     int T; 
//     cin >> T;

//     while (T--) {
//         Student students[3];

//         for (int i = 0; i < 3; i++) {
//             cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
//         }

//         Student* best = &students[0];
//         for (int i = 1; i < 3; i++) {
//             if (students[i].marks > best->marks || 
//                (students[i].marks == best->marks && students[i].id < best->id)) {
//                 best = &students[i]; 
//             }
//         }
//         cout << best->id << " " << best->name << " " << best->section << " " << best->marks << endl;
//     }

//     return 0;
// }
