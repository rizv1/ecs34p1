Used these websites for:

Learning the isspace function syntax for my strip functions
https://cplusplus.com/reference/cctype/isspace/

learn erase function's syntax for my strip functions
https://www.geeksforgeeks.org/stdstringerase-in-cpp/

Learn the syntax for the insert command for the center functions
https://cplusplus.com/reference/string/string/insert/



Generative AI:

prompt: syntax for replace function in c++



ChatGPT
In C++, the replace() function is a member function of the std::string class. It is used to replace a specified portion 
of the string with another string. The basic syntax is as follows:


string& replace (size_t pos, size_t len, const string& str);
pos: The position in the string where the replacement begins.
len: The number of characters to replace.
str: The string that will replace the specified portion.
Here's a simple example:

cpp
Copy code
#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, World!";
    std::string newSubstring = "Universe";

    // Replace starting from position 7, replace 5 characters with "Universe"
    myString.replace(7, 5, newSubstring);

    std::cout << "Modified String: " << myString << std::endl;

    return 0;
}
Output:


Modified String: Hello, Universe!
In this example, the replace() function is used to replace 5 characters starting from position 7 with the string "Universe". 
Note that positions are zero-indexed in C++, so position 7 corresponds to the eighth character in the string.
