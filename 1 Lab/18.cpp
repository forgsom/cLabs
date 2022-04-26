//Пользователь вводит цену тетради, кол - во тетрадей, цену карандаша, кол - во карандашей

#include <stdio.h>

using namespace std;

int main() 
{
	int number_notebook, number_pencil;
	float price_notebook, price_pencil, all_buy;

	printf("how many notebooks and pencils? ");
	scanf("%d %d", &number_notebook, &number_pencil);
	fflush(stdin);
	printf("\nprice of notebook and pencil? ");
	scanf("%f %f", &price_notebook, &price_pencil);
	all_buy = number_notebook * price_notebook + number_pencil * price_pencil;
	printf("\nthe purchase cost: %.2f\n", all_buy);

	return 0;
}
