#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Assign first line into the amount of times it will read and reverse
  Then assign to the strInput every line and put the last item to the first strOutput
  With strncpy
  innerbuffer works for that saves the first word
  With strcpy
  After that strOutput gets the innerbuffer what it save
  I couldn't find why it deletes the last word of the last line
  I tried to put the space but it deletes part of the word
*/

int main(){
    FILE *fi;
    fi = fopen("sample-Reverse.1.in","r");
    size_t bufsize = 2048;

    char* strInput = malloc(bufsize *sizeof(char));
    char* buffer;
    buffer = (char *)malloc(bufsize * sizeof(char));
    getline(&buffer, &bufsize, fi);
    char* temp;
    int num = strtol(buffer, &temp, 10);

    for(int i = 1;i <= num; i++){
        getline(&strInput, &bufsize, fi);
        char* strOutput = calloc(bufsize, bufsize *sizeof(char));
        //printf("%s", strInput);
        char* word = malloc(12 *sizeof(char));
        int count = 0;
        for(int j = 0; j < strlen(strInput); j++){
            char thisChar = strInput[j];

            if (thisChar == ' ' || thisChar ==  '\0' || thisChar == '\n'){
              count = 0;
              char* innerbuffer;
              innerbuffer = (char *)malloc(bufsize * sizeof(char));
              strncpy(innerbuffer, word, strlen(word));
              strncpy(innerbuffer + strlen(word), strOutput, strlen(strOutput));
              strcpy(strOutput, innerbuffer);
            }
            else if (thisChar != ' '){
              word[count] = thisChar;
              count++;

            }

        }
        printf("%s\n", strOutput);
        free(strOutput);
        //printf("%s\n", strOutput[0]);
    }
    return 0;
}
