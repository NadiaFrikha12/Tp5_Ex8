//Ex8:Ecrire un programme C permettant de saisir une chaine de caractères CH non vide et deremplacer toute suite d un meme caractere par un seul.

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
	char ch[10];
	int i,j ;
	
	// saisie d'une phrase non vide
	do{
		printf("saisir une phrase non vide:");
		gets(ch);
	}while (strlen(ch)==0);
	
	//remplacement de toute suite d un meme caractere par un seul.
	for(i=0; i<strlen(ch);i++){
		if (ch[i]==ch[i+1]){
			for(j=i; j<strlen(ch); j++){
				if (ch[j-1]==ch[j]){
					ch[j]=ch[j+1];
				}
			}
		}
	}
	
	//affichage du resultat
	printf("la chaine devient:%s",ch);
	
	return 0;
}
	
