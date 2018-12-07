#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    const int sizeX = 7, sizeY = 4;
    int matrix[sizeX][sizeY];
    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            matrix[i][j] = i*sizeY + j;
        }
    }

    for(int i = 0; i<sizeX; i++)
    {
        for(int j = 0; j<sizeY; j++)
        {
            cout<<setw(4)<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"**********************************\n";

    int posoka = 1; /// 1 - down, 2 - right, 3 - up, 4 - left.
    int maxBot = sizeX-1, maxRight = sizeY - 1, maxTop = 0, maxLeft = 0;
    int x = 0, y = 0; /// coordinates

    /// We print elements until either of the boundaries surpasses the other one from the same axis.
    while(maxRight != maxLeft - 1 && maxBot != maxTop - 1)
    {
//        cout<<"maxLeft = "<<maxLeft<<
//        " / maxBot = "<<maxBot<<
//        " / maxRight = "<<maxRight<<
//        " / maxTop = "<<maxTop<<endl;

        /// Everytime an element is printed we go to the next one to be printed
        /// and if needed - change the direction of movement and the boundaries of printable elements.
        switch(posoka)
        {
        case 1:
            cout<<setw(4)<<matrix[x][y];
            if(x<maxBot)
            {
                x++;
            }
            else
            {
                maxLeft++;
                y++;
                posoka = 2;
                cout<<endl;
            }
            break;
        case 2:
            cout<<setw(4)<<matrix[x][y];
            if(y<maxRight)
            {
                y++;
            }
            else
            {
                maxBot--;
                x--;
                posoka = 3;
                cout<<endl;
            }
            break;
        case 3:
            cout<<setw(4)<<matrix[x][y];
            if(x>maxTop)
            {
                x--;
            }
            else
            {
                maxRight--;
                y--;
                posoka = 4;
                cout<<endl;
            }
            break;
        case 4:
            cout<<setw(4)<<matrix[x][y];
            if(y>maxLeft)
            {
                y--;
            }
            else
            {
                maxTop++;
                x++;
                posoka = 1;
                cout<<endl;
            }
            break;
        }
    }

    return 0;
}
