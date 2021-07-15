#ifndef HW3_H
#define HW3_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// #include <getopt.h>
#ifndef TEST_FILE
#define TEST_FILE(f,s,s1) 	\
		if (NULL==f){		\
			fprintf(stderr, "%s: can't open %s\n", s,s1);\
			exit(1);}
#endif

typedef struct 
{
	double x,y;
} Point;

typedef struct 
{
	Point *data;
	int length;
} Points;


Points createData(int seed,int num);
void write2csv(Points points, char *file);
void freePoints(Points points);


void sorting_angle(Points points);
Points convex(Points points);







#endif