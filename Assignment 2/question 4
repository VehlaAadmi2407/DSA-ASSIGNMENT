(A)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    string result = str1 + str2;
    cout << "Concatenated string: " << result << endl;
    return 0;
}


(B)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    cout << "Reversed string: " << reversed << endl;
    return 0;
}


C)
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string str = "Beautiful Day";
    string result = "";
    for (char ch : str) {
        if (!isVowel(ch)) {
            result += ch;
        }
    }
    cout << "String without vowels: " << result << endl;
    return 0;
}

D)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<string> arr = {"banana", "apple", "cherry", "date"};
    sort(arr.begin(), arr.end());
    cout << "Sorted strings: ";
    for (string s : arr)
        cout << s << " ";
    cout << endl;
    return 0;
}



E)

#include <iostream>
using namespace std;

int main() {
    char uppercaseChar = 'G';
    char lowercaseChar = tolower(uppercaseChar);
    cout << "Lowercase of " << uppercaseChar << " is " << lowercaseChar << endl;
    return 0;
}
