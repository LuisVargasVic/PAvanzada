#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5

struct DataItem {
   int hour;
   int key;
   char* name;
};

struct DataItem* hashArray[SIZE];
struct DataItem* item;

int hashCode(int key) {
   return key % SIZE;
}

void insert(int key,int hour, char* name) {
   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->hour = hour;
   item->key = key;
   item->name = name;
   //get the hash
   int hashIndex = hashCode(key);
   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;
      //wrap around the table
      hashIndex %= SIZE;
   }
   hashArray[hashIndex] = item;
}
int getHour(int key) {
   //get the hash
   int hashIndex = hashCode(key);
   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex]->hour;
      //go to next cell
      ++hashIndex;
      //wrap around the table
      hashIndex %= SIZE;
   }
   return 0;
}

char* getName(int key) {
   //get the hash
   int hashIndex = hashCode(key);
   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex]->name;
      //go to next cell
      ++hashIndex;
      //wrap around the table
      hashIndex %= SIZE;
   }

   return "";
}

void display() {
   int i = 0;
   for(i = 0; i<SIZE; i++) {
      if(hashArray[i] != NULL)
         printf("(%d,%s)",hashArray[i]->hour,hashArray[i]->name);
      else
         printf(" ~~ ");
   }
   printf("\n");
}

int main() {
   item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->hour = -1;
   item->key = -1;

   insert(0, 175, "The Godfather");
   insert(1, 195, "Schindler's List");
   insert(2, 147, "Dark Knight");
   insert(3, 140, "Forrest Gump");
   insert(4, 168, "Untochable");

   display();
   int flight = 315;
   for(int i = 0; i < SIZE - 1; i++){
       for(int j = i + 1; j < SIZE; j++){
         int movie1 = getHour(i);
         int movie2 = getHour(j);
           if(movie1 + movie2 == flight){
               char* moviename1 = getName(i);
               char* moviename2 = getName(j);
               printf("The flight's length is %d There are two movies you can watch %s and %s \n", flight, moviename1, moviename2);
           }
           else{
               printf("Keep looking for two movies you could watch\n");
           }
       }
   }
   printf("There are no more movie options\n");
   return 0;
}
