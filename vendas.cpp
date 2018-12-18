#include <conio.h>
#include <stdio.h>
main()
{
	float salario_fixo, vendas_mes, comissao, salario_total;
	
	salario_fixo = 800;
	printf("Figite o valor das vendas do mes: ");
	scanf("%f",&vendas_mes);
	comissao = (vendas_mes / 100) * 15;
	salario_total = salario_fixo + comissao;
	
	printf("Salario fixo: %f",salario_fixo);
	printf("\nVendas do Mes: %f",vendas_mes);
	printf("\nComissao: %f",comissao);
	printf("\nSalario total: %f",salario_total);
	getch();
}
