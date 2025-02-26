#include <iostream>
#include <math.h>
#include <unistd.h>
#include <ctime>
using namespace std;

// Problem 1:

// Write C++ function that can perform the following task:

// Design a function that can read an array from the user
// Design a function that can print the entered array
// Design a function that can print the array in reverse order
// Design a function that can print only the odd elements of the user array

// Problem 2:
// Write C++ function that can perform the following task:

// Create an array of integers and initialize it with random values.
// Ask the user to input a value to search for in the array.
// Implement a linear search algorithm to find and display the index of the first occurrence of the input value. If the value is not found, display a message indicating so.

// Problem 3:

// Create a program that:

// Defines a function that takes two integer pointers as arguments.
// Inside the function, swap the values pointed to by the two pointers.
// In the main program, declare two integers and initialize them with values.
// Call the function to swap the values.
// Display the values before and after the swap.
// Edit the attached main C++  file to resolve the two problems functions :

// After completion of the assignment, upload the main.cpp file at Canvas.

// Function Declaration
// Function to read elements into the array
void ReadElements(int* , int);
void PrintElements(int*, int);  
void PrintElementsRev(int*,int);
void OddsOnly(int*, int , int* &, int &);

//Function that takes two integer pointers as arguments.
void swapValues(int* , int* );

int main() {
	cout << "########" << endl;
    cout << "Problem One" << endl;
    cout << "########" << endl;
  // read how many number of elements you want to create
    int n;
    cout << "Please enter number of elements:";
    cin >> n;
    
    cout << "               " << endl;
    // Use function ReadElements() to read array (A) from the user with given number of elements
    // define new empty array dynamically with n number as int *A = new int[n];
    // write your code here
    int* A = new int[n];
    
    
    ReadElements(A, n);
    
    usleep(2000000);

    // Use function PrintElements() that can print the entered array
    // write your code here
    //cout << "Print Array" << endl;
    
    PrintElements(A, n);


    // Use function PrintElementsRev() that can print the array in reverse order
    // write your code here
    //cout << "Print Reverse Array \n";
    
    PrintElementsRev(A, n);
    


    // Use function OddsOnly that can print only the odd elements of the user array
    // define a null pointer *e to use it with OddsOnly function
    // and int m equal zero
    // write your code here
    // you can use NULL here or nullptr for *e


    int* e = nullptr; // null pointer
    int m = 0; // number of odd elements

    // print odds array
    // cout << "Print Odds Only Array";
    // Use function to print and store odd alements
    OddsOnly(A, n, e, m);

    // Deallocate the memory
    delete [] A; 
    delete [] e; 
    
    
    cout << "               " << endl;

    cout << "====[ end ]====" << endl;
    cout << "               " << endl;

    cout << "########" << endl;
    cout << "Problem Two" << endl;
    cout << "########" << endl;
    // Read only this part of the problem

    //define the size of the array and the array
	const int N = 10; // Size of the array
    int arr[N];

    // Get a different random number each time the program runs
    srand(time(0));

    // Initialize the array with random values (for demonstration)
    for (int i = 0; i < N; i++) {
        //write code to generate random number between 0-99 and fill in the array
        arr[i] = rand()%101;

    }

    // Display the original array
    std::cout << "Original Array: " << endl;

    for (int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    std::cout << std::endl;

    int searchValue;
    std::cout << "Enter a value to search for: ";
    std::cin >> searchValue;

    bool found = false;
    int index = -1; // To store the index of the found value

    // Linear search algorithm
   //implement linear search algorithms
    for (int i = 0; i < N; ++i) {
        if(arr[i] == searchValue){
            found = true;
            index = i;
            break;    
        }
        else{
        found = false;
        }
    }
      


    //Condition
    if (found) {
        std::cout << "The value " << searchValue << " is found at index " << index << std::endl;
    } else {
        std::cout << "The value " << searchValue << " is not found in the array." << std::endl;
    }


    cout << "               " << endl;

    cout << "====[ end ]====" << endl;
    cout << "               " << endl;
    
    
    cout << "########" << endl;
    cout << "Problem Three" << endl;
    cout << "########" << endl;

    //Declare two intergers and initialize them with values

    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Call the swapValues function to swap the values of num1 and num2 using pointers
    //define swap value function before main function
    swapValues(&num1, &num2);

    // Display the values after swapping
    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    
    
    
    
    
    
    cout << "               " << endl;

    cout << "====[ end ]====" << endl;
    cout << "               " << endl;
    
    return 0;
}


//Function definition

void ReadElements( int* As, int ns){
    cout << "Reading elements..." << endl;
    
    for (int i =0; i<ns; ++i){
        As[i]= i + 1;
    }
    cout <<endl;

}

void PrintElements(int* As ,int ns){
    cout << "Print elements" << endl;
    for (int i = 0; i < ns; ++i) {
        cout << As[i] << " ";
    }
    cout <<endl;
}

// Print elements in reverse order
void PrintElementsRev(int* As, int ns) {
    cout << "Print reverse Array" << endl;
    for (int i = ns - 1; i >= 0; --i) {
        cout << As[i] << " ";
    }
    cout <<endl;
}

// Only the odd elements of the array
void OddsOnly(int* As, int ns, int* &es, int &ms) {
    cout << "Print Odd Only Array" << endl;
    es = new int[ms];
    int index = 0;

    // Calculate the number of odd elements
    for (int i = 0; i < ns; ++i) {
        if (As[i] % 2 != 0) {
            es[index] = As[i];
            cout << es[index] << " ";
            index++;
            ms++;
        }
    }
    cout <<endl;
}

// Function that takes two integer pointers as arguments
void swapValues(int* x , int* y){
    int z = *x;
    *x = *y;
    *y = z;
}
