#include <stdio.h>

void drawint_map(char current_map[5][7]) {
    int rows, collumns;

    for (rows = 0; rows < 5; rows++) {
        for (collumns = 0; collumns < 7 ; collumns++) {
            printf("%c" , current_map[rows][collumns]);
        }
        printf("\n");
    }
}


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
    
    drawint_map(map);
   
    // printing the current map


    int pos_x = 1;
    int pos_y = 3;

    char direction;
    printf("Please enter a direction w/a/s/d\n\n");
    scanf("%c", &direction);

    printf("You have choosen %c" , direction);

    switch (direction) {
        case 'w':
            printf("Moving Up");
            pos_y -= 1;

        case 's':
            printf("Moving Down");
            pos_y += 1;
        
        case 'a':
            printf("Moving to the left");
            pos_x -= 1;
        
        case 'd':
            printf("Moving to the left");
            pos_x += 1;
    }






    return 0;
}