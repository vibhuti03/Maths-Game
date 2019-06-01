#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void mainscrn();
int calculate(char,int,int);
char choice();
void midscrn(char);
void rules();
void game(char ch);
void endscrn();
int main()
{
	mainscrn();
	getch();
	system("cls");
	
	char ch=choice();
	getch();
	system("cls");

	midscrn(ch);
	getch();
	system("cls");
	
	rules();
	getch();
	system("cls");

	game(ch);
	system("cls");

	endscrn();

	getch();
	return 0;
	
}
void mainscrn()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t           MATHS QUIZ \n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
}

char choice()
{
	char ch;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t==============================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t==============================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tWhich mathematical skill do you want to test?";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress + for ADDITION";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress - for SUBTRACTION";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress * for MULTIPLICATION";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\tPress / for DIVISION\n\t\t\t\t\t\t\t\t\t\t\t\t\t";
	cin>>ch;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t==============================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t==============================================\n";
	return ch;
}

void midscrn(char ch)
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	switch(ch)
	{
		case'+':
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\tSo you are good at ADDITION huhh??";
			break;
		case '-':
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\tSo you are good at SUBTRACTION huhh??";
			break;
		case '*':
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\tSo you are good at MULTIPLICATION huhh??";
			break;
		case '/':
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\tSo you are good at DIVISION huhh??";
			break;
		default:
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\tIt seems you have entered a wrong input.";
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Let's try again shall we? ;)";
			getch();
			system("cls");
			choice();
			break;	
	}
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tWell we shall see your capabilities...\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
}

void rules()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\tHere are the rules...";
	cout<<"\n\t\t\t\tThere are total 25 stages.";
	cout<<"\n\t\t\t\tYou have got 3 lives";
	cout<<"\n\t\t\t\tA simple equation shall appear before you.";
	cout<<"\n\t\t\t\tYou can take all the time that you need to solve that equation.";
	cout<<"\n\t\t\t\tThen enter your calculated result.";
	cout<<"\n\t\t\t\tWith each correct answer you will earn 5 points.";
	cout<<"\n\t\t\t\tFor every incorrect answer 2 points will be deducted.";
	cout<<"\n\t\t\t\tUse of calculators not allowed";
	cout<<"\n\n\nLet's get started then...";
}


void game(char ch)
{
		int i,l=3,s=0;
		for(i=0;i<25&&l>0;i++)
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\t=======================================================================================\n";
			cout<<"\n\t\t\t\t\t   STAGE "<<i+1;
			cout<<"\t\t\t\t\t\t\t\t\t\t"<<"   SCORE\t"<<s;
			cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t     LIVES\t"<<l;
			cout<<"\n\t\t\t\t\t\t=======================================================================================\n";
			srand(time(0));
			int a=rand() % 100;
			int b=rand() % 100;
			int r;
			cout<<"\n\n\n\t\t\t\t   "<<a<<"\t"<<ch<<"\t"<<b<<"\t=\t";
			cin>>r;
			
			system("cls");
			
			int res = calculate(ch,a,b);
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			if(r==res)
			{
				s+=5;
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t        WELL DONE!!!!\n";
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
			}
			else
			{
				s-=2;
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\tOOPS!!!!";
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tOne life lost\n";
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
				l=l-1;
			}
				cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t  Your score is:\t"<<s;
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
				getch();
				system("cls");
		}
	 
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	if(l==0&&i<100&&s<25)
	{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\tYou have used all your lives";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   Not that great at "<<ch<<"\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	}
	else if(l==0&&s>25)
	{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t============================================\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\tIt seems you have used up all your lives";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tBut hey!....You were pretty good!!!!!";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t============================================\n";
	}
	else
	{
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t     What are you??\n \t\t\t\t\t\t\t\t\t\t\t\t\t\t    A Mathematician??";
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t     You are great at "<<ch;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	}
	getch();
	system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t       Final score:\t"<<s<<"\n\t\t\t\t\t\t\t\t\t\t\t\t       Lives Left:\t"<<l;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	getch();
	
}


int calculate(char ch,int a,int b)
{
	int c;
	switch(ch)
	{
		case '+':
			c=a+b;
			break;
		case '-':
			c=a-b;
			break;
		case '*':
			c=a*b;
			break;
		case '/':
			c=a/b;
			break;
		default: 
		c=0;
	}
	return c;
	
	
}
void endscrn()
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t            GAME OVER \n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t=================================\n";
	getch();
}
