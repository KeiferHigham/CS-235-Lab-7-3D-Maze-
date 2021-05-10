#ifndef MAZELAB_MAZE_H
#define MAZELAB_MAZE_H
#include "MazeInterface.h"
#include <sstream>

using namespace std;

class Maze : public MazeInterface {

public:

    Maze(int mazeHeight, int mazeWidth, int mazeNumLayers) {
        height = mazeHeight;
        width = mazeWidth;
        numLayers = mazeNumLayers;
        maze = new CellValue**[numLayers];

        for(int i = 0; i < numLayers; ++i) {
            maze[i] = new CellValue*[height];
            for (int j = 0; j < height; ++j) {
             maze[i][j] = new CellValue[width];
            }
        }
    }
    ~Maze() {


        for(int i = 0; i < numLayers; ++i) {
            for(int j = 0; j < height; ++j) {
                delete [] maze[i][j];

            }
        }
        for(int i = 0; i < numLayers; ++i) {
            delete [] maze[i];
        }

        delete [] maze;

    }


     void setValue(int height, int width, int layer, int value) {

        if(value == 0) {
            maze[layer][height][width] = OPEN;
        }
        else {
            maze[layer][height][width] = BLOCKED;
        }

    }

    /** Solve maze
       @return true if solveable, else false
    */
     bool find_maze_path() {
       return  find_maze_path(0, 0, 0);
     }

     bool find_maze_path(int a, int b, int c) {
         if (a < 0 || a >= numLayers || b < 0 || b >= height ||
             c < 0 || c >= width) {
             return false;
         }
         if (maze[a][b][c] != OPEN) {
             return false;
         }
         if((a == numLayers - 1) && (b == height - 1) && (c == width - 1)) {
             maze[a][b][c] = EXIT;
             return true;
         }
         maze[a][b][c] = VISITED;

         if (find_maze_path(a + 0, b + 0, c - 1)) {          //Left
             maze[a][b][c] = LEFT;
             return true;
         }
         if (find_maze_path(a + 0, b + 0, c + 1)) {         //Right
             maze[a][b][c] = RIGHT;
             return true;
         }
         if (find_maze_path(a + 0, b - 1, c + 0)) {         //UP
             maze[a][b][c] = UP;
             return true;
         }
         if (find_maze_path(a + 0, b + 1, c + 0)) {         //Down
             maze[a][b][c] = DOWN;
             return true;
         }
         if (find_maze_path(a - 1, b + 0, c + 0)) {        //Out
             maze[a][b][c] = OUT;
             return true;
         }
         if (find_maze_path(a + 1, b + 0, c + 0)) {       //In
             maze[a][b][c] = IN;
             return true;
         }


          return false;

     }

    /** Output maze (same order as input maze)
      @return string of 2D layers
    */
     std::string toString() const {
        stringstream o;
        o << "Solution:" << endl;
        for (int i = 0; i < numLayers; ++i) {
             o << "Layer " << i + 1 << endl;
            for (int j = 0; j < height; ++j) {

                for (int c = 0; c < width; ++c) {
                     if(maze[i][j][c] == LEFT)
                    o << " " << "L";
                   else if(maze[i][j][c] == RIGHT) {
                        o << " " << "R";
                    }
                   else if(maze[i][j][c] == UP) {
                        o << " " << "U";
                    }
                   else if(maze[i][j][c] == DOWN) {
                        o << " " << "D";
                    }
                   else if(maze[i][j][c] == OUT) {
                        o << " " << "O";
                    }
                   else if(maze[i][j][c] == IN) {
                        o << " " << "I";
                    }
                   else if(maze[i][j][c] == VISITED) {
                        o << " " << "*";
                    }
                   else if(maze[i][j][c] == BLOCKED) {
                        o << " " << "X";
                    }
                   else if(maze[i][j][c] == EXIT) {
                       o << " " << "E";
                   }
                    else {
                        o << " " << "_";
                    }
                }
               o << endl;
            }
        }

       return o.str();


    }

private:
int height = 0;
int width = 0;
int numLayers = 0;
enum CellValue {OPEN, BLOCKED, VISITED, EXIT, LEFT, RIGHT, UP, DOWN, OUT, IN};
CellValue ***maze;


};

#endif //MAZELAB_MAZE_H
