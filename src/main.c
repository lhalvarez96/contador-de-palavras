/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <string.h>


int main() {

  char c[300];
  int i, j=0, k=0; 
  int tamanho(char c[]);
  
  fgets(c,300,stdin);

  k= tamanho(c);

  for(i=0; i<=k; i++){
	
   if((c[i+1]<'0')||((c[i+1]>'9') && (c[i+1]<'A')) || ((c[i+1]>'Z') && (c[i+1]<'a')) || (c[i+1]>'z')){
        if((c[i]>='0')&&(c[i]<='9')){
		j++;
		}
	if((c[i]>='A')&&(c[i]<='Z')){
                j++;
                }
        if((c[i]>='a')&&(c[i]<='z')){
                j++;
                }
        }
        
     
}

	printf("%d\n", j);

return 0;
  

  
}

int tamanho (char  c[]){
  int tam=0;
 
     while (c[tam] != '\0'){
           tam++;
          }
      return tam;
}


