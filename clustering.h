#pragma once
#ifndef CLUSTERING_H
#define CLUSTERING_H

//	implement your own clustering method here
#include <iostream>
#include <vector>
#include <cmath>

//	a data structure to store each data point
struct Point {
	double x;
	double y;
	int clusterNo;	// used to store the cluster number. -1 means not assigned.

	/*
	int clusterA;
	int clusterB;
	int clusterC;
	int clusterD;
	int culsterE;
	int clusterF;
	int clusterG;
	int clusterH;
	int clusterI;
	int culsterJ;

	*/




};

//	data is passed by reference
void clustering(vector<Point>& data)
{
	// K4-MEANS

	int a1 = (data.size() / 4);
	int a2 = (data.size() / 4) * 2;
	int a3 = (data.size() / 4) * 3;
	int a4 = (data.size() / 4) * 4;




	for (int a = 0; a < data.size();a++) {

		double temp1 = sqrt((data[a1].x - data[a].x) * (data[a1].x - data[a].x) + (data[a1].y - data[a].y) * (data[a1].y - data[a].y));
		double temp2 = sqrt((data[a2].x - data[a].x) * (data[a2].x - data[a].x) + (data[a2].y - data[a].y) * (data[a2].y - data[a].y));
		double temp3 = sqrt((data[a3].x - data[a].x) * (data[a3].x - data[a].x) + (data[a3].y - data[a].y) * (data[a3].y - data[a].y));
		double temp4 = sqrt((data[a4].x - data[a].x) * (data[a4].x - data[a].x) + (data[a4].y - data[a].y) * (data[a4].y - data[a].y));



		int min = temp1;
		data[a].clusterNo = 1;
		if (temp2 < min) {
			data[a].clusterNo = 2;
			min = temp2;
		}
		if (temp3 < min) {
			data[a].clusterNo = 3;
			min = temp3;
		}
		if (temp4 < min) {
			data[a].clusterNo = 4;
			min = temp4;
		}


	}

	for (int fin = 0; fin < 5000; fin++) {

		double count1 = 0;
		double count2 = 0;
		double count3 = 0;
		double count4 = 0;

		double total_1_x = 0;
		double total_1_y = 0;
		double total_2_x = 0;
		double total_2_y = 0;
		double total_3_x = 0;
		double total_3_y = 0;
		double total_4_x = 0;
		double total_4_y = 0;


		for (int m = 0; m < data.size(); m++) {

			if (data[m].clusterNo == 1) {

				total_1_x += data[m].x;
				total_1_y += data[m].y;
				count1++;
			}
			if (data[m].clusterNo == 2) {

				total_2_x += data[m].x;
				total_2_y += data[m].y;
				count2++;
			}
			if (data[m].clusterNo == 3) {

				total_3_x += data[m].x;
				total_3_y += data[m].y;
				count3++;
			}
			if (data[m].clusterNo == 4) {

				total_4_x += data[m].x;
				total_4_y += data[m].y;
				count4++;
			}



		}


		Point means;
		vector<Point> my(4);

		my[0].x = total_1_x / count1;
		my[0].y = total_1_y / count1;
		my[1].x = total_2_x / count2;
		my[1].y = total_2_y / count2;
		my[2].x = total_3_x / count3;
		my[2].y = total_3_y / count3;
		my[3].x = total_4_x / count4;
		my[3].y = total_4_y / count4;


		for (int a = 0; a < data.size();a++) {

			double temp1 = sqrt((my[0].x - data[a].x) * (my[0].x - data[a].x) + (my[0].y - data[a].y) * (my[0].y - data[a].y));
			double temp2 = sqrt((my[1].x - data[a].x) * (my[1].x - data[a].x) + (my[1].y - data[a].y) * (my[1].y - data[a].y));
			double temp3 = sqrt((my[2].x - data[a].x) * (my[2].x - data[a].x) + (my[2].y - data[a].y) * (my[2].y - data[a].y));
			double temp4 = sqrt((my[3].x - data[a].x) * (my[3].x - data[a].x) + (my[3].y - data[a].y) * (my[3].y - data[a].y));


			int min = temp1;
			data[a].clusterNo = 1;
			if (temp2 < min) {
				data[a].clusterNo = 2;
				min = temp2;
			}
			if (temp3 < min) {
				data[a].clusterNo = 3;
				min = temp3;
			}
			if (temp4 < min) {
				data[a].clusterNo = 4;
				min = temp4;
			}

		}
	}








	//=============================================================================================
	//	show every point in data   最後記得整段都要註解掉
	//for (int i = 0;i<data.size();i++)
	//cout << data[i].x << " " << data[i].y << " " << data[i].clusterNo << "\n";
	//cout << "\n";

	//=========================================================================================
}

#endif
