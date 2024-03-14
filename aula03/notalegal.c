#include <stdio.h>

int main() {
printf("\x1b[32m--------------------\n");
printf("     NOTA LEGAL       \n");
printf("--------------------\x1b[0m\n");
printf("ITEM      QTD VALOR \n");
printf("%-13s %03i %8.2f\n", "Banana nanica", 1, 15.00); 
printf("%-13s %03i %8.2f\n", "Maca fufi", 10, 50.00);
printf("%-13s %03i %8.2f\n", "Uva globo", 5, 26.00); 
// printf("Banana nanica 1 15.00\n");
// printf("Maca fuji   10  50.00\n");
// printf("Uva globo  5  26.00\n");
printf("--------------------\n");
printf("\x1b[34mTOTAL-------------: R$ %8.2f\x1b[0m\n",   91.00);
  
  return 0;
}