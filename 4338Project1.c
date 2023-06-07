#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

void reverse_odd_length_strings(char words[][MAX_WORD_LENGTH], int num_words) {
    for (int i = 0; i < num_words; i++) {
        if (strlen(words[i]) % 2 == 1) {
            int len = strlen(words[i]);
            for (int j = 0; j < len / 2; j++) {
                char temp = words[i][j];
                words[i][j] = words[i][len - 1 - j];
                words[i][len - 1 - j] = temp;
            }
        }
    }
}

int main() {
    char words[20][MAX_WORD_LENGTH];

    // Read 20 words from the user
    printf("Enter 20 words:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%s", words[i]);
    }

    // Clear the input buffer
    while (getchar() != '\n');

    // Reverse odd-length strings
    reverse_odd_length_strings(words, 20);

    // Print the output
    printf("Output:\n");
    for (int i = 0; i < 20; i++) {
        printf("%s ", words[i]);
    }

    return 0;
}
