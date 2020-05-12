#include <stdio.h>

const int n=5;

void ler_idade();
int soma_idade();
float media_idade();
int maior_media();


/*************************************/
int main() {

  printf("\nMedia de idade da turma");

  int idade[n];

  ler_idade(idade);


  float media= media_idade(idade);
  printf("\nA media eh: %.2f",media);


  int maior= maior_media(media, idade);
  printf("\nA quantidade de alunos com a idade acima da media eh: %i",maior);
  return 0;
}
/*************************************/

void ler_idade(int idade[])
{
  
  int i;

  for(i=0; i<n; i++)
  {
    printf("\nIdade do %i.o aluno: ",i+1);
    scanf("%i",&idade[i]);
  }  

}
/*************************************/
int soma_idade(int idade[])
{
  float soma=0;
  int i;
  for(i=0; i<n; i++)
  {
    soma = soma + idade[i];
  }
  
  return soma;
}
/*************************************/
float media_idade(int idade[])
{
  float media= soma_idade(idade)/n;
  return media;
}

/*************************************/
int maior_media(int media, int idade[])
{
  int i;
  int maior;
  for(i=0; i<n; i++)
  {
    if(idade[i] >= media)
    maior++;
  }
  return maior;
}



