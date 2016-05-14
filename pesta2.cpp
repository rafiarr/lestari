#include <cstdio>
#include <cstring>
#define MOD 101
int main()
{
	char teman[40];
	int n, i, k, k1, flag=0, j, hash[105];
	scanf("%d", &n);
	for(i=0;i<101;i++)
	{
		hash[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s", teman);
		k=0;
		k1=0;
		for(j=0;j<strlen(teman);j++)
		{
			k += ((3 * ((int)teman[j] % MOD)) % MOD) + ((6 * j % MOD) % MOD) + 1;
			k1+= (3*(int)teman[j]) + 6*j + 1;
			k = k % MOD;
		}
		//printf("%d : %d\n", k1, k1%MOD);
		if(!hash[k])
		{
			hash[k]=1;
		}
		else
		{
			if(flag==0)
			{
				flag=1;
				printf("Gagal Pesta\n");
			}
			printf("%s\n", teman);
		}
	}
	if(flag == 0)
	{
		printf("Selamat Ulang Tahun\n");
	}
	return 0;
}
