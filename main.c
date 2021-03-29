#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int i, debts;
	double peryear,permonth,perweek, perday, x, total, rest;
	
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
	
	//Debts
	printf("\n\n     ----Now let's calculate your debts----");
	printf("\nHow much debts do you have per month:");
	scanf("%d", &debts);
	
	total = 0;
	
	for( i = 1; i <= debts; i++){
		printf("\nEnter the debt amount:");
		scanf("%lf", &x);
		
		total = total + x;
	}
	
	rest = total - permonth;
	
	printf("\nYou pay %.2lf in debts per month", total);
	
	printf("\nFor you, there are %.2lf in the month!", rest);
	
	printf("\n\n If you don't buy, the discount is bigger!'");
	printf("\nJulius Rock");
	
	
	
	
	return 0;
}
