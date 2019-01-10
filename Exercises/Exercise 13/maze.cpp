#include<iostream>
#include<iomanip>
using namespace std;

int mazeM[8][8] =
{
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,1,1,1,1},
    {0,1,0,1,0,0,0,0},
    {0,1,0,1,1,1,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,0,1,1,1,0,1},
    {0,1,0,1,1,0,0,0}
};

bool walkable(int maze[8][8], int X, int Y)
{
    if(X<0 || Y<0 || X>7 || Y>7 || maze[X][Y] != 0)
    {
        return false;
    }
    return true;
}

bool way(int maze[8][8], int startX, int startY, int endX, int endY)
{
    maze[startX][startY] = 2;
    bool result = false;

    if(startX == endX && startY == endY)
    {
        return true;
    }
    if(walkable(maze, startX + 1, startY))
    {
        result = result || way(maze, startX + 1, startY, endX, endY);
    }
    if(walkable(maze, startX, startY + 1))
    {
        result = result || way(maze, startX, startY + 1, endX, endY);
    }
    if(walkable(maze, startX - 1, startY))
    {
        result = result || way(maze, startX - 1, startY, endX, endY);
    }
    if(walkable(maze, startX, startY - 1))
    {
        result = result || way(maze, startX, startY - 1, endX, endY);
    }
    return result;
}

unsigned int findWay(int maze[8][8], int startX, int startY, int endX, int endY, int way[][2], int steps)
{
    maze[startX][startY] = 2;
    way[steps][0] = startX;
    way[steps][1] = startY;
    unsigned int result1 = -1, result2 = -1, result3 = -1, result4 = -1;
    cout<<"X = "<<startX<<", Y = "<<startY<<endl;

    if(startX == endX && startY == endY)
    {
        return steps;
    }
    if(walkable(maze, startX + 1, startY))
    {
//    cout<<"X = "<<startX<<", Y = "<<startY<<endl;
        result1 = findWay(maze, startX + 1, startY, endX, endY, way, steps + 1);
//        if(result) return result;
    }
    if(walkable(maze, startX, startY + 1))
    {
//    cout<<"X = "<<startX<<", Y = "<<startY<<endl;
        result2 = findWay(maze, startX, startY + 1, endX, endY, way, steps + 1);
//        if(result) return result;
    }
    if(walkable(maze, startX - 1, startY))
    {
//    cout<<"X = "<<startX<<", Y = "<<startY<<endl;
        result3 = findWay(maze, startX - 1, startY, endX, endY, way, steps + 1);
//        if(result) return result;
    }
    if(walkable(maze, startX, startY - 1))
    {
//    cout<<"X = "<<startX<<", Y = "<<startY<<endl;
        result4 = findWay(maze, startX, startY - 1, endX, endY, way, steps + 1);
//        if(result) return result;
    }
    return min(result1, min(result2, min(result3, result4)));
}

/// In the maze we are going to mark the path we took to get to target position.
/// In each position we are going to say where we came from to get there.
/// 10 - up, 11 - left, 12 - down, 13 - right
bool findWay2(int maze[8][8], int startX, int startY, int endX, int endY)
{
    bool result = false;
    if(startX == endX && startY == endY)
    {
        return true;
    }
    if(walkable(maze, startX + 1, startY))
    {
        maze[startX + 1][startY] = 10;
        result = findWay2(maze, startX + 1, startY, endX, endY);
        if(result) return result;
    }
    if(walkable(maze, startX, startY + 1))
    {
        maze[startX][startY + 1] = 11;
        result = findWay2(maze, startX, startY + 1, endX, endY);
        if(result) return result;
    }
    if(walkable(maze, startX - 1, startY))
    {
        maze[startX - 1][startY] = 12;
        result = findWay2(maze, startX - 1, startY, endX, endY);
        if(result) return result;
    }
    if(walkable(maze, startX, startY - 1))
    {
        maze[startX][startY - 1] = 13;
        result = findWay2(maze, startX, startY - 1, endX, endY);
        if(result) return result;
    }
    return result;
}

void printWay(int maze[8][8], int startX, int startY, int endX, int endY)
{
    cout<<endX<<' '<<endY<<endl;
    if(endX != startX || endY != startY)
    {
        if(maze[endX][endY] == 10)
        {
            printWay(maze, startX, startY, endX - 1, endY);
        }
        if(maze[endX][endY] == 11)
        {
            printWay(maze, startX, startY, endX, endY - 1);
        }
        if(maze[endX][endY] == 12)
        {
            printWay(maze, startX, startY, endX + 1, endY);
        }
        if(maze[endX][endY] == 13)
        {
            printWay(maze, startX, startY, endX, endY + 1);
        }
    }
}

bool findAndPrintWay(int maze[8][8], int startX, int startY, int endX, int endY){
    bool result = findWay2(maze, startX, startY, endX, endY);
    if(result){
        printWay(maze, startX, startY, endX, endY);
    }
    return result;
}

void printMaze(int maze[8][8]){
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            cout<<setw(3)<<maze[i][j];
        }
        cout<<endl;
    }
}

int main()
{
//    cout<<way(mazeM, 0, 0, 1, 4)<<endl;

//    int foundWay[100][2];
//    for(int i = 0; i<100; i++)
//    {
//        foundWay[i][0] = 0;
//        foundWay[i][1] = 0;
//    }
//    int steps = findWay(mazeM, 0, 0, 0, 1, foundWay, 0);
//    cout<<steps<<endl;
//    for(int i = 0; i<= 99; i++)
//    {
//        cout<<foundWay[i][0]<<", "<<foundWay[i][1]<<endl;
//    }

    cout<<findAndPrintWay(mazeM, 0, 0, 0, 1)<<endl;
    printMaze(mazeM);

}
