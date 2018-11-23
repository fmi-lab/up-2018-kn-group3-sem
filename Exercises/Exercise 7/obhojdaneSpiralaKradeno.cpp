///Ne e gotovo!

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int sizeX = 4, sizeY = 7;
    int matrix[sizeX][sizeY];
    int maxBot = sizeX - 1;
    int maxRight = sizeY - 1;
    int maxTop = 0;
    int maxLeft = 0;
    int x = 0, y = 0;
    bool flagLeft = 0, flagBot = 0, flagRight = 0, flagTop = 0;



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
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }

    cout<<"**********************************\n";

    while(maxLeft != maxRight + 1 && maxTop != maxBot + 1)
    {

        if(y == maxLeft)
        {
            for(int i = x; i<=maxBot; i++)
            {
                if(!flagTop)
                {
                    cout<<matrix[i][maxLeft]<<' ';
                    flagTop = 0;
                }
                else
                {
                    flagTop = 0;
                }
                flagLeft = 1;
            }
            x = maxBot;
            maxLeft++;

            cout<<"maxLeft = "<<maxLeft<<endl;
        }
        else if(x == maxBot)
        {
            for(int i = y; i<=maxRight; i++)
            {
                flagBot = 1;
                if(!flagLeft)
                {
                    cout<<matrix[maxBot][i]<<' ';
                    flagLeft = 0;
                }
                else
                {
                    flagLeft = 0;
                }
            }
            y = maxRight;
            maxBot--;

            cout<<"maxBot = "<<maxBot<<endl;
        }
        else if(y == maxRight)
        {
            for(int i = x; i>=maxTop; i--)
            {
                flagRight = 1;
                if(!flagBot)
                {
                    cout<<matrix[i][maxRight]<<' ';
                    flagBot = 0;
                }
                else
                {
                    flagBot = 0;
                }
            }
            x = maxTop;
            maxRight--;
            cout<<"maxRight = "<<maxRight<<endl;
        }
        else if(x == maxTop)
        {
            for(int i = y; i>=maxLeft; i--)
            {
                flagTop = 1;
                if(!flagRight)
                {
                    cout<<matrix[maxTop][i]<<' ';
                    flagRight = 0;
                }
                else
                {
                    flagRight = 0;
                }
            }
            y = maxLeft;
            maxTop++;
            cout<<"maxTop = "<<maxTop<<endl;
        }
        cout<<endl;
    }


    return 0;
}
