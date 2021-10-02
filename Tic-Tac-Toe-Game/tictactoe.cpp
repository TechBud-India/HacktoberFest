#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


    int a[3][3],ar[8],a1,b1,cnt2,i,cnt1,j,tie,x;
    char ch,ch1;

    cout<<"*****************************************TIC TAC TOE*************************************************";
    cout<<"\n\n";
    cout<<"\n  1  |  2  |  3  \n_____|_____|_____\n     |     |     \n  4  |  5  |  6  \n_____|_____|_____\n     |     |     \n  7  |  8  |  9  \n     |     |     ";
    cout<<"\n\nEnter a number to put a sign on that position\n";
    while(1)
    {
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                a[i][j]=0;
        cnt2=0;
        cnt1=0;
        tie=0;
    while(1)
    {

        cout<<"\nPlayer 1\'s Turn : ";
        while(1)
        {

            cin>>x;
            if(x>9||x<0)        //Checking whether the input's among the number keys only.
            {
                cout<<"\nInvalid input! Try again : ";
                continue;
            }
            if(x%3==0)
        {
            a1=x/3-1;
            b1=2;
        }
        else
        {
            a1=x/3;
            if(x<3)
                x+=3;
            if(x%3==2)
                b1=1;
            else if(x%3==1)
                b1=0;
        }


        if(a[a1][b1]>0)
            cout<<"\nFill in an empty spot!\nEnter again: ";
        else
            break;
    }
    a[a1][b1]=1;

    cout<<"\n";
    for(i=0;i<3;i++)           //Creating a simple tictactoe UI in the output screen
    {
        cout<<"     |     |    \n";
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
                ch='X';
            else if(a[i][j]==7)
                ch='O';
            else
                ch=' ';
            cout<<"  "<<ch<<"  |";
        }
        cout<<"\n_____|_____|_____\n";
    }
    cout<<"\n";

    for(i=0;i<8;i++)
        ar[i]=0;
    for(i=0;i<3;i++)        //Adding all the lines including all the horizontal, vertical and the diagonal lines.
        {
                ar[0]+=a[i][0];
                ar[1]+=a[i][1];
                ar[2]+=a[i][2];
                ar[3]+=a[0][i];
                ar[4]+=a[1][i];
                ar[5]+=a[2][i];
        }

        for(i=0;i<3;i++)        //Checking wheather a player won due to the same sign in any of the diagonals
            for(j=0;j<3;j++)
            {
                if(i==j)
                    ar[6]+=a[i][j];
                if(i+j==2)
                    ar[7]+=a[i][j];
            }
    for(i=0;i<8;i++)
        if(ar[i]==3)
            cnt1++;

    if(cnt1>0)
    {
        cout<<"\nPlayer 1 Wins!\n";
        break;
    }
    tie=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
                tie++;
        }
    }
    if(tie==0)
    {
        cout<<"\nRound Draw!\n";
        break;
    }
    cout<<"\nPlayer 2\'s Turn : ";
    while(1)
    {

        cin>>x;
        if(x>9||x<0)
        {
            cout<<"\nInvalid input! Try again : ";
            continue;
        }


        if(x%3==0)
        {
            a1=x/3-1;
            b1=2;
        }
        else
        {
            a1=x/3;
            if(x<3)
                x+=3;
            if(x%3==2)
                b1=1;
            else if(x%3==1)
                b1=0;
        }
        if(a[a1][b1]>0)
            cout<<"\nFill in an empty spot!\n";
        else
            break;

    }

    a[a1][b1]=7;
    cout<<"\n";
    for(i=0;i<3;i++)
    {
        cout<<"     |     |    \n";
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
                ch='X';
            else if(a[i][j]==7)
                ch='O';
            else
                ch=' ';
            cout<<"  "<<ch<<"  |";
        }
        cout<<"\n_____|_____|_____\n";
    }

        for(i=0;i<8;i++)
            ar[i]=0;
        for(i=0;i<3;i++)
        {
                ar[0]+=a[i][0];
                ar[1]+=a[i][1];
                ar[2]+=a[i][2];
                ar[3]+=a[0][i];
                ar[4]+=a[1][i];
                ar[5]+=a[2][i];
        }
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            {
                if(i==j)
                    ar[6]+=a[i][j];

                if(i+j==2)
                    ar[7]+=a[i][j];
            }

        for(i=0;i<8;i++)
        {
            if(ar[i]==21)
                cnt2++;
        }

        if(cnt2>0)
        {
            cout<<"\nPlayer 2 Wins!\n";
            break;
        }

    cout<<"\n";
    }
    cout<<"\nAgain?(\'n\' for NO/Any other key for YES): ";
    cin>>ch;
    if(ch1=='n'||ch=='N')
        break;
    }
    getch();
    return 0;

}
