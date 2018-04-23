#include <stdio.h>
#include <string.h>
#include <stdbool.h>

unsigned oneByte = 0b1;
unsigned twoBytes = 0b110;
unsigned threeBytes = 0b1110;
unsigned fourBytes = 0b11110;
unsigned nextByte = 0b10;

bool validation(int *data, int size) {
  int count = 0;
  for (int i=0; i < size; i++) {
    if (count == 0) {
        if ((data[i] >> 5) == twoBytes){
            printf("The first 2 bits are all one's and the 3th bit is 0 means it is a 2-bytes character. \n");
            count = 1;
        }
        else if ((data[i] >> 4) == threeBytes){
            printf("The first 3 bits are all one's and the 4th bit is 0 means it is a 3-bytes character. \n");
            count = 2;
        }
        else if ((data[i] >> 3) == fourBytes){
            printf("The first 4 bits are all one's and the 5th bit is 0 means it is a 4-bytes character. \n");
            count = 4;
        }
        else if ((data[i] >> 7) == oneByte){
            printf("The first bit is 1 means it is a 1-byte character but here the rule is: For 1-byte character, the first bit is a 0 \n");
            printf("False\n" );
            return false;

        }
    }
    else {
        if ((data[i] >> 6) != nextByte){
            printf("The next continuation byte does not start with 10, so it is invalid. \n");
            printf("False\n" );
            return false;
        }
        else{
          printf("The next byte is a continuation byte which starts with 10 and that's correct. \n" );
        }
        count--;
    }
  }
  printf("True\n" );
  return true;
}

int main(){
    int data1[] = {235, 140, 4};
    int data2[] = {197, 130, 1};
    int data3[] = {246, 197, 130, 1};

    int answer1 = validation(data1, 3);
    int answer2 = validation(data2, 3);
    int answer3 = validation(data3, 4);
}
