#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[1000], str2[1000];
    int count1[26] = {0}, count2[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of lowercase letters in first string
    while (str1[i] != '\0') {
        char ch = str1[i];
        if (ch >= 'a' && ch <= 'z') {
            count1[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {  // consider uppercase
            count1[ch - 'A']++;
        }
        i++;
    }

    // Reset index and do the same for second string
    i = 0;
    while (str2[i] != '\0') {
        char ch = str2[i];
        if (ch >= 'a' && ch <= 'z') {
            count2[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            count2[ch - 'A']++;
        }
        i++;
    }

    // Compare frequency arrays
    int isAnagram = 1;
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}

