#include <stdio.h>

int main()
{
	double dolar, icms, v_produto, v_frete;
	scanf("%lf %lf %lf %lf", &dolar, &icms, &v_produto, &v_frete);
	double nv_produto = v_produto*dolar;
	icms = (icms/100);
	double nv_frete = v_frete*dolar;
	double valor_totalP = nv_produto+nv_frete;
	double taxa_import= valor_totalP*0.60;
	double valorfinal= ((nv_produto/(1-icms))+(nv_frete/(1-icms))+(taxa_import/(1-icms)));
	double n_icms= icms*valorfinal;
	double total_impostos= taxa_import + n_icms;
	
	if (v_produto>2500)
	{	
		double n2icms = ((nv_produto/(1-icms) + taxa_import/(1-icms))*icms);
		double n2_total_imp =(n2icms+taxa_import);
		double total_pagar = nv_produto + taxa_import + n2icms;
		printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n Impostos calculados sem o frete", dolar, nv_produto, valor_totalP, taxa_import, n2icms, n2_total_imp, total_pagar);
	}
	else
	{
		double total_pagar = valor_totalP + total_impostos;
		printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n Impostos calculados com o frete", dolar, nv_produto, nv_frete, valor_totalP, taxa_import, n_icms, total_impostos, total_pagar);
	}
	return 0;
}
