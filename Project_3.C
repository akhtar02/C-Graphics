#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void seen (int x1, int y1, int x2, int y2)
{
int x,y,dx,dy,step;
int i;
dx = abs(x2-x1);
dy = abs(y2-y1);
if(dx>=dy)
step = dx;
else step = dy;
dx=dx/step;
dy = dy/step;
x=x1;
y=y1;
i=1;
while(i<=step)
{
putpixel(x,y,WHITE);
x=x+dx;
y= y+dy;
i=i+1;
}
}
void main(){

	int gd = DETECT, gm, i;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
      //	cleardevice();

       setfillstyle(SOLID_FILL,GREEN);   //land
    //  seen(0,170,640,170);  //top line
      seen(0,159,640,159);  //top line
      line(0,370,640,330);  //buttom line
      floodfill(2,202,15);
       setfillstyle(SOLID_FILL,LIGHTBLUE);
       seen(0,1,640,1);  //top line sky
       seen(0,159,640,159);  //buttom line sky
       floodfill(2,2,15);

       //hills
       setfillstyle(SOLID_FILL,BROWN);
       seen(0,159,640,159); // buttom line
       line(0,159,90,50);   // left line
       line(180,159,90,50);  // right side line
       floodfill(2,158,15);

	setfillstyle(SOLID_FILL,BROWN);
       seen(0,159,640,159);  //buttom line
       line(180,159,270,50);   //left line
       line(360,159,270,50);   //right line
       floodfill(182,158,15);

      setfillstyle(SOLID_FILL,BROWN);
       seen(0,159,640,159);
       line(360,159,450,50);
       line(540,159,450,50);
       floodfill(362,158,15);
       setfillstyle(SOLID_FILL,BROWN);
       seen(0,159,640,159);
       line(540,159,590,50);
       line(630,159,590,50);
       floodfill(542,158,15);
       //tree single triangle
       setfillstyle(SOLID_FILL,BROWN);
       seen(580,270,580,310);  //left line
       seen(585,270,585,310);  //right line
       seen(580,270,585,270); //top line
       seen(580,310,585,310); //buttom line
       floodfill(582,271,15);
       //tree tringle
       setfillstyle(SOLID_FILL,BROWN);
       seen(560,270,605,270);  //buttom
       line(560,270,583,180); //left
       line(605,270,583,180); //right
       floodfill(562,269,15);

	 //1st house
	//house
	 setfillstyle(SOLID_FILL, LIGHTCYAN);
	seen(70,270,70,335);  //left line
	 seen(160,270,160,335); //rigt line
	 seen(70, 270,160,270);  //top line
	seen(70,335,160,335); //buttom line
	floodfill(72,272,15);
	//tringle
	 setfillstyle(SOLID_FILL, CYAN);
	 seen(50, 270,180,270);  //top line
	 line(50,270,115,220); //left line
	 line(180,270,115,220); //right line
	floodfill(52,269,15);

		    //door
	  setfillstyle(XHATCH_FILL,BLUE);
	  seen(80,290,80,335);     //left
	  seen(100,290,100,335);    //right
       //	  seen(310,290,330,290);    //top
       //	  seen(310,335,330,335);    //buttom
       //	  floodfill(312,292,15);

	    //house window
      //	  setfillstyle(HATCH_FILL,RED);
      //	  seen(340,300,340,320);        //left
      //	  seen(370,300,370,320);       //right
      //	  seen(340, 300,370,300);     //top
      //	  seen(340,320,370,320); //buttom
      //	  floodfill(342,302,15);

	 //2nd house
	//house
	 setfillstyle(SOLID_FILL, LIGHTCYAN);
	seen(300,270,300,335);  //left line
	 seen(380,270,380,335); //rigt line
	 seen(300, 270,380,270);  //top line
	seen(300,335,380,335); //buttom line
	floodfill(302,272,15);
	//tringle
	 setfillstyle(SOLID_FILL, CYAN);
	 seen(280, 270,400,270);  //top line
	 line(280,270,340,220); //left line
	 line(400,270,340,220); //right line
	 floodfill(282,269,15);

		    //door
	  setfillstyle(XHATCH_FILL,BLUE);
	  seen(310,290,310,335);     //left
	  seen(330,290,330,335);    //right
	  seen(310,290,330,290);    //top
	  seen(310,335,330,335);    //buttom
	  floodfill(312,292,15);

	    //house window
	  setfillstyle(HATCH_FILL,RED);
	  seen(340,300,340,320);        //left
	  seen(370,300,370,320);       //right
	  seen(340, 300,370,300);     //top
	  seen(340,320,370,320); //buttom
	  floodfill(342,302,15);

	  //3rd house
	//house
	 setfillstyle(SOLID_FILL, LIGHTCYAN);
	seen(440,270,440,335);  //left line
	 seen(520,270,520,335); //rigt line
	 seen(440, 270,520,270);  //top line
	seen(440,335,520,335); //buttom line
	floodfill(442,272,15);

	//tringle
	 setfillstyle(SOLID_FILL, CYAN);
	 seen(420, 270,540,270);  //top line
	 line(420,270,480,220); //left line
	 line(540,270,480,220); //right line
	 floodfill(422,269,15);


	    //door
	  setfillstyle(XHATCH_FILL,BLUE);
	  seen(450,290,450,335);     //left
	  seen(470,290,470,335);    //right
	  seen(450,290,470,290);    //top
	  seen(450,335,470,335);    //buttom
	  floodfill(452,292,15);

	  //house window
	  setfillstyle(HATCH_FILL,RED);
	  seen(480,300,480,320);        //left
	  seen(510,300,510,320);       //right
	  seen(480, 300,510,300);     //top
	  seen(480,320,510,320); //buttom
	  floodfill(482,302,15);



	 //tree
	 setfillstyle(SOLID_FILL,BROWN);
	 seen(240,300,250,335); //left side
	 seen(250,300,250,335);  //right side
	 seen(240,335,250,335);  //buttom line
	 seen(240,300,250,300);//top line
	 floodfill(242,301,15);
       //first tringle
	 setfillstyle(SOLID_FILL,BROWN);
	 line(220,300,270,300); //top line
	 line(220,300,245,260);
	 line(270,300,245,260);
	 floodfill(222,299,15);
       //2nd tringle
	 setfillstyle(SOLID_FILL,BROWN);
	line(220,285,270,285); //top line
       line(220,285,245,245);
       line(270,285,245,245);
       floodfill(222,284,15);


	setfillstyle(SOLID_FILL,YELLOW);
	circle(350,60,30);
	floodfill(352,42,15);



	for(i=0;i<=640;i=i+10,i++)
	{

      setfillstyle(SOLID_FILL,LIGHTBLUE);  //water color
      line(0,370,640,330); //top line
      line(0,475,640,475); //buttom line
      floodfill(2,402,15);
	 // ship
      setfillstyle(SOLID_FILL,BLUE);
      line(50+i,460,170+i,460);  //buttom line
      line(20+i,430,200+i,430);  //top line
      line(50+i,460,20+i,430);  //left line
      line(170+i,460,200+i,430);  //right line
      floodfill(52+i,459,15);
      //ship triangle
      setfillstyle(SOLID_FILL,CYAN);
     line(5+i,425,100+i,425);  //buttom line
   //  line(100+i,380,100+i,425);//right line
	line(5+i,425,100+i,380); //left line
       line(100+i,380,100+i,425);//right line
	floodfill(7+i,424,15);

      setfillstyle(SOLID_FILL,DARKGRAY);
      line(120+i,380,120+i,430);  //left
      line(125+i,380,125+i,430);  //right
      line(120+i,380,125+i,380);  //buttom
      line(120+i,430,120+i,430);  //left
      floodfill(122+i,382,15);
       setfillstyle(SOLID_FILL,DARKGRAY);
      line(140+i,380,140+i,430);  //left
      line(145+i,380,145+i,430);  //right
      line(140+i,380,145+i,380);  //buttom
      line(140+i,430,140+i,430);  //left
      floodfill(142+i,382+i,15);
      delay(200);



  //    setfillstyle(SOLID_FILL,BLACK);  //water color
  //    line(0,370,640,330); //top line
    //  line(0,475,640,475); //buttom line
//   floodfill(2,402,0);
	 // ship
     setfillstyle(SOLID_FILL,BLACK);
      line(50+i,460,170+i,460);  //buttom line
      line(20+i,430,200+i,430);  //top line
      line(50+i,460,20+i,430);  //left line
      line(170+i,460,200+i,430);  //right line
   //   floodfill(52+i,459,0);
     //ship triangle
      setfillstyle(SOLID_FILL,BLACK);
     line(5+i,425,100+i,425);  //buttom line
     line(100+i,380,100+i,425);//right line
     line(5+i,425,100+i,380); //left line
       line(100+i,380,100+i,425);//right line
 //   floodfill(7+i,424,0);

     setfillstyle(SOLID_FILL,BLACK);
      line(120+i,380,120+i,430);  //left
      line(125+i,380,125+i,430);  //right
      line(120+i,380,125+i,380);  //buttom
      line(120+i,430,120+i,430);  //left
   //   floodfill(122+i,382,0);
       setfillstyle(SOLID_FILL,BLACK);
      line(140+i,380,140+i,430);  //left
      line(145+i,380,145+i,430);  //right
      line(140+i,380,145+i,380);  //buttom
      line(140+i,430,140+i,430);  //left
    //  floodfill(142+i,382+i,0);




    //  setfillstyle(SOLID_FILL,LIGHTBLUE);  //water color
      line(0,370,640,330); //top line
      line(0,370,0,475); //right
      line(640, 330,640,475);
      line(0,475,640,475); //buttom line
    //  floodfill(2,402,15);
   //   cleardevice();

   }
   //   cleardevice();

      getch();
   //	closegraph();
	}