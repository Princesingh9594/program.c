#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // Check if lengths are equal
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int countS[26] = {0}; // frequency array for s
    int countT[26] = {0}; // frequency array for t

    // Count frequency of characters in s and t
    for (int i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
        countT[t[i] - 'a']++;
    }

    // Compare frequency arrays
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}

