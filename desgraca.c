#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <unistd.h>

void monitorar_ucp(int pid)
{
	char bash_cmd[256];
	sprintf(bash_cmd, "ps u %d | awk '{print $3}' | grep -v CPU", pid);
	char buffer[1000];
	FILE *pipe;
	int len; 
	pipe = popen(bash_cmd, "r");

	if (NULL == pipe) {
		perror("pipe");
		exit(1);
	} 
	
	char* cpu_usage = fgets(buffer, sizeof(buffer), pipe);
	len = strlen(bash_cmd);
	bash_cmd[len-1] = '\0'; 
	pclose(pipe);

	printf("cpu_usage == %s", cpu_usage);
}


void monitorar_mem(int pid)
{
	char bash_cmd[256];
	sprintf(bash_cmd, "ps u %d | awk '{print $5}' | grep -v VSZ", pid);
	char buffer[1000];
	FILE *pipe;
	int len; 
	pipe = popen(bash_cmd, "r");

	if (NULL == pipe) {
		perror("pipe");
		exit(1);
	} 
	
	char* mem_usage = fgets(buffer, sizeof(buffer), pipe);
	len = strlen(bash_cmd);
	bash_cmd[len-1] = '\0'; 
	pclose(pipe);

	printf("mem_usage == %s\n", mem_usage);
}




void matar_meu_filho(int pid)
{
	char bash_cmd[256] = "kill -TERM 0";
	sprintf(bash_cmd, "kill -TERM %d",pid);
	char buffer[1000];
	FILE *pipe;
	int len; 
	pipe = popen(bash_cmd, "r");

	if (NULL == pipe) {
		perror("pipe");
		exit(1);
	} 
	
	char* mem_usage = fgets(buffer, sizeof(buffer), pipe);
	len = strlen(bash_cmd);
	bash_cmd[len-1] = '\0'; 
	pclose(pipe);

}


int main(int argc, char **argv)
{
	
	if (argc<2)
	{
		printf("Por favor use ucp ou ucp-mem\n");
	}
	else 
	{
		int pid;
		pid=fork();

		if (pid<0)
		{
			printf("Erro\n");
			exit(-1);
		}
		else if (pid==0)
		{
			
			if (strcmp(argv[1], "ucp")==0)
			{
				for (;;){}
			}
			else if (strcmp(argv[1], "ucp-mem")==0){
				for(;;)
				{
					malloc(sizeof(1));
				}
			}
			
		}
		else 
		{

			if (strcmp(argv[1], "ucp")==0)
			{
				for (int i = 0; i < 10; ++i)
				{
					sleep(1);
					monitorar_ucp(pid);
				}
			}
			else if(strcmp(argv[1], "ucp-mem")==0)
			{
				for (int i = 0; i < 10; ++i)
				{
					sleep(1);
					monitorar_ucp(pid);
					monitorar_mem(pid);
				}
			}

			matar_meu_filho(pid);
		}
	}
}