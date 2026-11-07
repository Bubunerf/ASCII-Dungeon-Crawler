#include <stdio.h>

void drawing_map(char current_map[5][7]) {
    int rows, collumns;

    for (rows = 0; rows < 5; rows++) {
        for (collumns = 0; collumns < 7 ; collumns++) {
            printf("%c" , current_map[rows][collumns]);
        }
        printf("\n");
    }
}

void player_movement(char direction, int *position_x, int *position_y) {
    switch (direction) {
        case 'w':
            printf("Moving Up\n");
            *position_y -= 1;
            break;

        case 's':
            printf("Moving Down\n");
            *position_y += 1;
            break;

        case 'a':
            printf("Moving to the left\n");
            *position_x -= 1;
            break;

        case 'd':
            printf("Moving to the left\n");
            *position_x += 1;
            break;

        default:
            printf("You have given invalid input\n");
            break;

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
    
    drawing_map(map);
   
    // printing the current map
    char direction;
    printf("Please enter a direction w/a/s/d\n");

    scanf("  %c", &direction);

    printf("You have choosen %c\n" , direction);

    int pos_x = 1;
    int pos_y = 3;

    player_movement(direction , &pos_x , &pos_y);

    printf("Pos X is: %d , Pos Y is: %d" , pos_x , pos_y);

    
    return 0;
}