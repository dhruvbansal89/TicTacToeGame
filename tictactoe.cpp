//demo of using vs code built in github integration...
#include<iostream>
#include<stdlib.h>
using namespace std;
char m,n; 
char pos1,pos2;
char x1='1',x2='2',x3='3',x4='4',x5='5',x6='6',x7='7',x8='8',x9='9';
//all the variables are declared upto here...
void printboard()
{
    cout<<"\n";
    printf("     |   |   ");
    printf("\n");
    printf("  %c  |%c  | %c",x7,x8,x9);
    printf("\n");
    printf(" ____|___|___");
    printf("\n");
    printf("     |   |   ");
    printf("\n");
    printf("  %c  | %c | %c",x4,x5,x6);
    printf("\n");
    printf(" ____|___|___");
    printf("\n");
    printf("     |   |   ");
    printf("\n");
    printf("  %c  |%c  |%c",x1,x2,x3);
    printf("\n");
    printf("     |   |   ");

}
void updateboard1()
{
    //for player 1...
    if(pos1=='1')
    x1=n;
    else if(pos1=='2')
    x2=n;
    else if(pos1=='3')
    x3=n;
    else if(pos1=='4')
    x4=n;
    else if(pos1=='5')
    x5=n;
    else if(pos1=='6')
    x6=n;
    else if(pos1=='7')
    x7=n;
    else if(pos1=='8')
    x8=n;
    else if(pos1=='9')
    x9=n;
}
void updateboard2()
{
    //for player 2...
    if(pos2=='1')
    x1=m;
    else if(pos2=='2')
    x2=m;
    else if(pos2=='3')
    x3=m;
    else if(pos2=='4')
    x4=m;
    else if(pos2=='5')
    x5=m;
    else if(pos2=='6')
    x6=m;
    else if(pos2=='7')
    x7=m;
    else if(pos2=='8')
    x8=m;
    else if(pos2=='9')
    x9=m;
}
void takeinput()
{
    while(!(x1==x5==x9)&&!(x1==x2==x3)&&!(x4==x5==x6)&&!(x7==x8==x9)&&!(x7==x5==x3)&&!(x1==x4==x7)&&!(x2==x5==x8)&&!(x3==x6==x9))
    // while(!(x1==x5==x9)||!(x1==x2==x3)||!(x4==x5==x6)||!(x7==x8==x9)||!(x7==x5==x3)||!(x1==x4==x7)||!(x2==x5==x8)||!(x3==x6==x9))
    {
    cout<<"\n->Player One:Enter your move:";
    cin>>pos1;
    updateboard1();
    printboard();
    cout<<"\n->Player Two:Enter your move:";
    cin>>pos2;
    updateboard2();
    printboard();
        if((x1==x5==x9)||(x1==x2==x3)||(x4==x5==x6)||(x7==x8==x9)||(x7==x5==x3)||(x1==x4==x7)||(x2==x5==x8)||(x3==x6==x9))
        {
            cout<<"\n\nGame Over.....";
            break;
            // if(x1==pos1||x2==pos1||x3==pos1||x4==pos1||x5==pos1||x6==pos1||x7==pos1||x8==pos1||x9==pos1)
            // {
            // cout<<"\n\n"<<"Player One has Won...";
            // break;
            // }
            // else if(x1==pos2||x2==pos2||x3==pos2||x4==pos2||x5==pos2||x6==pos2||x7==pos2||x8==pos2||x9==pos2)
            // {
            // cout<<"\n\n"<<"Player Two has Won...";
            // break;
            // }
        }
    }
}
int main()
{
    system("CLS");
    cout<<"->Player One:What do you want(O or X):";
    cin>>n;
    if(n=='O')
    {
        cout<<"\n"<<"->Player Two:You are given X";
        m='X';
    }
    else if(n=='X')
    {
        cout<<"\n"<<"->Player Two:You are given O";
        m='O';
    }
    printboard();
    takeinput();
    // updateboard();
    
    return 0;
}