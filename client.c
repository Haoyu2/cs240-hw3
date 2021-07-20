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
	
	// while ((c = getopt(argc, argv, "n:s:")) != -1) {
	// 	switch (c) {
	// 	case 'n': sscanf(optarg, "%u", &n); break;
	// 	case 's': sscanf(optarg, "%d", &seed); break;
	// 	default: break;
	// 	}
	// }

	n = atoi(argv[2]);
	seed = atoi(argv[4]);
	printf("Seed: %d		Points Number: %d\n", seed,n);



    Points points = createData(seed,n);
	sorting_angle(points);
	write2csv(points, "sortedPoints.csv");
	write2csv(points, "points.csv");

	Points convPs = convex(points);
	write2csv(points, "pointsCon.csv");
	freePoints(points);
	freePoints(convPs);

	return 0;
}
