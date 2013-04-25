#include <stdio.h>
#include <math.h>

int vet[20];
int i=0;
int j=0;
int aux=0;


int cria_vetor(){
    
 for (i=0;i<20;i++) {
	printf ("Digite o valore %d",vet[i]);
	scanf("%d",&vet[i]);
	}
	i=0;
	
}

int ordena_e_imprime() {
    for(i=0;i<20;i++)   {
	for(j=i+1;j<21;j++)  {
		if(vet[i]>vet[j]) {
			aux=vet[j];
			vet[j]=vet[i];
			vet[i]=aux;
		}
	  }
	printf("o %da valor eh:%d \n",vet[j],vet[i]);		
   }
}

float media_de_valores( int aux_[]) {

  int aux=0;
  float media=0;
  for(i=0;i<20;i++)  {
          aux=aux+aux_[i];             
   }
  media=aux/20;
  i=0;
  return(media);
}

float desvio_do_padrao(int v[20],float a ){
    float m=0;
    float n=0;
    float p=0;
	for (i=0;i<20;i++)
    {
  	n=n+((v[i]-a)*(v[i]-a));
    }

  i=0;
  m=n/20;
 // m=sqrt(p);
  return (m);
}

void main () {

float res=0;
float res1=0;

system("clear");
cria_vetor ();

printf("\n Ordena e imprime valores em ordem crescente:\n");
ordena_e_imprime ();

res=media_de_valores (vet);
printf("Media dos valores: %f \n",res);

res1 = desvio_do_padrao (vet,res);
printf("Desvio padrao dos valores: %f  \n",res1);

return(1);
}

