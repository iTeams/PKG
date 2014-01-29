#include "stdafx.h"
#include "glut.h"
#include "math.h"

double pi=3.14,i,j,k=1,r=1,kut=270-45,x=0,y=10,R=4,t=2,p;

void stelya ()
{
	glVertex2f(-350,80);
	glVertex2f(350,80);
	glVertex2f(350,80);
	glVertex2f(350,70);
	glVertex2f(350,70);
	glVertex2f(-350,70);
	glVertex2f(-350,70);
	glVertex2f(-350,81);
}
void pidloga()
{
	glVertex2f(-350,-280);
	glVertex2f(350,-280);
	glVertex2f(350,-280);
	glVertex2f(350,-270);
	glVertex2f(350,-270);
	glVertex2f(-350,-270);
	glVertex2f(-350,-269);
	glVertex2f(-350,-280);
}
void stil()
{
	//verh
	glVertex2f(-250,-180);
	glVertex2f(250,-180);
	glVertex2f(250,-180);
	glVertex2f(250,-185);
	glVertex2f(250,-185);
	glVertex2f(-250,-185);
	glVertex2f(-250,-185);
	glVertex2f(-250,-179);
	//nizka_l
	glVertex2f(-150,-185);
	glVertex2f(-150,-270);
	glVertex2f(-150,-270);
	glVertex2f(-153,-270);
	glVertex2f(-153,-270);
	glVertex2f(-153,-185);
	//nizka_r
	glVertex2f(150,-185);
	glVertex2f(150,-270);
	glVertex2f(150,-270);
	glVertex2f(153,-270);
	glVertex2f(153,-270);
	glVertex2f(153,-185);
}
void raketka_l ()
{
	glVertex2f(-250,-35+i);
	glVertex2f(-247,-35+i);
	glVertex2f(-247,-35+i);
	glVertex2f(-247,-85+i);
	glVertex2f(-247,-85+i);
	glVertex2f(-250,-85+i);
	glVertex2f(-250,-85+i);
	glVertex2f(-250,-34+i);
}
void raketka_r ()
{
	glVertex2f(250,-35+i);
	glVertex2f(246,-35+i);
	glVertex2f(247,-35+i);
	glVertex2f(247,-85+i);
	glVertex2f(247,-85+i);
	glVertex2f(250,-85+i);
	glVertex2f(250,-85+i);
	glVertex2f(250,-35+i);
}
void kulka ()
{
	for(int j=0; j<=360; j++){glVertex2d(x+R*cos(j*pi/180), y+R*sin(j*pi/180));}
x=r*cos(kut*pi/180);
y=r*sin(kut*pi/180);
}
void project ()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	stelya();
	pidloga();
	stil();
	raketka_l();
	raketka_r();
	glEnd();
	glBegin(GL_POINTS);
	kulka();
	glEnd();
	glutSwapBuffers();
}
void Timer(int)
{
	r+=t;
	if(y<=-256){
		t=0;
		p=R;
		R=R+2;
		if(R==p*4){project();}
	}
	
	i+=k;
	if(-35+i==69)
		k=-1;
	if(-85+i==-179)
		k=1;
	project();
	glutTimerFunc(50,Timer,0);
}
void Init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-400,400,-300,100,-5,5);
	glMatrixMode(GL_MODELVIEW);
	
}
int main(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(800,400);
	glutInitWindowPosition(200,20);
	glutCreateWindow("iTeam");
	glutDisplayFunc(project);
	glutTimerFunc(50,Timer,0);
	Init();
	glutMainLoop();
	return 0;
}
 
