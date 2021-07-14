/*
 * Client for Graham's scan
 *
 * project: hw3
 * name: 
 * user??
 * date: 
 * file: driver.c
 */


#include "hw3.h"


int main(int argc, char* argv[])
{
  
    int n, seed, c;

	/* command line options
	 * ./client -n nValue -s seedValue
	 */
	
	while ((c = getopt(argc, argv, "n:s:")) != -1) {
		switch (c) {
		case 'n': sscanf(optarg, "%u", &n); break;
		case 's': sscanf(optarg, "%d", &seed); break;
		default: break;
		}
	}
	printf("Seed: %d		Points Number: %d\n", seed,n);


    Points points = createData(seed,n);
	sorting_angle(points);
	write2csv(points, "points.csv");
	Points convPs = convex(Points points);
	write2csv(points, "sortedPoints.csv");
	free(points);

	return 0;
}