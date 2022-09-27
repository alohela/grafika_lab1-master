

#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

void Render(double delta_time)
{   //1-красна€,2-зелен€€, 3-син€€
	static int time = 0;

	double A[] = { 0,0,0 };
	double A2[] = { 0,0,3 };

	double B[] = { 4,4,0 };
	double B2[] = { 4,4,3 };

	double C[] = { 0,8,0 };
	double C2[] = { 0,8,3 };

	double D[] = { 4,12,0 };
	double D2[] = { 4,12,3 };

	double E[] = { 6,5,0 };
	double E2[] = { 6,5,3 };

	double F[] = { 11,4,0 };
	double F2[] = { 11,4,3 };

	double G[] = { 8,-3,0 };
	double G2[] = { 8,-3,3 };

	double H[] = { 4,2,0 };
	double H2[] = { 4,2,3 };
		glPushMatrix();
		glRotated(time/15.0, 0, 0, 1);
		glBegin(GL_TRIANGLES);
		glColor3d(1, 0, 0);
		glVertex3dv(A);
		glVertex3dv(B);
		glVertex3dv(H);
		glVertex3dv(E);
		glVertex3dv(B);
		glVertex3dv(H);

		glEnd();
		glBegin(GL_QUADS);
		glVertex3dv(B);
		glVertex3dv(C);
		glVertex3dv(D);
		glVertex3dv(E);
		glVertex3dv(E);
		glVertex3dv(F);
		glVertex3dv(G);
		glVertex3dv(H);
		glEnd();
		glBegin(GL_TRIANGLES);
		glColor3d(0, 0, 1);
		glVertex3dv(A2);
		glVertex3dv(B2);
		glVertex3dv(H2);
		glVertex3dv(E2);
		glVertex3dv(B2);
		glVertex3dv(H2);

		glEnd();
		glBegin(GL_QUADS);
		glVertex3dv(B2);
		glVertex3dv(C2);
		glVertex3dv(D2);
		glVertex3dv(E2);
		glVertex3dv(E2);
		glVertex3dv(F2);
		glVertex3dv(G2);
		glVertex3dv(H2);
		glEnd();
		glBegin(GL_LINE_STRIP);
		glVertex3dv(A);
		glVertex3dv(B);
		glVertex3dv(C);
		glColor3d(0, 1, 0);
		glVertex3dv(C);
		glVertex3dv(D);
		glColor3d(0, 0, 0);
		glVertex3dv(D);
		glVertex3dv(E);
		glVertex3dv(F);
		glColor3d(148, 0, 211);
		glVertex3dv(F);
		glVertex3dv(G);
		glColor3d(0, 0, 0);
		glVertex3dv(G);
		glVertex3dv(H);
		glVertex3dv(A);

		glVertex3dv(A2);
		glVertex3dv(B2);
		glVertex3dv(C2);
		glColor3d(0, 1, 0);
		glVertex3dv(C2);
		glVertex3dv(D2);
		glColor3d(0, 0, 0);
		glVertex3dv(D2);
		glVertex3dv(E2);
		glVertex3dv(F2);
		glColor3d(148, 0, 211);
		glVertex3dv(F2);
		glVertex3dv(G2);
		glColor3d(0, 0, 0);
		glVertex3dv(G2);
		glVertex3dv(H2);
		glVertex3dv(A2);
		glEnd();
		glBegin(GL_QUADS);
		glColor3d(0, 0, 0);
		glVertex3dv(A);
		glVertex3dv(A2);
		glVertex3dv(B2);
		glVertex3dv(B);

		glVertex3dv(B);
		glVertex3dv(B2);
		glVertex3dv(C2);
		glVertex3dv(C);

		glVertex3dv(C2);
		glVertex3dv(C);
		glVertex3dv(D);
		glVertex3dv(D2);

		glVertex3dv(D);
		glVertex3dv(D2);
		glVertex3dv(E2);
		glVertex3dv(E);

		glVertex3dv(E2);
		glVertex3dv(E);
		glVertex3dv(F);
		glVertex3dv(F2);

		glVertex3dv(F);
		glVertex3dv(F2);
		glVertex3dv(G2);
		glVertex3dv(G);

		glVertex3dv(G);
		glVertex3dv(G2);
		glVertex3dv(H2);
		glVertex3dv(H);

		glVertex3dv(H2);
		glVertex3dv(H);
		glVertex3dv(A);
		glVertex3dv(A2);
		glEnd();
		glPopMatrix();
		time++;
	

}

