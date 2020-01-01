#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>

# define PI           3.14159265358979323846
GLfloat p=0.1f;


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
if(p==0){
    return;
}
glLoadIdentity();
glPushMatrix();
glRotatef(p,0,0,1);
	int i;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(102, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(102, 102, 153);
	glVertex2f(-0.65,0.75);
    glVertex2f(-0.75,0.65);
    glVertex2f(0.65,-0.75);
    glVertex2f(0.75,-0.65);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(102, 102, 153);
	glVertex2f(0.65,0.75);
    glVertex2f(0.75,0.65);
    glVertex2f(-0.65,-0.75);
    glVertex2f(-0.75,-0.65);
    glEnd();
glPopMatrix();
p+=.2;

	glFlush();  // Render now
}

void idle(){
    glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    display();
    break;
case 'w':
    p=0.0f;
    break;
case 's':
    p=0.5;
    display();
    break;

glutPostRedisplay();
	}
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutIdleFunc(idle);
	glutKeyboardFunc(handleKeypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

