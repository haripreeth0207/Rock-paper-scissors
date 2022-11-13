#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int n, x=1;
    int c = 0, u = 0;
    while (x = 1)
    {
        cout << "Which one do you select. Press  1 for Rock 2 for Paper 3 for Scissors" << endl;
        cin >> n;
        srand(time(NULL));
        int num = 1 + rand() % 3;
        if (num == n)
        {
            cout << "Both of you picked ";
            if (n == 1)
            {
                cout << "Rock"<<endl;
            }
            else if (n == 2)
            {
                cout << "Paper"<<endl;
            }
            else
            {
                cout << "Rock"<<endl;
            }
        }
        else if ((n == 1) && (num == 2))
        {
            cout << "The computer picked Paper "<< endl;
            c++;
            cout << "Your score:" << u<<endl;
            cout << "Comp score:" << c<<endl;
        }
        else if ((n == 2) && (num == 3))
        {
            cout << "The computer picked scissors " << endl;
            c++;
            cout << "Your score:" << u<<endl;
            cout << "Comp score:" << c<<endl;
        }
        else if ((n == 3) && (num == 1))
        {
            cout << "The computer picked Rock " << endl;
            c++;
            cout << "Your score:" << u<<endl;
            cout << "Comp score:" << c<<endl;
        }
        else if ((n == 1) && (num == 3))
        {
            cout << "The computer picked Scissors" << endl;
            u++;
            cout << "Your score:" << u<<endl;
            cout << "Comp score:" << c<<endl;
        }
        else if ((n == 2) && (num == 1))
        {
            cout << "The computer picked rock " << endl;
            u++;
            cout << "Your score:" << u<<endl;
            cout << "Comp score:" << c<<endl;
        }
        else
        {
            cout << "The computer picked paper " << endl;
            u++;
            cout << "Your score:" << u<<endl;
            cout << "Comp score:" << c<<endl;
        }

        cout << "Do you want to continue? Press 1.Yes 2.No:";
        cin >> x;
        if (x == 2)
        {
            break;
        }
        
    }

    if (c > u)
    {
        cout<<"Your Score is :"<<u<<endl;
        cout << "Computer wins :( " << endl;
    }
    if (u > c)
    {
        cout<<"Your Score is :"<<u<<endl;
        cout << "You win :D" << endl;
    }
    if (u == c)
    {
        cout<<"Your Score is :"<<u<<endl;
        cout << "Its a draw :)" << endl;
    }

    return 0;
}