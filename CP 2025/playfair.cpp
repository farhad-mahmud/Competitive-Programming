#include <iostream>
#include <string>

using namespace std;

char grid[5][5];

// 1. Building the secret grid
void buildSecretGrid(string key) {
string alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ"; // 'J' is left out to fit a 5x5 grid
string uniqueKeyText = "";

// Clean up the user's key
for (char c : key) {
c = toupper(c);
if (c == 'J') c = 'I'; // Swap J for I

// Only keep letters we hasn't seen yet
if (isalpha(c) && uniqueKeyText.find(c) == string::npos) {
uniqueKeyText += c;
}
}

// Fill in the rest of the alphabet into our temporary string
for (char c : alphabet) {
if (uniqueKeyText.find(c) == string::npos) {
uniqueKeyText += c;
}
}

// Map that text straight into our 5x5 visual grid
int letterIndex = 0;
for (int row = 0; row < 5; row++) {
for (int col = 0; col < 5; col++) {
grid[row][col] = uniqueKeyText[letterIndex++];
}
}
}

// 2. Finding where a letter lives in the grid
void locateLetter(char c, int &row, int &col) {
if (c == 'J') c = 'I';
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
if (grid[i][j] == toupper(c)) {
row = i;
col = j;
return;
}
}
}
}

// 3. The actual encryption magic
string encryptMessage(string text) {
// Strip out spaces and force uppercase
string cleanText = "";
for (char c : text) {
if (isalpha(c)) cleanText += toupper(c);
}

// Split text into pairs of two.
// If a pair has matching letters (like 'LL' in HELLO), separate them with an 'X'.
string pairs = "";
for (size_t i = 0; i < cleanText.length(); i += 2) {
pairs += cleanText[i];
if (i + 1 < cleanText.length()) {
if (cleanText[i] == cleanText[i + 1]) {
pairs += 'X';
i--; // Back up a step to pair the second letter with something else
} else {
pairs += cleanText[i + 1];
}
} else {
pairs += 'X'; // Odd number of letters? Slap an X on the end.
}
}

// Time to swap letters based on the Playfair rules
string secretResult = "";
for (size_t i = 0; i < pairs.length(); i += 2) {
int r1, c1, r2, c2;
locateLetter(pairs[i], r1, c1);
locateLetter(pairs[i + 1], r2, c2);

if (r1 == r2) {
// Rule 1: Same row? Just slide both letters one space to the right
secretResult += grid[r1][(c1 + 1) % 5];
secretResult += grid[r2][(c2 + 1) % 5];
} else if (c1 == c2) {
// Rule 2: Same column? Slide both letters one space down
secretResult += grid[(r1 + 1) % 5][c1];
secretResult += grid[(r2 + 1) % 5][c2];
} else {
// Rule 3: Form a rectangle? Swap the columns of the two letters
secretResult += grid[r1][c2];
secretResult += grid[r2][c1];
}
}
return secretResult;
}

int main() {
string userKey, userMessage;



cout << "Step 1: Enter a secret key word (e.g., SECRET): ";
cin >> userKey;
cin.ignore(); // Clean up the input buffer

buildSecretGrid(userKey);

// Show the user what their grid looks like!
cout << "\nHere is your generated 5x5 Secret Grid:\n";
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
cout << grid[i][j] << " ";
}
cout << "\n";
}
cout << "--------------------------------------\n";

cout << "Step 2: Enter the secret message you want to encrypt: ";
getline(cin, userMessage);

string encrypted = encryptMessage(userMessage);

cout << "\n=== RESULTS ===\n";
cout << "Your original message: " << userMessage << "\n";
cout << "Your encrypted cipher: " << encrypted << "\n";
cout << "============================\n";

return 0;
}