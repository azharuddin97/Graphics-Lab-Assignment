#include<windows.h>
#include<GL/glut.h>

void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(.8,.7);
    glVertex2f(-.5,.7);
    glVertex2f(-.5,.45);
    glVertex2f(.8,.45);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(255, 92, 51);
    glVertex2f(.8,.45);
    glVertex2f(-.5,.45);
    glVertex2f(-.5,.2);
    glVertex2f(.8,.2);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(255, 173, 51);
    glVertex2f(.8,.2);
    glVertex2f(-.5,.2);
    glVertex2f(-.5,-.05);
    glVertex2f(.8,-.05);
    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.65,.75);
    glVertex2f(-.65,-.9);
    glVertex2f(-.55,-.9);
    glVertex2f(-.55,.75);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 173, 51);
    glVertex2f(-.5,.69);
    glVertex2f(-.55,.69);
    glEnd();

        glBegin(GL_LINES);
    glColor3ub(255, 173, 51);
    glVertex2f(-.5,-.04);
    glVertex2f(-.55,-.04);
    glEnd();

    glFlush();
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
