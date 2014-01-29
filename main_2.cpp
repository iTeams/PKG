#include "stdafx.h"
#include "glut.h"
double i;
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
