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
