#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

#define interval 500

void smile()
{
   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
   void *p;
   clrscr();
   initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

   setcolor(YELLOW);
   circle(50, 100, 25);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(50, 100, YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(44, 92, 2, 6);
   fillellipse(56, 92, 2, 6);

   ellipse(50, 100, 205, 335, 20, 14);
   ellipse(50, 100, 205, 335, 20, 15);
   ellipse(50, 100, 205, 335, 20, 16);

   area = imagesize(left, top, left + 50, top + 50);
   p = malloc(area);
	
   setcolor(WHITE);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);

   outtextxy(0, 451, "Smile Face Animation ");
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);

   outtextxy(430,452,"(Press any key to exit)");

   setcolor(BLUE);
   rectangle(0, 0, 639, 449);

   while(!kbhit())
   {
      temp1 = 1 + random (588);
      temp2 = 1 + random (380);

      getimage(left, top, left + 50, top + 50, p);
      putimage(left, top, p, XOR_PUT);
      putimage(temp1 , temp2, p, XOR_PUT);
      delay(interval);
      left = temp1;
      top = temp2;
   }
   getch();
   closegraph();
}

void surprise()
{
   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
   void *p;
   clrscr();
   initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

   setcolor(YELLOW);
   circle(50, 100, 25);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(50, 100, YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(44, 87, 2, 6);
   fillellipse(56, 87, 2, 6);

   fillellipse(50,110,12,8);

   area = imagesize(left, top, left + 50, top + 50);
   p = malloc(area);

   setcolor(WHITE);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);

   outtextxy(0, 451, "Surprise Face Animation ");
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);

   outtextxy(430,452,"(Press any key to exit)");


   setcolor(BLUE);
   rectangle(0, 0, 639, 449);

   while(!kbhit())
   {
      temp1 = 1 + random (588);
      temp2 = 1 + random (380);

      getimage(left, top, left + 50, top + 50, p);
      putimage(left, top, p, XOR_PUT);
      putimage(temp1 , temp2, p, XOR_PUT);
      delay(interval);
      left = temp1;
      top = temp2;
   }

   getch();
   closegraph();
}

void sad()
{
   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
   void *p;
   clrscr();
   initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

   setcolor(YELLOW);
   circle(50, 100, 25);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(50, 100, YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(44, 87, 2, 6);
   fillellipse(56, 87, 2, 6);

   arc(50,120,35,145,15);
   arc(50,120,35,145,14);
   arc(50,120,35,145,15);

   area = imagesize(left, top, left + 50, top + 50);
   p = malloc(area);

   setcolor(WHITE);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);

   outtextxy(0, 451, "Sad Face Animation ");
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);

   outtextxy(430,452,"(Press any key to exit)");


   setcolor(BLUE);
   rectangle(0, 0, 639, 449);

   while(!kbhit())
   {
      temp1 = 1 + random (588);
      temp2 = 1 + random (380);

      getimage(left, top, left + 50, top + 50, p);
      putimage(left, top, p, XOR_PUT);
      putimage(temp1 , temp2, p, XOR_PUT);
      delay(interval);
      left = temp1;
      top = temp2;
   }

   getch();
   closegraph();
}

void wink()
{
   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
   void *p;
   clrscr();
   initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

   setcolor(YELLOW);
   circle(50, 100, 25);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(50, 100, YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(43, 92, 2, 4);
   fillellipse(57, 94, 4, 1);

   setcolor(BLUE);
   arc(43,100,80,115,15);
   arc(57,105,60,105,15);

   setcolor(BLACK);
   ellipse(50, 100, 220, 335, 10, 9);
   ellipse(50, 100, 220, 335, 10, 7);
   ellipse(50, 100, 220, 335, 10, 8);

   area = imagesize(left, top, left + 50, top + 50);
   p = malloc(area);

   setcolor(WHITE);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);

   outtextxy(0, 451, "Wink Face Animation ");
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);

   outtextxy(430,452,"(Press any key to exit)");


   setcolor(BLUE);
   rectangle(0, 0, 639, 449);

   while(!kbhit())
   {
      temp1 = 1 + random (588);
      temp2 = 1 + random (380);

      getimage(left, top, left + 50, top + 50, p);
      putimage(left, top, p, XOR_PUT);
      putimage(temp1 , temp2, p, XOR_PUT);
      delay(interval);
      left = temp1;
      top = temp2;
   }

   getch();
   closegraph();
}

void angry()
{
   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
   void *p;
   clrscr();
   initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

   setcolor(RED);
   circle(50, 100, 25);
   setfillstyle(SOLID_FILL, RED);
   floodfill(50, 100, RED);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(43, 97, 2, 6);
   fillellipse(57, 97, 2, 6);

//   setcolor(YELLOW);
//   setfillstyle(LINE_FILL,BLACK);
//   line(19,10,30,15);
//   line(35,15,44,10);

   setcolor(BLACK);
   arc(50,122,40,140,15);
   arc(50,122,40,140,14);
   arc(50,122,40,140,15);

   area = imagesize(left, top, left + 50, top + 50);
   p = malloc(area);

   setcolor(WHITE);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);

   outtextxy(0, 451, "Angry Face Animation ");
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);

   outtextxy(430,452,"(Press any key to exit)");

   setcolor(WHITE);
   rectangle(0, 0, 639, 449);

   while(!kbhit())
   {
      temp1 = 1 + random (588);
      temp2 = 1 + random (380);

      getimage(left, top, left + 50, top + 50, p);
      putimage(left, top, p, XOR_PUT);
      putimage(temp1 , temp2, p, XOR_PUT);
      delay(interval);
      left = temp1;
      top = temp2;
   }

   getch();
   closegraph();
}

int main()
{
	int choice,flag=0;
	clrscr();
	while(flag==0)
	{
		printf("\nMENU");
		printf("\n------------------------\n");
		printf("1.Smile\n");
		printf("2.Surprise\n");
		printf("3.Sad\n");
		printf("4.Wink\n");
		printf("5.Angry\n");
		printf("\nPress 0 To Exit.\n");
		printf("\nEnter Choice:=> ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				flag=1;
			break;

			case 1:
				smile();
			break;

			case 2:
				surprise();
			break;
			case 3:
				sad();
			break;
			case 4:
				wink();
			break;
			case 5:
				angry();
			break;
			default:
			clrscr();
			printf("[:Invalid Input:]\nPlease Try Again . . .\n");

		}
	}
	printf("\n------------------------\nPress any key to exit.");
	getch();
	return 0;
}
