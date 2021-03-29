#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	double peryear,permonth,perweek, perday;
	
	//Introduction
	printf("    ----WELCOME TO WORK WAGE CALCULATOR-----\n\n");
	printf("   When we have notion about how much we are paid per day,\n or per month or per year, we starting be more economical.\n To help us, this program writed in C language will calculate\n this datas for us!");
	printf("\n\nBY ErllanRego");
	
	//start program
	printf("\n\n\nPlease write your work wage per month: ");
	scanf("%lf",&permonth);
	
	perweek = permonth / 4;
	perday = perweek / 7;
	peryear = permonth * 12;
	
	
	printf("\n Per day = %.2lf", perday);
	printf("\n Per week = %.2lf", perweek);
	printf("\n Per year = %.2lf", peryear);
	
	
	
	return 0;
}
