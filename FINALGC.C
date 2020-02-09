#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

//ye dda line ki algo hai .. es  x y ki value nhe di wo..
// es algo main border color 15 hai mtlb white colr ka bordr line hai //
// total 16 color hote hai graphics main ..
// 0 se 15 tk .. apply krne k 2 method hai..
// ap number k likh b apply krste or color ka naam b likh k..
//shool k naam se function bnaya hai usi  main dda ki algo likha hai
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
putpixel(x,y,WHITE); // white color bordr color hai ..
x=x+dx;
y= y+dy;
i=i+1;
}
}
void main(){
	int i;
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	//ye loop car move krne k lye apply kya hai ..
// i ki value 0 rkha hai mtlb zero se start hoga ..
//or zyada se zydada 640 tk hi chle ..mtlb ye b x ki value hi 0 se 640 tk ..
// graphics ki screen 480 X 640 hai ...
// i= i+10 ka mtlb ye hai k x 10 pixl k hissab se aagae brhe..


///////////////////    //Road footpath
	  // brown color waali pti hai last waali
	 setfillstyle(SOLID_FILL, BROWN);
	school(0,430,640,430); // footpath
	school(0,416,640,416); // footpath border
	 floodfill(2,432,15);
	 // last line yellow colr wala foothpath hai ...
       // ye footpath border line hai ...  yellow color wala
	 setfillstyle(SOLID_FILL, YELLOW);
	 school(0,416,0,430);  // es main y ki value same hai or x ki value change ho rhai hai ...
	 // 30 pixal defference rkha hai
	 school(30,416,30,430);
	 floodfill(2,417,15);
	// neche b same hi hai srf x ki value 30 plus hota arha hai
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

	// ye main road hai ...   348 se 380 tk pixl hai
	line(0,348,660,348);  //road width
	line(0,335,640,336);    //road border   // border line hai road ka


	// road k opr wala foothpath ya b x ki valye 30 pixl ka dffrence rkha hai
	// yaha coding mene opr ki copy pase ki hai srf y ki value change ki
	//or wali coding main y1 = 416, y=430 tha ..
	// yaha 335, or 348 hai ...
	// baki same hi hai ..

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

     // ye road ki center waali line hai ...x ki 100 pxl hai or 50 pixal ka dffrence

	//road between line
 //	school(50,378,150,378);  // 50 se 100
  //	school(200,378,300,378); // 200 se 300
  //	school(350,378,450,378);   //
  //	school(500,378,600,378);  //
       //sun        // soraj
       setfillstyle(SOLID_FILL, YELLOW);
       circle(360,80,40);
       floodfill(362,82,15);

	setfillstyle(SOLID_FILL, CYAN);       // hourse or building k piche wala backgroung hai
	line(0,160,640,160);  // house and building background
	school(0,335,640,335);  //
	floodfill(2,182,15);
	//blue sky
	setfillstyle(SOLID_FILL, BLUE);
	school(0,0,640,0);
	school(0,159,640,159);
	floodfill(1,1,15);

       //hills
       setfillstyle(SOLID_FILL,BROWN);
       school(0,159,640,159); // buttom line
       line(0,159,90,50);   // left line
       line(180,159,90,50);  // right side line
       floodfill(2,158,15);

	setfillstyle(SOLID_FILL,BROWN);
       school(0,159,640,159);  //buttom line
       line(180,159,270,50);   //left line
       line(360,159,270,50);   //right line
       floodfill(182,158,15);

      setfillstyle(SOLID_FILL,BROWN);
       school(0,159,640,159); //buttom line
       line(360,159,450,50); //left
       line(540,159,450,50); //right
       floodfill(362,158,15);
       setfillstyle(SOLID_FILL,BROWN);
       school(0,159,640,159);  //buttom
       line(540,159,590,50);   //left
       line(630,159,590,50);   //right
       floodfill(542,158,15);
////////////////////////////////////////
       //tree  ki coding
//////////////////////////////////////////
       setfillstyle(SOLID_FILL,BROWN);
	school(240,300,250,335); //left side
       school(250,300,250,335);  //right side
       school(240,335,250,335);  //buttom line
       school(240,300,250,300);//top line
       floodfill(242,301,15);
       //first tringle
       setfillstyle(SOLID_FILL,GREEN);
       line(220,300,270,300); //top line
       line(220,300,245,260); //left
       line(270,300,245,260); //right
       floodfill(222,299,15);  // color fill krne k lye x ki value main 2 add kya hai or y ki value main ek manus kya hai ..
       //2nd tringle
       setfillstyle(SOLID_FILL,GREEN);
       line(220,285,270,285); //top line
       line(220,285,245,245); //left
       line(270,285,245,245); //right
       floodfill(222,284,15);

       // school ki coding k sath side mai line k comment dye hai dekh lena
	//School Buidling
////////////////////////////////////////////////////////////////////
	outtextxy(320,275,"The City School");
	 setfillstyle(SOLID_FILL, LIGHTBLUE);  // school ki building ka front side coding hai
	school(300,200,460,200);     //top line
	school(300,200,300,336); //left Line
	school(460,200,460,336);  //right line
	school(300,335,460,335);  //buttom line
	 floodfill(302,202,15);
	  setfillstyle(SOLID_FILL, LIGHTBLUE); //school ki right side ki coding hai
	school(500,170,500,306); //right side back line
  //	school(460,326,500,335);  //right side buttom
	line(460,335,500,306);  //right side buttom line  // line apply ki hwi .. es wja k school function tringle wali line nhe bnti
	line(460,200,500,170); //right side top line
	floodfill(462,202,15);
	 setfillstyle(SOLID_FILL, LIGHTBLUE); // school k top side ka back waali coding hai ..
	school(340, 170,500,170); //top back line
	line(460,200,500,170); //right side top line
	line(300,200,340,170);   //top left side line
	floodfill(342,172,15);
	//school gate
	setfillstyle(WIDE_DOT_FILL, RED);
	school(350,300,400,300);     //top line
	school(350,300,350,335); //left Line
	school(400,300,400,335);  //right line
	school(350,335,400,335);  //buttom line
   //    setfillstyle(SOLID_FILL, RED);
       floodfill(352,302,15);
     // column ki hisaab se windows bni hi hai ..
	// col ki window bnae gy to ... y ki value change hogi..  x ki value same rhae gi..
	// kb row ki window bnae gy to ... x ki value change hongi ,. baki y ki value same hi rhke gy
     // pehle ek colum ki window bnaya hai to dusre row main srf y ki value change ki to dusre colum ki b winodw bn gai.. es trh hr row ki bne gi
	//school window starting left side 1st col & 1st row
	setfillstyle(HATCH_FILL, RED);  // HATCH color fill pettern hai ,.
	school(310,210,330,210);     //top line
	school(310,210,310,230); //left Line
	school(330,210,330,230);  //right line
	school(310,230,330,230); //buttom line
	floodfill(312,212,15);
	//school window 1st col & 2nd row   //row main srf x ki value change kya hai baaki y ki value same rkhi hai ..
	setfillstyle(HATCH_FILL, RED);
	school(310,240,330,240);     //top line
	school(310,240,310,260); //left Line
	school(330,240,330,260);  //right line
	school(310,260,330,260); //buttom line
	floodfill(312, 242,15);
       /*
	//school window 1st col & 3rd row           // coding hide hai extra windows ki coding hai ye
	setfillstyle(HATCH_FILL, RED);
	school(310,270,330,270);     //top line
	school(310,270,310,290); //left Line
	school(330,270,330,290);  //right line
	school(310,290,330,290); //buttom line
	floodfill(312,272,15);
	 */

	//school window 2nd col 1nd row
	setfillstyle(HATCH_FILL, RED);
	school(340,210,360,210);     //top line
	school(340,210,340,230); //left Line
	school(360,210,360,230);  //right line
	school(340,230,360,230); //buttom line
	floodfill(342,212,15);

	//school window 2nd col & 2nd row
	setfillstyle(HATCH_FILL, RED);
	school(340,240,360,240);     //top line
	school(340,240,340,260); //left Line
	school(360,240,360,260);  //right line
	school(340,260,360,260); //buttom line
	floodfill(342,242,15);
       /*

	//school window 2nd col & 3rd row
	setfillstyle(HATCH_FILL, RED);
	school(340,270,360,270);     //top line
	school(340,270,340,290); //left Line
	school(360,270,360,290);  //right line
	school(340,290,360,290); //buttom line
	floodfill(342,272,15);
	 */

	//school window 3rd col 1nd row
	setfillstyle(HATCH_FILL, RED);
	school(370,210,390,210);     //top line
	school(370,210,370,230); //left Line
	school(390,210,390,230);  //right line
	school(370,230,390,230); //buttom line
	floodfill(372,212,15);
	//school window 2nd col & 2nd row
	setfillstyle(HATCH_FILL, RED);
	school(370,240,390,240);     //top line
	school(370,240,370,260); //left Line
	school(390,240,390,260);  //right line
	school(370,260,390,260); //buttom line
	floodfill(372,242,15);

       /*
	//school window 2nd col & 3rd row
	setfillstyle(HATCH_FILL, RED);
	school(370,270,390,270);     //top line
	school(370,270,370,290); //left Line
	school(390,270,390,290);  //right line
	school(370,290,390,290); //buttom line
	floodfill(372,272,15);
	 */

	//school window 4th col 1nd row
	setfillstyle(HATCH_FILL, RED);
	school(400,210,420,210);     //top line
	school(400,210,400,230); //left Line
	school(420,210,420,230);  //right line
	school(400,230,420,230); //buttom line
	floodfill(402,212,15);
	//school window 2nd col & 2nd row
	setfillstyle(HATCH_FILL, RED);
	school(400,240,420,240);     //top line
	school(400,240,400,260); //left Line
	school(420,240,420,260);  //right line
	school(400,260,420,260); //buttom line
	floodfill(402,242,15);
       /*
	//school window 2nd col & 3rd row
	setfillstyle(HATCH_FILL, RED);
	school(400,270,420,270);     //top line
	school(400,270,400,290); //left Line
	school(420,270,420,290);  //right line
	school(400,290,420,290); //buttom line
	floodfill(402,272,15);
	 */

	//school window 5th col 1nd row
	setfillstyle(HATCH_FILL, RED);
	school(430,210,450,210);     //top line
	school(430,210,430,230); //left Line
	school(450,210,450,230);  //right line
	school(430,230,450,230); //buttom line
	floodfill(432,212,15);
	//school window 2nd col & 2nd row
	setfillstyle(HATCH_FILL, RED);
	school(430,240,450,240);     //top line
	school(430,240,430,260); //left Line
	school(450,240,450,260);  //right line
	school(430,260,450,260); //buttom line
	floodfill(432,242,15);
       /*
	//school window 2nd col & 3rd row
	setfillstyle(HATCH_FILL, RED);
	school(430,270,450,270);     //top line
	school(430,270,430,290); //left Line
	school(450,270,450,290);  //right line
	school(430,290,430,290); //buttom line
	floodfill(432,270,15);
	 */
////////////////////////////////////////////////////////////////////

       //tree            // right side tree
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
 ////////////////////////////////////////////////////////////////////
       //house    ki coding main school ki coding trh hi hai
	setfillstyle(SOLID_FILL, LIGHTBLUE);
       school(50,335,180,335); //buttom line
       school(50,250,50,335); // left side line
       school(180,250,180,335);   //right side line
       school(30,250,200,250); //top line
       floodfill(52,252,15);
	setfillstyle(SOLID_FILL, YELLOW);
       school(60,200,180,220);   //top line
       line(30,250,60,200); //top left side line
       line(200,250,180,200); //top right side line
       floodfill(62,202,15);
       //house door
	setfillstyle(HATCH_FILL, RED);
       school(70,280,70,334);  //left line
       school(100,280,100,334); //right line
       school(70,280,100,280);  //top line
       school(70,334,100,334);  //buttom line
       floodfill(72,282,15);
       // house window
	setfillstyle(HATCH_FILL, RED);
       school(120,290,170,290);   //window top line
       school(120,320,170,320);  //buttom side line
       school(120, 290,120,320); //left side line
       school(170,290,170,320);  //right side line
       floodfill(122,292,15);

       //////////////////////////////////////////////////////////
       for(i=0;i<=640;i=i+10,i++)

	{
	setcolor(WHITE);
	  circle(60+i,400,15); //back tyre
	  circle(140+i,400,15);   //front tyre

	  line(80+i,400,120+i,400); //car buttom line
	  arc(60+i, 400, 0, 180, 20); //back typr cover
	  arc(140+i,400,0,180,20); //front tyre cover
	  line(10+i,400,40+i,400); //back tyre line
	  line(160+i,400,190+i,400); //front tyre line

	  line(190+i,400,190+i,370);//front tyre line
	  line(10+i,400,10+i,370);  //tyre back line//
	  line(10+i,370,190+i,370); //tyre back line


	  line(50+i,370,70+i,350); // back line connect with top line
	  line(70+i,350,120+i,350); //car top line
	  line(120+i,350,150+i,370);


	   delay(200);
	   setcolor(BLACK);
		  circle(60+i,400,15); //back tyre

	  circle(140+i,400,15);   //front tyre

	  line(80+i,400,120+i,400); //car buttom line
	  arc(60+i, 400, 0, 180, 20); //back typr cover
	  arc(140+i,400,0,180,20); //front tyre cover
	  line(10+i,400,40+i,400); //back tyre line
	  line(160+i,400,190+i,400); //front tyre line

	  line(190+i,400,190+i,370);//front tyre line
	  line(10+i,400,10+i,370);  //tyre back line//
	  line(10+i,370,190+i,370); //tyre back line


	  line(50+i,370,70+i,350); // back line connect with top line
	  line(70+i,350,120+i,350); //car top line
	  line(120+i,350,150+i,370);



}
getch();
closegraph();
}