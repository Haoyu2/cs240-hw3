/*
 * 
 *
 * project: hw3
 * name: 
 * user??
 * date: 
 * file: hw3.c
 */


#include "hw3.h"





PointAngles sorting_angle(Point points)
{
	/*
	*  Code
	*/	
}



//
Points convex(Points points)
{
	/*
	*  Code
	*/	
}


void write2csv(Points points, char *file)
{
    FILE *f = fopen(file, "w");
	TEST_FILE(f,"write2csv",file);
	Point *data = points.data;
	for (int i = 0; i < points.length; ++i)	
		fprintf(f, "%f,%f\n",data[i].x,data[i].y);	
	fclose(f);
}



Points createData(int seed,int num)
{
	
	srand48(seed); /* seeding the pseudorandom number generator */		
	Point* data = malloc(sizeof(Point) * num);
	Points points = {data, num};

	for (int i = 0; i < num; i++) 
	{
		data[i].x = drand48();
		data[i].y = drand48();
	}
	return points;
}

void freePoints(Points points)
{
	for (int i = 0; i < points.length; ++i)
	{
		free(points.data[i]);
	}
}
