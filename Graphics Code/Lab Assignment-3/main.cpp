#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846
GLfloat r=0.0f;

void display() {
	glClearColor(0,1,1,1); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glBegin(GL_POLYGON);
	glColor3ub(102, 153, 153);
	glVertex2f(-0.9,0.8);
	glVertex2f(-0.9,0.6);
	glVertex2f(-0.8,0.6);
	glVertex2f(-0.6,.7);
	glVertex2f(-0.4,.6);
    glVertex2f(-0.3,.6);
    glVertex2f(-0.1,0.7);
	glVertex2f(-0.1,0.6);
    glVertex2f(0.1,0.6);
	glVertex2f(0.2,.7);
	glVertex2f(0.4,.6);
    glVertex2f(0.5,.6);
    glVertex2f(0.5,0.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 204, 102);
	glVertex2f(-0.88,0.6);
	glVertex2f(-0.88,0.3);
	glVertex2f(-0.35,0.3);
	glVertex2f(-0.35,0.6);
	glEnd();

		glBegin(GL_QUADS);
	glColor3ub(51, 102, 153);
	glVertex2f(-0.35,0.6);
	glVertex2f(-0.35,0.3);
	glVertex2f(0.15,0.3);
	glVertex2f(0.15,0.6);
	glEnd();

		glBegin(GL_QUADS);
	glColor3ub(102, 153, 153);
	glVertex2f(0.05,0.6);
	glVertex2f(0.05,0.3);
	glVertex2f(0.46,0.3);
	glVertex2f(0.46,0.6);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(51, 153, 102);
	glVertex2f(-0.92,0.3);
	glVertex2f(-0.92,0.0);
	glVertex2f(0.52,0.0);
	glVertex2f(0.52,0.3);
	glEnd();


    glBegin(GL_QUADS);
	glColor3ub(179, 217, 255);
	glVertex2f(-1,0.0);
	glVertex2f(-1,-0.9);
	glVertex2f(1,-0.9);
	glVertex2f(1,0.0);
	glEnd();

	    glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex2f(-1,-0.9);
	glVertex2f(-1,-1);
	glVertex2f(1,-1);
	glVertex2f(1,-0.9);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(51, 102, 204);
	glVertex2f(-0.75,-0.6);
	glVertex2f(-0.78,-0.65);
	glVertex2f(-0.7,-0.7);
	glVertex2f(0.0,-0.7);
	glVertex2f(0.05,-0.65);
    glVertex2f(-0.25,-.5);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0,0,0);
	glVertex2f(-0.22,-0.62);
    glVertex2f(-0.35,-0.62);
    glVertex2f(-0.6,-0.88);
    glEnd();

	int i;

	GLfloat x=-.6f; GLfloat y=-.76f; GLfloat radius =.07f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();


    GLfloat p=-.2f; GLfloat q=-.76f;
	//int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	//GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(153, 153, 255);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(153, 153, 255);
	glVertex2f(-0.27,-0.52);
    glVertex2f(-0.03,-0.63);
    glVertex2f(-0.21,-0.63);
    glEnd();


    /*



    */

    glTranslatef(.7,.4,0);

    	glBegin(GL_POLYGON);
	glColor3ub(51, 102, 204);
	glVertex2f(-0.75,-0.6);
	glVertex2f(-0.78,-0.65);
	glVertex2f(-0.7,-0.7);
	glVertex2f(0.0,-0.7);
	glVertex2f(0.05,-0.65);
    glVertex2f(-0.25,-.5);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0,0,0);
	glVertex2f(-0.22,-0.62);
    glVertex2f(-0.35,-0.62);
    glVertex2f(-0.6,-0.88);
    glEnd();



	//GLfloat radius = 0.8f; //radius


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();



	//int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	//GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(153, 153, 255);
		glVertex2f(p, q); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            p + (radius * cos(i *  twicePi / triangleAmount)),
			    q + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(153, 153, 255);
	glVertex2f(-0.27,-0.52);
    glVertex2f(-0.03,-0.63);
    glVertex2f(-0.21,-0.63);
    glEnd();

    ///////////////////////////////////////
    glLoadIdentity();
    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.75,.8);
    glVertex2f(.75,.0);
    glEnd();

    //////////////////////////////////
    glScalef(.5,.5,0);
    glTranslatef(1.75,1.6,0);

    glBegin(GL_POLYGON);
	glColor3ub(51, 102, 204);
	glVertex2f(-0.75,-0.6);
	glVertex2f(-0.78,-0.65);
	glVertex2f(-0.7,-0.7);
	glVertex2f(0.0,-0.7);
	glVertex2f(0.05,-0.65);
    glVertex2f(-0.25,-.5);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0,0,0);
	glVertex2f(-0.22,-0.62);
    glVertex2f(-0.35,-0.62);
    glVertex2f(-0.6,-0.88);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(153, 153, 255);
	glVertex2f(-0.27,-0.52);
    glVertex2f(-0.03,-0.63);
    glVertex2f(-0.21,-0.63);
    glEnd();

    glLoadIdentity();

    glPushMatrix();
    glTranslatef(.75,.8,0);
    glRotatef(r,0,0,1);

    glBegin(GL_LINES);
    glVertex2f(.0,.0);
    glVertex2f(.1,.2);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.0,.0);
    glVertex2f(-.1,.2);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.0,.0);
    glVertex2f(-.1,-.2);
    glEnd();

    glPopMatrix();
    r-=.1;



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



