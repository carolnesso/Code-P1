#include <stdio.h>

int checar_ataque(int matriz[][3])
{
	if (matriz[0][0]==1 && matriz[1][1]==1 && matriz[2][2]==1 && matriz[0][1]==0 && matriz[0][2]==0 && matriz[1][0]==0 && matriz[1][2]==0 && matriz[2][0]==0 && matriz[2][1]==0)
	{
		return 1;
	}
	else if (matriz[0][2]==1 && matriz[1][1]==1 && matriz[2][0]==1 && matriz[0][0]==0 && matriz[0][1]==0 && matriz[1][0]==0 && matriz[1][2]==0 && matriz[2][1]==0 && matriz[2][2]==0)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}
void ler_ataque(int matriz[][3], int i, int j)
{
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			scanf("%d", &matriz[i][j]);	
		}
	}
}
int main()
{
	int v_luke, v_darth, r, sub;
	//r==rodadas;
	scanf("%d %d", &v_luke, &v_darth);
	for (r = 0; r < 10; ++r)
	{
		if (v_luke>0 && v_darth>0)
		{
			int atc_luke[3][3], atc_darth[3][3];
			ler_ataque(atc_luke, 0, 0);
			ler_ataque(atc_darth, 0, 0);
			int c_luke = checar_ataque(atc_luke);
			int c_darth = checar_ataque(atc_darth);
			if (c_luke==c_darth)
			{
				//printf("entrei em 1 1 \n");
				v_luke = v_luke-15;
				v_darth = v_darth-15; 
				//ambos recebem o ataque, ambos perdem 15;
			}
			else if ((c_luke==1 && c_darth==2) || (c_luke==2 && c_darth==1))
			{
				//printf("entrei em 1 e 2 ambos\n");
				v_luke = v_luke;
				v_darth = v_darth;
				//ninguem toma dano;
			}
			else if (c_luke!=0)
			{
				if (c_darth==0)
				{
					//printf("darth perde\n");
					v_darth = v_darth-15;
					//darth perde 15;
				}
			}
			else if (c_darth!=0)
			{
				if (c_luke==0)
				{
					//printf("luke perde\n");
					v_luke = v_luke-15;
					//luke perde 15;
				}
			}
		}
		if (v_luke<=0 && v_darth<=0)
				{
					printf("Houve empate.\n");
					break;
				}
		else if (v_darth<=0)
					{
						printf("Luke Skywalker venceu.\n");
						break;
					}
		else if (v_luke<=0)
					{
						printf("Darth Vader venceu.\n");
						break;					
					}

	}
	if (v_luke>0 && v_darth>0)
	{
		if (v_luke>v_darth)
		{
			printf("Luke Skywalker venceu.\n");
		}
		else if(v_darth>v_luke)
		{
			printf("Darth Vader venceu.\n");
		}
		else
		{
			printf("Houve empate.\n");
		}
	}
	return 0;
}