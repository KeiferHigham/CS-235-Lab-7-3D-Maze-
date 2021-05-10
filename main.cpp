#include <iostream>
#include <fstream>
#include "Maze.h"

using namespace std;

int main(int argc, char* argv[]) {

    if (argc < 3) {
        cerr << "Please provide name of input and output files";
        return 1;
    }
    cout << "Input file: " << argv[1] << endl;
    ifstream in(argv[1]);
    if (!in) {
        cerr << "Unable to open " << argv[1] << " for input";
        return 2;
    }
    cout << "Output file: " << argv[2] << endl;
    ofstream out(argv[2]);
    if (!out) {
        in.close();
        cerr << "Unable to open " << argv[2] << " for output";
        return 3;
    }

    int height = 0;
    int width = 0;
    int layerNum = 0;

    in >> height;
    in >> width;
    in >> layerNum;
    cout << height << " " << width << " " << layerNum;

     Maze add(height, width, layerNum);

     int value = 0;
       out << "Solve Maze:" << endl;
     for(int i = 0; i < layerNum; ++i) {
         out << "Layer " << i + 1 << endl;

         for(int j = 0; j < height; ++j) {

             for(int c = 0; c < width; ++c) {
                in >> value;
                 add.setValue(j, c, i, value);
                if(value == 0) {
                    out << " " << "_";
                }
                else  {
                    out << " " << "X";
                }
             }
             out << endl;

         }


     }
     out << endl;

     if(add.find_maze_path()) {
         out << add.toString();
     }
     else {
         out << "No Solution Exists!";
     }









    return 0;

}