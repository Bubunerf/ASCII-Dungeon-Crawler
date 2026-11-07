#include <stdio.h>

int main(void) 
{

    char map[5][7] = {
        {'#','#','#','#','#','#','#'},
        {'#','.','.','.','.','E','#'},
        {'#','.','#','.','#','.','#'},
        {'#','P','.','.','.','.','#'},
        {'#','#','#','#','#','#','#'}
    };
    // Defining the map
    
    int rows, collumns;

    for (rows = 0; rows < 5; rows++) {
        for (collumns = 0; collumns < 7 ; collumns++) {
            printf("%c" , map[rows][collumns]);
        }
        printf("\n");
    }
    // printing the current map


    int initial_x = 1;
    int initial_y = 3;

    char direction;
    printf("Please enter a direction w/a/s/d\n");
    scanf("%c", &direction);

    printf("You have choosen %c" , direction);

    switch (direction) {
        case 'w':
            printf("Moving Up");

        case 's':
            printf("Moving Down");
        
        case 'a':
            printf("Moving to the left");
        
        case 'd':
            printf("Moving to the left");
    }






    return 0;
}