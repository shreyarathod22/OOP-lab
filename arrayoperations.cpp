#include <iostream> 
using namespace std; 
 
template <typename T> 
void genericSort(T arr[], int n) { 
    // Simple selection sort 
    for (int i = 0; i < n - 1; i++) { 
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[minIndex]) { 
                minIndex = j; 
            } 
        } 
        if (minIndex != i) { 
            T tmp = arr[i]; 
            arr[i] = arr[minIndex]; 
            arr[minIndex] = tmp; 
        } 
    } 
} 
 
template <typename T> 
void printArray( T arr[], int n) { 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 
 
int main() { 
    int choice; 
    while (true) { 
        cout << "\n========== MENU ==========\n"; 
        cout << "1. Sort integer array\n"; 
        cout << "2. Sort float array\n"; 
        cout << "3. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        if (choice == 3) { 
            cout << "Exiting.\n"; 
            break; 
        } 
 
        switch (choice) { 
        case 1: { 
            int n; 
            cout << "How many integers? "; 
            cin >> n; 
            int* arr = new int[n]; 
            cout << "Enter " << n << " integer values:\n"; 
            for (int i = 0; i < n; i++) { 
                cin >> arr[i]; 
            } 
            genericSort(arr, n); 
            cout << "Sorted integer array: "; 
            printArray(arr, n); 
            delete[] arr; 
            break; 
        } 
        case 2: { 
            int n; 
            cout << "How many floats? "; 
            cin >> n; 
            float* arr = new float[n]; 
            cout << "Enter " << n << " float values:\n"; 
            for (int i = 0; i < n; i++) { 
                cin >> arr[i]; 
            } 
            genericSort(arr, n); 
            cout << "Sorted float array: "; 
           printArray(arr, n); 
            delete[] arr; 
            break; 
        } 
        default: 
            cout << "Invalid choice. Try again.\n"; 
        } 
    } 
 
    return 0; 
}
