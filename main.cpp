#include <iostream>
#include "problems.h"

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}


int main() {

    // TEST YOUR FUNCTIONS IN HERE

    // p1
    int result1;
    double result2;
    result1 = add(2, 3);   // calling with int parameters
    cout << result1 << endl;

    result2 = add(2.2, 3.3);// calling with double parameters
    cout << result2 << endl;

    // p2

    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Call the swap function template
    Myswap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    // Test the swap function template with double values
    double a = 3.14, b = 2.718;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Call the swap function template
    Myswap(a, b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    //p4

    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    double result=getAverage(arr, size);
    cout<<result<<endl;

    // p5

    int n;
    cin>>n;
    int arr5[n];
    for(int i=0;i<n;i++){
        cin>>arr5[i];
    }
    minimum(arr5, n);

    // p6

    const int arraySize = 15;
    double numbers[arraySize];

    cout << "Enter 15 numbers:" << endl;

    for (int i = 0; i < arraySize; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int largestIndex = indexOfLargestElement(numbers, arraySize);

    if (largestIndex != -1) {
        cout << "Index of the largest element: " << largestIndex << endl;
    }

    // p7

    const int maxSize = 100; // You can adjust this based on your requirements
    int list1[maxSize];
    int list2[maxSize];
    int size7;

    cout << "Enter the size of the lists: ";
    cin >> size7;

    if (size7 <= 0 || size7 > maxSize) {
        cerr << "Error: Invalid size." << endl;
        return 1;
    }

    cout << "Enter the elements of list1:" << endl;
    for (int i = 0; i < size7; ++i) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> list1[i];
    }

    cout << "Enter the elements of list2:" << endl;
    for (int i = 0; i < size7; ++i) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> list2[i];
    }

    bool areIdentical = strictlyEqual(list1, list2, size7);

    if (areIdentical) {
        cout << "The lists are strictly identical." << endl;
    } else {
        cout << "The lists are not strictly identical." << endl;
    }

    // p8
    // p9
    // p10
    // p11
    // p12
    // p13
    int num;
    cin>>num;
    cout<<sum(num)<<endl;
    // p14

    cin>>num;
    cout<<factorial(num)<<endl;

    // p15
    int pow;
    cin>>num>>pow;
    cout<<power(num,pow)<<endl;

    // p16

    int arr16[] = {1, 2, 3, 4, 5, 6};

    int n16 = sizeof(arr) / sizeof(arr[0]);

    // To print original array
    printArray(arr16, n16);

    // Function calling
    revereseArray(arr16, 0, n16-1);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr16, n16);

    // p17
    // To print original array
    printArray(arr, 6);

    // Function calling
    revereseArrayREC(arr, 0, 5);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, 6);

    // P18
    cout<<series(5)<<endl;

    // P19
    cout<<series2(5)<<endl;

    // P20
    std::cout << "Input a number: ";
    std::cin >> n;

    // Calculate the sum of digits using recursion
    int sum_digits = sumOfDigits(n);

    std::cout << "Sum of digits of " << n << " is: " << sum_digits << std::endl;


    return 0;
}
