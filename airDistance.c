/**
  * Author: Maricel Reinhard, Trey Turner
  * Date: 8/29/18
  *
  *This program takes in two points based on their longitude
  * and latitude and computes the distance between them.
  */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {

  double latitudeInputA, longitudeInputA;

  double latitudeInputB, longitudeInputB;

  double latitudeRadiansA, longitudeRadiansA;

  double  latitudeRadiansB, longitudeRadiansB;

  double longitudeDifference;

  double distance;

  int earthRadiusKM = 6371;

  printf("Please enter the latitude of point A. Latitude range= [-90, 90]\n");
    scanf("%lf" , &latitudeInputA);

    latitudeRadiansA = (latitudeInputA * M_PI)/180;

  printf("Please enter the longitude of point B. Longitude range = [-180, 180]");
    scanf("%lf" , &longitudeInputA );

    longitudeRadiansA = (longitudeInputA * M_PI)/180;


  printf("Please enter the latitude of point B. Latitude range= [-90, 90]\n");
  //printf("Line1");
      scanf("%lf" , &latitudeInputB);
      //printf("Line2");

    latitudeRadiansB = (latitudeInputB * M_PI)/180;

  printf("Please enter the latitude of point B.");
      scanf("%lf" , &longitudeInputB);

    longitudeRadiansB = (longitudeInputB * M_PI)/180;

  printf("Line3");

  longitudeDifference = longitudeRadiansB - longitudeRadiansA;

  distance = (acos(sin(latitudeRadiansA) * sin(latitudeRadiansB) + cos(latitudeRadiansA) * cos(latitudeRadiansB)* cos(longitudeDifference))) * earthRadiusKM;

  printf("Location Distance\n");
  printf("====================================\n");
  printf("Origin: %lf %lf \n" , latitudeInputA, longitudeInputA);
  printf("Destination: %lf  %lf\n" , latitudeInputB, longitudeInputB);
  printf("Air Distance: %lf\n", distance);

  return 0;
}
