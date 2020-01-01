#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat p=0.0f;
GLfloat q=0.0f;
GLfloat r=0.0f;

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	int i;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.85f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glPushMatrix();
    glRotatef(p,0,0,1);
    glBegin(GL_QUADS);
	glColor3ub(255, 51, 0);
	glVertex2f(0.03,-0.4);
    glVertex2f(0.03,0.06);
    glVertex2f(-0.03,0.06);
	glVertex2f(-0.03,-0.4);
	glEnd();
    glPopMatrix();
    p=p+.003;

    glPushMatrix();
    glRotatef(q,0,0,1);
	glBegin(GL_QUADS);
	glColor3ub(255, 51, 0);
	glVertex2f(0.0,0.06);
	glVertex2f(0.04,0.05);
    glVertex2f(-0.5,-0.56);
	glVertex2f(-0.54,-0.55);
	glEnd();
    glPopMatrix();
    q=q+.007;

    glPushMatrix();
    glRotatef(r,0,0,1);
    glBegin(GL_QUADS);
	glColor3ub(255, 51, 0);
    glVertex2f(-0.0,0.07);
	glVertex2f(-0.02,0.05);
    glVertex2f(0.4,-0.48);
	glVertex2f(0.42,-0.45);
	glEnd();
    glPopMatrix();
    r=r+.1;

	glFlush();  // Render now
}

void idle(){
    glutPostRedisplay();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutIdleFunc(idle);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}



