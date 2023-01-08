




#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include <math.h>


//input

float zRotated = 0.0,qx,qz;
//----------------------keyboard--------------------------
void keyboard(unsigned char Key,int x,int y)
    {
   if(Key=='s'){qz-=0.1;} if(Key=='w'){qz+=0.1;}
   if(Key=='a'){qx-=0.1;} if(Key=='d'){qx+=0.1;}
    
    


    glutPostRedisplay();
    }
void onMouseClick(int button, int state, int x, int y)
{
    if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
    {

        qx-=0.1;
    }
}


void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}




void planet()
{
    //moon

glColor3f (0.64, 0.68, 0.82);
       glPushMatrix ();
       glTranslatef    (-8.5, 3.8, 0.0);
       glRotatef       (60.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);
       glutSolidSphere (0.8, 25, 30);
       glPopMatrix ();



//planets



//planet 1

glColor3f (0.0, 0.5, 0.5);
       glPushMatrix ();
       glTranslatef    (-4.5+qx, 3.4+qz, 0.0);
       glRotatef       (60.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);

       glutSolidSphere (1.2, 25, 30);
       glPopMatrix ();







//planet 2

glColor3f (0.69, 0.93, 0.93);
       glPushMatrix ();
       glTranslatef    (-0.5+qx, 3.0+qz, 0.0);
       glRotatef       (60.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);

       glutSolidSphere (0.7, 25, 30);
       glPopMatrix ();






//planet 3

glColor3f (0.63, 0.84, 0.71);
       glPushMatrix ();
       glTranslatef    (3.5, 2.6, 0.0);
       glRotatef       (60.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);

       glutSolidSphere (0.5, 25, 30);
       glPopMatrix ();






//planet 4

glColor3f (0.04, 0.73, 0.71);
       glPushMatrix ();
       glTranslatef    (7.5, 2.2, 0.0);
       glRotatef       (60.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);

       glutSolidSphere (1.0, 25, 30);
       glPopMatrix ();




}
void pyramid()
{
    //pyramid 1


 glLoadIdentity();
   glTranslatef(-2.71f, -1.35f, -6.0f);

   glBegin(GL_TRIANGLES);
      // Front
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glColor3f(1.0f, 0.88f, 0.0f);
      glVertex3f(1.0f, -1.0f, 1.0f);

      // Right
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(0.0f, 0.99f, 0.0f);
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(0.99f, -0.99f, 0.99f);
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(0.99f, -0.99f, -0.99f);

      // Back
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(1.0f, -1.0f, -1.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-1.0f, -1.0f, -1.0f);

      // Left
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f(-1.0f,-1.0f,-1.0f);
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f(-1.0f,-1.0f, 1.0f);
   glEnd();



//pyramid 2

   glLoadIdentity();
   glTranslatef(-0.85f, -1.39f, -6.0f);

   glBegin(GL_TRIANGLES);
      // Front
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f( 0.0f, 0.6f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-0.6f, -0.6f, 0.6f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.6f, -0.6f, 0.6f);

      // Right
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(0.0f, 0.6f, 0.0f);
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(0.6f, -0.6f, 0.6f);
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(0.6f, -0.6f, -0.6f);

      // Back
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.0f, 0.6f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.6f, -0.6f, -0.6f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-0.6f, -0.6f, -0.6f);

      // Left
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f( 0.0f, 0.6f, 0.0f);
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f(-0.6f,-0.6f,-0.6f);
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f(-0.6f,-0.6f, 0.6f);
   glEnd();




//pyramid 3

   glLoadIdentity();
   glTranslatef(0.15f, -1.65f, -6.0f);

   glBegin(GL_TRIANGLES);
      // Front
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f( 0.0f, 0.5f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-0.5f, -0.5f, 0.5f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.5f, -0.5f, 0.5f);

      // Right
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.0f, 0.5f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.5f, -0.5f, 0.5f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.5f, -0.5f, -0.5f);

      // Back
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.0f, 0.5f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.5f, -0.5f, -0.5f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-0.5f, -0.5f, -0.5f);

      // Left
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f( 0.0f, 0.5f, 0.0f);
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(-0.5f,-0.5f,-0.5f);
      glColor3f(0.98f, 0.91f, 0.71f);
      glVertex3f(-0.5f,-0.5f, 0.5f);
   glEnd();



}
void stars()
{
    //stars
glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-3,0,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-6,-1,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-2,1,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (8,2,-10);
glRotatef       (90.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();


glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (10,2,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-1,4.,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();





glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-4,2,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (5,1,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-7,3,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-10,1,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-8,2.5,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();






glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (6,2.5,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (9,3,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (8,1.5,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-11,2,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-12,1,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();





glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-13,2,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-13,4,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();





glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (-12,2.5,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();




glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (4.5,2,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();

glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (3.0,3,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();


glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (2.5,2,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();

glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (9,1,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (1.5,1,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();



glColor3f (1.0, 1.0, 1.0);
glPushMatrix ();
glTranslatef    (1,2,-10);
glRotatef       (70.0, 1,0,0);
glRotatef       (zRotated, 0,0,1);
glutSolidSphere (0.1, 6, 30);
glPopMatrix ();

}
void display (void)
{

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    glTranslatef    (0.0, 0.0, -15.0);





planet();

pyramid();

stars();


//sand dunes
glPushMatrix();
glColor3f(0.88, 0.55, 0.24);
 glTranslatef(13,-8,-16);
 glutSolidSphere(7.0,500,30);
 glPopMatrix();



glPushMatrix();
glColor3f(0.88, 0.55, 0.24);
 glTranslatef(7,-10.5,-16);
 glutSolidSphere(7.0,500,30);
 glPopMatrix();



 glPushMatrix();
glColor3f(0.88, 0.55, 0.24);
 glTranslatef(-4,-10,-16);
 glutSolidSphere(7.0,500,30);
 glPopMatrix();



 glPushMatrix();
glColor3f(0.88, 0.55, 0.24);
 glTranslatef(-10,-10,-16);
 glutSolidSphere(7.0,500,30);
 glPopMatrix();



glPushMatrix();
glColor3f(0.88, 0.55, 0.24);
 glTranslatef(9,-10.5,-16);
 glutSolidSphere(7.0,500,30);
 glPopMatrix();





//debris

glLoadIdentity();
   glTranslatef(4.0f, -2.4f, -8.0f);
   glBegin(GL_QUADS);
      // Top face

      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f,  0.2f);
      glVertex3f( 0.2f, 0.2f,  0.2f);

      // Bottom face
      glColor3f(1.0f, 0.5f, 0.0f);
      glVertex3f( 0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f( 0.2f, -0.2f, -0.2f);

      // Front face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f, -0.2f, 0.2f);
      glVertex3f( 0.2f, -0.2f, 0.2f);

      // Back face
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex3f( 0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f( 0.2f,  0.2f, -0.2f);

      // Left face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f(-0.2f,  0.2f,  0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);

      // Right face
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.2f,  0.2f, -0.2f);
      glVertex3f(0.2f,  0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f, -0.2f);
   glEnd();


glLoadIdentity();
   glTranslatef(3.0f, -2.3f, -8.0f);
   glBegin(GL_QUADS);
      // Top face

      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f,  0.2f);
      glVertex3f( 0.2f, 0.2f,  0.2f);

      // Bottom face
      glColor3f(1.0f, 0.5f, 0.0f);
      glVertex3f( 0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f( 0.2f, -0.2f, -0.2f);

      // Front face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f, -0.2f, 0.2f);
      glVertex3f( 0.2f, -0.2f, 0.2f);

      // Back face
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex3f( 0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f( 0.2f,  0.2f, -0.2f);

      // Left face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f(-0.2f,  0.2f,  0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);

      // Right face
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.2f,  0.2f, -0.2f);
      glVertex3f(0.2f,  0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f, -0.2f);
   glEnd();


glLoadIdentity();
   glTranslatef(2.0f, -2.5f, -8.0f);
   glBegin(GL_QUADS);
      // Top face

      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f,  0.2f);
      glVertex3f( 0.2f, 0.2f,  0.2f);

      // Bottom face
      glColor3f(1.0f, 0.5f, 0.0f);
      glVertex3f( 0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f( 0.2f, -0.2f, -0.2f);

      // Front face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f, -0.2f, 0.2f);
      glVertex3f( 0.2f, -0.2f, 0.2f);

      // Back face
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex3f( 0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f( 0.2f,  0.2f, -0.2f);

      // Left face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f(-0.2f,  0.2f,  0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);

      // Right face
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.2f,  0.2f, -0.2f);
      glVertex3f(0.2f,  0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f, -0.2f);
   glEnd();







glutSwapBuffers();

}



void idleFunc (void)
{
    zRotated += 1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}




int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize     (1000, 700);
    glutInitWindowPosition (70, 200);
    glutCreateWindow       ("20100797");

    glClearColor (1.0, 1.0, 1.0, 0.0);
     glutKeyboardFunc(keyboard);
    glutMouseFunc(onMouseClick);

    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutIdleFunc    (idleFunc);

    glClearColor(0.06,0.05,0.03,0);
    texture();


    glutMainLoop();
}
