#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100
#define DICTIONARY_SIZE 500000

// Function to remove trailing newline character
void removeNewline(char *str) {
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
}

// Function to convert a word to lowercase
void toLowercase(char *word) {
    int i;
    for (i = 0; word[i]; i++)
        word[i] = tolower(word[i]);
}

// Function to check if a word is spelled correctly
int isSpelledCorrectly(char *word, char **dictionary, int dictSize) {
    int i;
    for (i = 0; i < dictSize; i++) {
        if (strcmp(word, dictionary[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char inputWord[MAX_WORD_LENGTH];
    char *dictionary[DICTIONARY_SIZE];
    int dictSize = 0;

    // Open the dictionary file
    FILE *dictFile = fopen("dictionary.txt", "r");
    if (dictFile == NULL) {
        printf("Error opening dictionary file.\n");
        return 1;
    }

    // Read the dictionary words into memory
    char line[MAX_WORD_LENGTH];
    while (fgets(line, MAX_WORD_LENGTH, dictFile) != NULL) {
        removeNewline(line);
        dictionary[dictSize] = strdup(line);
        dictSize++;
    }

    // Close the dictionary file
    fclose(dictFile);

    // Get input word from the user
    printf("Enter a word: ");
    fgets(inputWord, MAX_WORD_LENGTH, stdin);
    removeNewline(inputWord);
    toLowercase(inputWord);

    // Check if the word is spelled correctly
    if (isSpelledCorrectly(inputWord, dictionary, dictSize)) {
        printf("The word is spelled correctly.\n");
    } else {
        printf("The word is misspelled.\n");
    }

    // Free allocated memory
    int i;
    for (i = 0; i < dictSize; i++)
        free(dictionary[i]);

    return 0;
}
