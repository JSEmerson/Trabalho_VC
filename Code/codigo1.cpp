/* 
Trabalho Visualização Científica - testee2
*/ 
 
#include <stdio.h> 
#include <GL/glut.h> 
 
void display(void); 
void init (void); 
void keyboard(unsigned char key, int x, int y); 
 
int main(int argc, char** argv) 
{ 
   glutInit(&argc, argv); 
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 
   glutInitWindowSize (250, 250); 
   glutInitWindowPosition (100, 100); 
   glutCreateWindow ("Quad Test"); 
   init (); 
   glutDisplayFunc(display); 
   glutKeyboardFunc(keyboard); 
 
	printf("Pressione ESC para fechar.\n"); 
 
   glutMainLoop(); 
 
   return 0; 
} 
 
void display(void) 
{ 
   // Limpar todos os pixels 
   glClear (GL_COLOR_BUFFER_BIT); 
 
   // Desenhar um polígono branco (retângulo) 
   glBegin(GL_POLYGON); 
      glVertex3f (0.25, 0.25, 0.0); 
      glColor3f (1.0, 0, 0); 
      glVertex3f (0.75, 0.25, 0.0); 
      glColor3f (0, 1.0, 1.0); 
      glVertex3f (0.75, 0.75, 0.0);
      glColor3f (0, 0, 1.0);  
      glVertex3f (0.25, 0.75, 0.0); 
      glColor3f (1.0, 1.0, 1.0); 
   glEnd(); 
 
   glutSwapBuffers (); 
} 
 
 
void init (void) 
{ 
   // selecionar cor de fundo (preto) 
   glClearColor (0.0, 0.0, 0.0, 0.0); 
 
   // inicializar sistema de viz. 
   glMatrixMode(GL_PROJECTION);              // Seleciona Matriz de Projeção 
   glLoadIdentity(); 
   glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0); 
 
   glMatrixMode(GL_MODELVIEW); // Select The Modelview Matrix 
   glLoadIdentity();           // Inicializa com matriz identidade 
} 
 
void keyboard(unsigned char key, int x, int y)
{
   switch (key) 
   {
      case 27:
         exit(0);
      break;
   }
} 
