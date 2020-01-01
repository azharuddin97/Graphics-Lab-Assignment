#include<windows.h>
#include<GL/glut.h>
void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(0,1);
    glVertex2f(0,-1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.7,.7);
    glVertex2f(-.3,.7);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.7,.7);
    glVertex2f(-.5,.4);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.3,.7);
    glVertex2f(-.5,.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(0.3,0.7);
    glVertex2f(0.3,0.3);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,0.7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0,0,1);
    glVertex2f(.3,-.7);
    glVertex2f(.7,-.7);
    glVertex2f(.5,-.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex2f(-0.3,-0.7);
    glVertex2f(-0.2,-0.6);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.3,-0.1);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.8,-0.6);
    glVertex2f(-0.7,-0.7);
    glEnd();

    glFlush();
}
int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("OpenGLSetupTest");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
