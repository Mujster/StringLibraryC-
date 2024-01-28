### String Library Implementation C++

# `mystring` Class

The `mystring` class is a basic implementation of a string class in C++. It provides functionalities for creating, manipulating, and managing strings. Below is an overview of the class and its member functions.

## Class Members

### Private Members
- `char* str`: A pointer to a character array representing the string.
- `int length`: An integer representing the length of the string.

### Public Member Functions

#### Constructors
1. **`mystring()`**: Default constructor that initializes the string as `nullptr` with length 0.
2. **`mystring(char* s)`**: Parameterized constructor that takes a C-style string as input and creates a new string.

#### String Manipulation Functions
3. **`int str_len(char* s)`**: Helper function to calculate the length of a C-style string.
4. **`void strcopy(mystring& obj, mystring& obj2)`**: Copies the content of one `mystring` object to another.
5. **`void str_cat(mystring& obj, mystring& obj2)`**: Concatenates two `mystring` objects, adding a space between them.
6. **`int str_cmp(mystring& obj, mystring& obj2)`**: Compares the lengths of two `mystring` objects.

#### String Access Functions
7. **`char front()`**: Returns the first character of the string.
8. **`char back()`**: Returns the last character of the string.
9. **`int getlength()`**: Returns the length of the string.

#### String Modification Functions
10. **`void clear()`**: Clears the content of the string.
11. **`bool empty()`**: Checks if the string is empty.

#### Destructor
12. **`~mystring()`**: Destructor that frees the dynamically allocated memory for the string.

#### Display Function
13. **`void print()`**: Displays the content of the string.

## Usage Example
```cpp
#include<iostream>
using namespace std;

int main() {
    mystring str1("Hello");
    mystring str2("World");

    cout << "Initial strings:" << endl;
    str1.print();
    cout << endl;
    str2.print();
    cout << endl;

    str1.str_cat(str1, str2);

    cout << "Concatenated string:" << endl;
    str1.print();
    cout << endl;

    return 0;
}
