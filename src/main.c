/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
//apenas para incluir o prox comentario
int main() {

  char c=0, anterior=0, anterior2=0;//c é o caracter lido, "anterior" é o caracter lido anteriormente, "anterior2" é o caracter lido antes do "anterior"
	int num=0, N=0;//num identifica um numero float(1) ou nao(0), N é o numero de palavras entradas
  while (c != '\n') {
  	scanf("%c", &c);//vai fazendo a leitura caracter por caracter
  	if (c==' '||c=='-'||c=='.'||c==','||c==';'||c==':'||c=='!'||c=='?'||c=='\n'){//caso encontre um caracter diferente de letra ou numero
		if ((anterior>=65 && anterior<=90)||(anterior>=97 &&anterior<=122)) //caso encontre uma letra anterior em ASCII
			N++;
		if (anterior>='0' && anterior<='9'){//caso a anterior seja numero, contabiliza como palavra e talvez float
			if (c==','||c=='.')
				num=1;//tratamento caso float
			else{
				num=0;//tratamento caso nao float
				N++;//só soma se nao for float, se for adicionara no final do valor float
			}		
		}
	}
	if ((anterior2>='0' && anterior2<='9')&&(anterior=='.'||anterior==',')&&(c==' '||((c>=65 && c<=90)||(c>=97 && c<=122))))
		N++;//tratamento dos tests 9,10,11
	anterior2=anterior;
	anterior = c;//para comparar casos de duplas virgulas e etc
  }
  printf("%d\n", N);
  return 0;
}
