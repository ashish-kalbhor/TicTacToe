#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
union REGS in,out;

void draw_x(int,int);
void draw_o(int,int);
void draw_grid();
int callmouse();
void getmouse(int&,int&,int&);
int win(int[][3]);

void main()
{
	int gd=DETECT,gm,x,y,res=-1,clk,chk[3][3],cnt;
	char *n1,*n2;
	clrscr();

	in.x.ax=8;
	in.x.cx=0;
	in.x.dx=480;
	int86(51,&in,&out);

start:  cnt=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		chk[i][j]=0;

	initgraph(&gd,&gm,"c:\\tc\\bgi");

	settextstyle(7,HORIZ_DIR,1);
	cleardevice();
	draw_grid();
	callmouse();

	while(1)
	{
		if(cnt==9)
			break;
back:           delay(150);
		getmouse(x,y,clk);
		if(clk==1)
		{
			if(x>175 && x<240)	//1st col
			{
				if(y>100 && y<166)	//1st row
				{
					if(cnt%2==0)
					{
						if(chk[0][0]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[0][0]=1;
						draw_x(175,100);
					}
					else
					{
						if(chk[0][0]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[0][0]=2;
						draw_o(175,100);
					}
				}
				else if(y>166 && y<232) //2nd row
				{
					if(cnt%2==0)
					{
						if(chk[1][0]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[1][0]=1;
						draw_x(175,166);
					}
					else
					{
						if(chk[1][0]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[1][0]=2;
						draw_o(175,166);
					}
				}
				else if(y>232 && y<300) //3rd row
				{
					if(cnt%2==0)
					{
						if(chk[2][0]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[2][0]=1;
						draw_x(175,232);
					}
					else
					{
						if(chk[2][0]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[2][0]=2;
						draw_o(175,232);
					}
				}
			}
			else if(x>240 && x<306) //2nd col
			{
				if(y>100 && y<166)	//1st row
				{
					if(cnt%2==0)
					{
						if(chk[0][1]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[0][1]=1;
						draw_x(240,100);
					}
					else
					{
						if(chk[0][1]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[0][1]=2;
						draw_o(240,100);
					}
				}
				else if(y>166 && y<232) //2nd row
				{
					if(cnt%2==0)
					{
						if(chk[1][1]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[1][1]=1;
						draw_x(240,166);
					}
					else
					{
						if(chk[1][1]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[1][1]=2;
						draw_o(240,166);
					}
				}
				else if(y>232 && y<300) //3rd row
				{
					if(cnt%2==0)
					{
						if(chk[2][1]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[2][1]=1;
						draw_x(240,232);
					}
					else
					{
						if(chk[2][1]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[2][1]=2;
						draw_o(240,232);
					}
				}
			}
			else if(x>306 && x<375) //3rd col
			{
				if(y>100 && y<166)	//1st row
				{
					if(cnt%2==0)
					{
						if(chk[0][2]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[0][2]=1;
						draw_x(306,100);
					}
					else
					{
						if(chk[0][2]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[0][2]=2;
						draw_o(306,100);
					}
				}
				else if(y>166 && y<232) //2nd row
				{
					if(cnt%2==0)
					{
						if(chk[1][2]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[1][2]=1;
						draw_x(306,166);
					}
					else
					{
						if(chk[1][2]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[1][2]=2;
						draw_o(306,166);
					}
				}
				else if(y>232 && y<300) //3rd row
				{
					if(cnt%2==0)
					{
						if(chk[2][2]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[2][2]=1;
						draw_x(306,232);
					}
					else
					{
						if(chk[2][2]!=0)
						{
							outtextxy(80,50,"WRONG INPUT BUDDY !!, TRY AGAIN ");
							goto back;
						}
						chk[2][2]=2;
						draw_o(306,232);
					}
				}
			}
			cnt++;
		}
		res=win(chk);
		if(res==1)
		{
			settextstyle(7,HORIZ_DIR,1);
			outtextxy(220,330,"PLAYER_X has WON the Game !!!");
			break;
		}
		if(res==2)
		{
			settextstyle(7,HORIZ_DIR,1);
			outtextxy(220,330,"PLAYER_O has WON the Game !!!");
			break;
		}
	}
	if(res==-1)
	{
		settextstyle(7,HORIZ_DIR,1);
		outtextxy(220,330,"HEY !!! NO ONE WON....");
		outtextxy(225,355,"ONE MORE GAME ??? ");
		if(getche()=='y')
		{
			cleardevice();
			goto start;
		}
		exit(0);
	}
getch();
}

int win(int chk[3][3])
{
	if(chk[0][0]==1 && chk[0][1]==1 && chk[0][2]==1)     //horizontal check
		return 1;
	if(chk[0][0]==2 && chk[0][1]==2 && chk[0][2]==2)
		return 2;
	if(chk[1][0]==1 && chk[1][1]==1 && chk[1][2]==1)
		return 1;
	if(chk[1][0]==2 && chk[1][1]==2 && chk[1][2]==2)
		return 2;
	if(chk[2][0]==1 && chk[2][1]==1 && chk[2][2]==1)
		return 1;
	if(chk[2][0]==2 && chk[2][1]==2 && chk[2][2]==2)
		return 2;

	if(chk[0][0]==1 && chk[1][0]==1 && chk[2][0]==1)	       //vertical check
		return 1;
	if(chk[0][0]==2 && chk[1][0]==2 && chk[2][0]==2)
		return 2;
	if(chk[0][1]==1 && chk[1][1]==1 && chk[2][1]==1)
		return 1;
	if(chk[0][1]==2 && chk[1][1]==2 && chk[2][1]==2)
		return 2;
	if(chk[0][2]==1 && chk[1][2]==1 && chk[2][2]==1)
		return 1;
	if(chk[0][2]==2 && chk[1][2]==2 && chk[2][2]==2)
		return 2;

	if(chk[0][0]==1 && chk[1][1]==1 && chk[2][2]==1)     //diagonal check
		return 1;
	if(chk[0][0]==2 && chk[1][1]==2 && chk[2][2]==2)
		return 2;
	if(chk[0][2]==1 && chk[1][1]==1 && chk[2][0]==1)
		return 1;
	if(chk[0][2]==2 && chk[1][1]==2 && chk[2][0]==2)
		return 2;

	return -1;		//return -1 if still no one wins
}

void draw_x(int x,int y)
{
	setcolor(RED);
	line(x+12,y+12,x+50,y+50);
	line(x+12,y+50,x+50,y+12);
	setcolor(WHITE);
}

void draw_o(int x,int y)
{
	setcolor(YELLOW);
	circle(x+33,y+33,18);
	setcolor(WHITE);
}

void draw_grid()
{
	line(175,100,375,100);
	line(175,100,175,300);
	line(375,100,375,300);
	line(175,300,375,300);
	line(241,100,241,300);
	line(307,100,307,300);
	line(175,166,375,166);
	line(175,232,375,232);
}

int callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}

void getmouse(int &x,int &y,int &clk)
{
	in.x.ax=3;
	int86(51,&in,&out);
	clk=out.x.bx;
	x=out.x.cx;
	y=out.x.dx;
}
