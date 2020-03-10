#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>

void school (int x1, int y1, int x2, int y2)
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

void floodFill(int x, int y, int oldcolor,int newcolor)
{
	if(getpixel(x,y)==oldcolor)
	{
	putpixel(x,y ,newcolor);
	floodFill(x+1,y,oldcolor,newcolor);
	floodFill(x,y+1, oldcolor, newcolor);
	floodFill(x-1,y,oldcolor,newcolor);
	floodFill(x, y-1,oldcolor, newcolor);
	}
    }

void boundaryFill4(int x, int y, int fill_color, int boundary_color)
{
if(getpixel(x,y) !=boundary_color && getpixel(x,y)!=fill_color){
     putpixel(x,y, fill_color);
     boundaryFill4(x+1,y,fill_color,boundary_color);
     boundaryFill4(x,y+1, fill_color, boundary_color);
     boundaryFill4(x-1,y,fill_color,boundary_color);
     boundaryFill4(x, y-1,fill_color,boundary_color);
     boundaryFill4(x+1,y,fill_color,boundary_color);
     boundaryFill4(x,y+1, fill_color, boundary_color);
     boundaryFill4(x-1,y,fill_color,boundary_color);
     boundaryFill4(x, y-1,fill_color, boundary_color);

}
}
void main(){
	int i;
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
     //	setbkcolor(BLUE);
     cleardevice();


       //traffic signal
     //  setfillstyle(SOLID_FILL,BLACK);
	school(610,300,610,335); //left side
       school(620,300,620,335);  //right side
       school(610,335,620,335);  //buttom line
       school(610,300,620,300);//top line
       floodFill(610,300,0,0);

   //    setfillstyle(SOLID_FILL,BLACK);
       school(600,220,600,300); //left side
       school(630,220,630,300);  //right side
       school(600,300,630,300);  //buttom line
       school(600,220,630,220);//top line
       floodFill(600,220,0,0);
     //  setfillstyle(SOLID_FILL,RED);
       circle(615,235,10);
       floodFill(615,235,0,4);

   //   setfillstyle(SOLID_FILL,YELLOW);
       circle(615,260,10);
       floodFill(615,260,0,14);

     //  setfillstyle(SOLID_FILL,GREEN);
       circle(615,285,10);
       floodFill(615,280,0,2);


///////////////////    //Road footpath
     //	school(0,478,638,478);
	 setfillstyle(SOLID_FILL, BROWN);
	school(0,430,640,430); // footpath
	school(0,416,640,416); // footpath border
	 floodfill(2,432,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(0,416,0,430);
	 school(30,416,30,430);
	 floodfill(2,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(60,416,60,430);
	 school(90,416,90,430);
	 floodfill(62,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(120,416,120,430);
	 school(150,416,150,430);
	 floodfill(122,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(180,416,180,430);
	 school(210,416,210,430);
	 floodfill(182,417,15);

	  setfillstyle(SOLID_FILL, YELLOW);
	 school(240,416,240,430);
	 school(270,416,270,430);
	 floodfill(242,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(300,416,300,430);
	 school(330,416,330,430);
	 floodfill(302,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(360,416,360,430);
	 school(390,416,390,430);
	 floodfill(362,417,15);

	setfillstyle(SOLID_FILL, YELLOW);
	 school(420,416,420,430);
	 school(450,416,450,430);
	 floodfill(422,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(480,416,480,430);
	 school(510,416,510,430);
	 floodfill(482,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(540,416,540,430);
	 school(570,416,570,430);
	 floodfill(542,417,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(600,416,600,430);
	 school(630,416,630,430);
	 floodfill(602,417,15);


	school(0,348,660,380);  //road width
	school(0,335,640,336);    //road border




	 setfillstyle(SOLID_FILL, YELLOW);
	 school(0,335,0,348);
	 school(30,335,30,348);
	 floodfill(2,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(60,335,60,348);
	 school(90,335,90,348);
	 floodfill(62,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(120,335,120,348);
	 school(150,335,150,348);
	 floodfill(122,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(180,335,180,348);
	 school(210,335,210,348);
	 floodfill(182,337,15);

	  setfillstyle(SOLID_FILL, YELLOW);
	 school(240,335,240,348);
	 school(270,335,270,348);
	 floodfill(242,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(300,335,300,348);
	 school(330,335,330,348);
	 floodfill(302,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(360,335,360,348);
	 school(390,335,390,348);
	 floodfill(362,337,15);

	setfillstyle(SOLID_FILL, YELLOW);
	 school(420,335,420,348);
	 school(450,335,450,348);
	 floodfill(422,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(480,335,480,348);
	 school(510,335,510,348);
	 floodfill(482,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(540,335,540,348);
	 school(570,335,570,348);
	 floodfill(542,337,15);

	 setfillstyle(SOLID_FILL, YELLOW);
	 school(600,335,600,348);
	 school(630,335,630,348);
	 floodfill(602,337,15);

	//road between line
     //	school(50,378,150,378);
     //	school(200,378,300,378);
     //	school(350,378,450,378);
     //	school(500,378,600,378);
       //sun
      setfillstyle(SOLID_FILL, YELLOW);
       circle(360,80,40);
      floodfill(362,82,15);


       //tree
       setfillstyle(SOLID_FILL,BROWN);
	school(240,300,250,335); //left side
       school(250,300,250,335);  //right side
       school(240,335,250,335);  //buttom line
       school(240,300,250,300);//top line
       floodfill(242,301,15);
       //first tringle
       setfillstyle(SOLID_FILL,GREEN);
       line(220,300,270,300); //top line
       line(220,300,245,260);
       line(270,300,245,260);
       floodfill(222,299,15);
       //2nd tringle
       setfillstyle(SOLID_FILL,GREEN);
       line(220,285,270,285); //top line
       line(220,285,245,245);
       line(270,285,245,245);
       floodfill(222,284,15);




       //tree
       setfillstyle(SOLID_FILL,BROWN);
	school(560,300,560,335); //left side
       school(570,300,570,335);  //right side
       school(560,335,570,335);  //buttom line
       school(560,300,570,300);//top line
       floodfill(561,301,15);
       //first tringle
       setfillstyle(SOLID_FILL,GREEN);
       line(540,300,590,300); //top line
       line(540,300,565,260);
       line(590,300,565,260);
       floodfill(542,299,15);
       //2nd tringle
       setfillstyle(SOLID_FILL,GREEN);
       line(540,285,590,285); //top line
       line(540,285,565,245);
       line(590,285,565,245);
       floodfill(542,284,15);

	//building
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	school(20,200,20,335); //left line
	school(100,200,100,335); //right line
	school(20,200,100,200); //top line
	school(20,335,100,335); //buttom line
	floodfill(22,202,15);
	//gate
	setfillstyle(XHATCH_FILL, RED);
	school(40,290,80,290);  //top line
	school(40,290,40,335); //left line
	school(60,290,60,335); //between line
	floodfill(42,292,15);
	setfillstyle(XHATCH_FILL, RED);
	school(61,290,61,335); //between line
	school(80,290,80,335);//right line
	floodfill(62,292,15);
	//window
	setfillstyle(XHATCH_FILL, YELLOW);
	school(30,250,60,250);  //top line
	school(30,250,30,280); //left line
	school(60,250,60,280);//right line
	school(30,280,60,280);  //buttom line
	floodfill(32,252,15);

	setfillstyle(HATCH_FILL, YELLOW);
	school(30,210,60,210);  //top line
	school(30,210,30,240); //left line
	school(60,210,60,240);//right line
	school(30,240,60,240);  //buttom line
	floodfill(32,212,15);

	setfillstyle(XHATCH_FILL, BLUE);
	school(65,210,95,210);  //top line
	school(65,210,65,280); //left line
	school(95,210,95,280);//right line
	school(65,280,95,280);  //buttom line
	floodfill(72,212,15);


	//building
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	school(110,100,110,335); //left line
	school(210,100,210,335); //right line
	school(110,100,210,120); //top line
	school(110,335,210,335); //buttom line
	floodfill(112,102,15);

	//name
	outtextxy(140,117,"TOWER");
	setfillstyle(XHATCH_FILL,BLUE);
	school(120,110,200,110);   //top line
	school(120,130,200,130);   //buttom line
	school(120,110,120,130);   //left line
	school(200,110,200,130);   //right line
	floodfill(122,112,15);
     //left //window
       setfillstyle(XHATCH_FILL,RED);
       school(120,160,130,160);  //top line
       school(120,160,120,280); //left line
       school(130,160,130,280); //right line
       school(120,280,130,280); //buttom line
       floodfill(122,162,15);
       //1st window
       setfillstyle(HATCH_FILL,CYAN);
       school(140,160,180,160);  //top
       school(140,160,140,180);  //left
       school(180,160,180,180);    //right
       school(140,180,180,180);  //buttom
       floodfill(142,162,15);
       //2nd window
       setfillstyle(HATCH_FILL,CYAN);
       school(140,190,180,190);  //top
       school(140,190,140,210);  //left
       school(180,190,180,210);    //right
       school(140,210,180,210);  //buttom
       floodfill(142,192,15);
       //3rd window
       setfillstyle(HATCH_FILL,CYAN);
       school(140,220,180,220);  //top
       school(140,220,140,240);  //left
       school(180,220,180,240);    //right
       school(140,240,180,240);  //buttom
       floodfill(142,222,15);
       //4th window
	setfillstyle(HATCH_FILL,CYAN);
       school(140,250,180,250);  //top
       school(140,250,140,270);  //left
       school(180,250,180,270);    //right
       school(140,270,180,270);  //buttom
       floodfill(142,252,15);

	//right	//window
       setfillstyle(XHATCH_FILL,RED);
       school(190,160,200,160);  //top line
       school(190,160,190,280); //left line
       school(200,160,200,280); //right line
       school(190,280,200,280); //buttom line
       floodfill(192,162,15);

	//gate
	setfillstyle(XHATCH_FILL, RED);
	school(130,290,180,290);  //top line
	school(130,290,130,335); //left line
	school(155,290,155,335); //between line
	floodfill(132,292,15);
	setfillstyle(XHATCH_FILL, RED);
	school(156,290,156,335); //between line
	school(180,290,180,335);//right line
	floodfill(157,292,15);

	//house
	 setfillstyle(SOLID_FILL, LIGHTBLUE);
	school(440,270,440,335);  //left line
	 school(520,270,520,335); //rigt line
	 school(440, 270,520,270);  //top line
	school(440,335,530,335); //buttom line
	floodfill(442,272,15);

	//tringle
	 setfillstyle(SOLID_FILL, RED);
	 school(420, 270,540,270);  //top line
	 line(420,270,480,220); //left line
       line(540,270,480,220); //right line
	floodfill(422,269,15);


		 //door
	 setfillstyle(XHATCH_FILL,BLUE);
	  school(450,290,450,335);     //left
	  school(470,290,470,335);    //right
	  school(450,290,470,290);    //top
	  school(450,335,470,335);    //buttom
	  floodfill(452,292,15);

	  //house window
	  setfillstyle(HATCH_FILL,RED);
	school(480,300,480,320);        //left
	  school(510,300,510,320);       //right
	  school(480, 300,510,300);     //top
	school(480,320,510,320); //buttom
	   floodfill(482,302,15);






	//house
	 setfillstyle(SOLID_FILL, LIGHTBLUE);
	 school(300,270,300,335);  //left line
	 school(390,270,390,335); //rigt line
	 school(300, 270,390,270);  //top line
	 school(300,335,390,335); //buttom line
	floodfill(302,272,15);
	 //tringle
	 setfillstyle(SOLID_FILL, RED);
	 school(280, 270,410,270);  //top line
	 line(280,270,345,220); //left line
	 line(410,270,345,220); //right line
	 floodfill(282,269,15);
	 //door
	 setfillstyle(XHATCH_FILL,BLUE);
	  school(310,290,310,335);     //left
	  school(330,290,330,335);    //right
	  school(310,290,330,290);    //top
	  school(310,335,330,335);    //buttom
	  floodfill(312,292,15);

	  //house window
	  setfillstyle(HATCH_FILL,RED);
	  school(340,300,340,320);        //left
	  school(380,300,380,320);       //right
	  school(340, 300,380,300);     //top
	  school(340,320,380,320); //buttom
	   floodfill(342,302,15);

////////////////////////////////////////////////////
       for(i=0;i<=640;i=i+10,i++)

	{
	setcolor(WHITE);
      //	  setfillstyle(SOLID_FILL,RED);
	  circle(60+i,400,15); //back tyre
		  //	  floodfill(62+i,402,15);

       //	  setfillstyle(SOLID_FILL,RED);
	  // circle main x ki value 140 +i hai ... loop main i 10 ki hisaab se agae bhr rha hai to..
	  //usi trh circle b agae brhe ga . 10 pxl k hisaab se
	  circle(140+i,400,15);   //front tyre
       //	  floodfill(142+i,402,15);
	  //car body
	 // setfillstyle(SOLID_FILL, YELLOW);
	  line(80+i,400,120+i,400); //car buttom line
	  arc(60+i, 400, 0, 180, 20); //back typr cover
	  arc(140+i,400,0,180,20); //front tyre cover
	  line(10+i,400,40+i,400); //back tyre line
	  line(160+i,400,190+i,400); //front tyre line

	  line(190+i,400,190+i,370);//front tyre line
	  line(10+i,400,10+i,370);  //tyre back line//
	  line(10+i,370,190+i,370); //tyre back line

     //	setfillstyle(SOLID_FILL,LIGHTGRAY);
	  line(50+i,370,70+i,350); // back line connect with top line
	  line(70+i,350,120+i,350); //car top line
	  line(120+i,350,150+i,370);
       //	   floodfill(52+i,372,15);
   //	line(0,348,660,348);  //road width
 //	line(0,335,640,336);    //road border   // border line hai road ka

	   delay(200);
	   setcolor(BLACK);
      //	setfillstyle(SOLID_FILL,RED);
	  circle(60+i,400,15); //back tyre
		  //	  floodfill(62+i,402,15);

       //	  setfillstyle(SOLID_FILL,RED);
	  // circle main x ki value 140 +i hai ... loop main i 10 ki hisaab se agae bhr rha hai to..
	  //usi trh circle b agae brhe ga . 10 pxl k hisaab se
	  circle(140+i,400,15);   //front tyre
       //	  floodfill(142+i,402,15);
	  //car body
	 // setfillstyle(SOLID_FILL, YELLOW);
	  line(80+i,400,120+i,400); //car buttom line
	  arc(60+i, 400, 0, 180, 20); //back typr cover
	  arc(140+i,400,0,180,20); //front tyre cover
	  line(10+i,400,40+i,400); //back tyre line
	  line(160+i,400,190+i,400); //front tyre line

	  line(190+i,400,190+i,370);//front tyre line
	  line(10+i,400,10+i,370);  //tyre back line//
	  line(10+i,370,190+i,370); //tyre back line

     //	setfillstyle(SOLID_FILL,LIGHTGRAY);
	  line(50+i,370,70+i,350); // back line connect with top line
	  line(70+i,350,120+i,350); //car top line
	  line(120+i,350,150+i,370);
       //	   floodfill(52+i,372,15);

    //	line(0,348,660,348);  //road width
    //	line(0,335,640,336);    //road border   // border line hai road ka

    //  cleardevice();
}


getch();
closegraph();
}

