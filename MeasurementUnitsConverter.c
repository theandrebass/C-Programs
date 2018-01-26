#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int i;
  char name[32];
}unit;


void caclTotalSun (double *totalSum, double *partInLiters, double *partInGallons, double *sumLiters, double *sumGallons ) {
  int i;
  for( i=65;i<69;i++){
    printf("Please enter the liquid solution %c\n", i );
    if( i==65||i==67){
      scanf("%lg", partInLiters);
      *sumLiters += *partInLiters;
    } 
    else {
      scanf("%lg", partInGallons);
      *sumGallons += *partInGallons;
    }
  }
 *sumLiters *= 3.875;
 *totalSum = *sumGallons + *sumLiters;
}


void printConverted (unit conv[7], double * totalSum){
  int i;
  printf("Here are the converted values:\n");
  for ( i = 0; i < 7; i++ ) {
    printf("%.0f %s \n", conv[i].value * (*totalSum), conv[i].name);
  }
}


void exitOrNot(char *exitChoice) {
  printf("\nExit product mix calculation (Y to exit)? \n");
  scanf("%s", exitChoice);
}


int main() {
  unit conv[7] = {{1, " US gallons"}, {8, " US quarts"}, {8, " US pints"}, {16, "US cups"}, {128, " US fluid ounces"}, {256, " US tablespoons"}, {768, "US teaspoons"}};
  int i, j;
  double partInLiters, partInGallons;
  double sumLiters = 0;
  double sumGallons = 0;
  double totalSum = 0;
  char exitChoice;
  printf("Welcome to the measurements unit convertor\n\n");
  do {
    caclTotalSun(&totalSum, &partInLiters, &partInGallons, &sumLiters, &sumGallons);
    printConverted(conv, &totalSum);
    exitOrNot(&exitChoice);
  }while (exitChoice != 'Y');
    system("pause");
    return 0;
}
