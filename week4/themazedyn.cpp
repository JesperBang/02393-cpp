#include <iostream>
#include <string>

using namespace std;

typedef enum { wood, stone, player } material;
int ppx, ppy, nrows, ncols;

struct tile {
    int x, y;
    bool isWall;
    material type;
};

void printmap(tile **playground){
    for (int i = 0; i < nrows; i++) {
        string row;
        for (int j = 0; j < ncols; j++) {
            if (playground[i][j].isWall) {
                row += "*";
            } 
            if (playground[i][j].type == wood) {
                row += " ";
            }
            if (playground[i][j].type == player){
                row += "O";
            }
        }
        cout << row << endl;
    }
}

void playpos(int y, int x, tile **playground){
    // Remove player from old possition and set player at new possition 
    playground[ppy][ppx].type = wood;
    playground[y][x].type = player;

    // Update global player position knowledge
    ppx = x;
    ppy = y;

    // Print game stage
    printmap(playground);
}

int game(tile **playground){
    string input;

    // Ini game state
    printmap(playground);

    // Until player quits take inputs
    while(true){
        cin >> input;

        for (int i = 0; i < input.length(); i++)
        {
            // Quit condition
            if(input[i] == 'q'){
                return 0;
            }

            // Move left
            if(input[i] == 'l'){
                if(!playground[ppy][ppx - 1].isWall){
                    playpos(ppy, ppx - 1, playground);
                } else {
                    playpos(ppy, ppx, playground);
                }  
            }

            // Move right
            if(input[i] == 'r'){
                if(!playground[ppy][ppx + 1].isWall){
                    playpos(ppy, ppx + 1, playground);
                } else {
                    playpos(ppy, ppx, playground);
                }  
            }

            // Move up
            if(input[i] == 'u'){
                if(!playground[ppy - 1][ppx].isWall){
                    playpos(ppy - 1, ppx, playground);
                } else {
                    playpos(ppy, ppx, playground);
                }  
            }

            // Move down
            if(input[i] == 'd'){
                if(!playground[ppy + 1][ppx].isWall){
                    playpos(ppy + 1, ppx, playground);
                } else {
                    playpos(ppy, ppx, playground);
                }  
            }
        }
    }
}

int main() {
    cin >> nrows;
    cin >> ncols;

    // This is what i intent to do
    tile **playground;
    playground = new tile*[nrows];    

    // Generate map and set player pos
    for (int i = 0; i < nrows; i++) {
        playground[i] = new tile[ncols];
        for (int j = 0; j < ncols; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(nrows-1) || (i==0 && j!=3) || j==(ncols-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
                playground[i][j].type = wood;
            }
        }
    }

    ppx = ncols / 2;
    ppy = nrows / 2;
    playground[ppy][ppx].type = player;

    // Start game
    game(playground);

    return 0;
}