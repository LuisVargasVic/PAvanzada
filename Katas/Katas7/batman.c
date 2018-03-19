#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);

    int R = 0; // Right in 0 because is the beggining of the building
    int L = W; // Left the maximum width size of the building
    int D = 0; // Down in 0 because is the beggining of the building
    int U = H; // Up the maximum height size of the building

    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        
        if(strcmp(bombDir, "U") == 0) { //Moves all up and find the bomb or the next jump
            U = Y0;
            Y0 = (U + D)/2;
            printf("%i %i\n", X0, Y0);
        }
        else if(strcmp(bombDir, "R") == 0) { //Moves all right and find the bomb or the next jump
            R = X0;
            X0 = (L + R)/2;
            printf("%i %i\n", X0, Y0);
        }
        else if(strcmp(bombDir, "L") == 0) { //Moves all left and find the bomb or the next jump
            L = X0;
            X0 = (L + R)/2;
            printf("%i %i\n", X0, Y0);
        }
        else if(strcmp(bombDir, "D") == 0) { //Moves all down and find the bomb or the next jump
            D = Y0;
            Y0 = (D + U)/2;
            printf("%i %i\n", X0, Y0);
        }
        else if(strcmp(bombDir, "UR") == 0) { //Moves all right-up and find the bomb or the next jump
            U = Y0;
            R = X0;
            Y0 = (D + U)/2;
            X0 = (L + R)/2;
            printf("%i %i\n", X0, Y0);
        }
        else if(strcmp(bombDir, "UL") == 0) { //Moves all left-up and find the bomb or the next jump
            U = Y0;
            L = X0;
            Y0 = (D + U)/2;
            X0 = (L + R)/2;
            printf("%i %i\n", X0, Y0);
        }
        else if(strcmp(bombDir, "DR") == 0) { //Moves all right-down and find the bomb or the next jump
            D = Y0;
            R = X0;
            Y0 = (D + U)/2;
            X0 = (L + R)/2;
            printf("%i %i\n", X0, Y0);
        }
        else if(strcmp(bombDir, "DL") == 0) { //Moves all left-down and find the bomb or the next jump
            D = Y0;
            L = X0;
            Y0 = (D + U)/2;
            X0 = (L + R)/2;
            printf("%i %i\n", X0, Y0);
        }
    }

    return 0;
}
