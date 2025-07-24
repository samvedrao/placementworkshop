// A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

// A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

// For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
// Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

 

// Example 1:

// Input: s = "is2 sentence4 This1 a3"
// Output: "This is a sentence"
// Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
// Example 2:

// Input: s = "Myself2 Me1 I4 and3"
// Output: "Me Myself and I"
// Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
 

// Constraints:

// 2 <= s.length <= 200
// s consists of lowercase and uppercase English letters, spaces, and digits from 1 to 9.
// The number of words in s is between 1 and 9.
// The words in s are separated by a single space.
// // s contains no leading or trailing spaces.


#include <iostream>          // For input/output operations
#include <map>               // For using ordered map
#include <string>            // For using string class

using namespace std;

int main() {
    string s = "is2 sentence4 This1 a3"; // Input shuffled sentence
    map<int, string> m;                  // Ordered map to store word position and word

    string temp;                         // Temporary string to build each word
    for (int i = 0; i < s.size(); i++) { // Loop through each character in the sentence
        if (s[i] == ' ') {               // If current character is a space
            continue;                    // Skip spaces
        } else if (s[i] >= '0' && s[i] <= '9') { // If current character is a digit (word position)
            m[s[i] - '0'] = temp;        // Store the word in map with its position as key
            temp = "";                   // Reset temp for next word
        } else {
            temp += s[i];                // Add character to current word
        }
    }

    // Build the answer from the ordered map
    string ans;                          // String to store the reconstructed sentence
    for (auto i : m) {                   // Iterate through the map in order of positions
        ans += i.second + ' ';           // Add each word and a space
    }
    if (!ans.empty()) ans.pop_back();    // Remove trailing space if answer is not empty

    cout << ans << endl;                 // Output the reconstructed sentence
    return 0;                            // End
}