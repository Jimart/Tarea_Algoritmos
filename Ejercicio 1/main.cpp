#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
float x,y,h,k;
int i;
void display(void)
{
   



 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0.0f,0.0f,0.0f);
  glPointSize(2);

    glBegin(GL_POINTS);
  
   for (i=-10; i<=10;i+=1)   
    {  
		x=i;
		y= -(pow(x,2)/8) +8;
		glVertex2f(x,y);
    }
    // para dibujar el plano           
    for (i=-10; i<=10;i+=1)   
    {  
		x=i;
			
       glVertex2f(x,0);
    }
    for (i=-10; i<=10;i+=1)
    {  
		y=i;
			
       glVertex2f(0,y);
    }

    glEnd();
    
    glBegin(GL_LINES);
    
    glVertex2f(0,10);
    glVertex2f(0,-10);
    
    glVertex2f(-10,0);
    glVertex2f(10,0);
    
     // fin de dibujar el plano
   

    glEnd();

          
 
    glFlush ();

    

}
void init (void){   
	glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1100, 800);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Puntos OpenGL");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
