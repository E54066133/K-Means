#ifndef CLUSTERING_H
#define CLUSTERING_H

//	implement your own clustering method here
#include <iostream>
#include <vector>
#include <cmath>

//	a data structure to store each data point
struct Point{
	double x;
	double y;
	int clusterNo;	// used to store the cluster number. -1 means not assigned.

	//int clusterA;
	//int clusterB;
	//int clusterC;
	//int clusterD;
	//int culsterE;
	//int clusterF;
	//int clusterG;
	//int clusterH;
	//int clusterI;
	//int culsterJ;






};

//	data is passed by reference
void clustering(vector<Point>& data)
{
	//	show every point in data
	for(int i=0;i<data.size();i++)
		cout<<data[i].x<<" "<<data[i].y<<" "<<data[i].clusterNo<<"\n";
	cout<<"\n";

	//=========================================================================================

	//data[0].clusterNo = 0;
	//data[1].clusterNo= 0;

	for (int i = 0;i < data.size();i++)

		data[i].clusterNo = 1;

	/*
	for (int a = 0; a < data.size();a++) {

		double min  = sqrt((data[a].x - data[a+1].x) * (data[a].x - data[a+1].x) + (data[a].y - data[a+1].y) * (data[a].y - data[a+1].y));

		for (int b = a + 2; b + 2 < data.size(); b++) {

			double temp = sqrt((data[a].x - data[b].x) * (data[a].x - data[b].x) + (data[a].y - data[b].y) * (data[a].y - data[b].y));

			if (temp < min)

				data[b].clusterNo = a;
		}

		

	}

	*/





	


	
}

#endif
