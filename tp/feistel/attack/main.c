/***************************************************************************/
/* Securite : Travaux Pratiques, chiffrement symm�trique                    */
/* Olivier Ly - Renaud Tabary                                              */
/* Date: 2008-01                                                           */
/***************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include "tools.h"

/*****************************************************************************/
/* Variables 8 octets <-> 64 bits                                            */
/*****************************************************************************/

byte K[8];
byte BUFFER[8];

/*
 * Bijection de [0,63] -> [0,63]
 * - ip[k] est l'image de k.
 */
byte ip[64];
byte ip_inv[64];

/*****************************************************************************/
/* Syst�me de s�lection de message                                           */
/*****************************************************************************/
byte selected[NB];
int selected_nb;

/* Remise � zero de la s�lection */
void reset_selection() { 
	int m;
	for (m=0; m<NB; m++)
		selected[m] = 0;
	selected_nb = 0;
}

/* s�lectionne un message */
void select_msg(int m) { 
	if (selected[m]==0) selected_nb++;
	selected[m] = 1; 
}

/* d�s�lectionne un message */
void unselect_msg(int m) { 
	if (selected[m]==1) selected_nb--;
	selected[m] = 0;
}

/* est-ce que le message m est s�lectionn� ? */
byte is_selected(int m) {	
	return selected[m]; 
}

/*****************************************************************************/
int main(int argc, char * argv[]) {
/*****************************************************************************/
	int i,m;
	char str[1024];
	
	// Pr�liminaires
	for (i=0; i<1024; i++) str[i] = 0;
	
	// Lecture des messages depuis l'entr�e standard.
	printf("\nLecture des messages:\n");
	read_message_list();
	for (m=0; m<5; m++) {
		sprint_byte_array(Messages[m], str, 8); printf("%s -> ",str); 
		sprint_byte_array(Chiffres[m], str, 8); printf("%s\n",str);    
  }
	printf ("...\nok.\n\n");

	// **********************
	// Calcul de la bijection
	// **********************
	printf("D�codage de la bijection:\n");
	
	/**************************************************************************/
	/* A VOUS DE JOUER !!!                                                    */
	/**************************************************************************/
	// Le coeur de l'attaque se trouve ici. Il s'agit de retrouver la bijection
	// inconnue. Pour ce faire, vous impl�menterez l'algorithme suivant:
	
	/* Recherche de la bijection secr�te:
	Pour toute colonne b \in [0,63] faire
	|	1. Selectionner les messages dont le bit � la position b vaut 1.
	| 2. Rechercher dans les chiffr�s correspondants une colonne constante.
	| 3. La position de la colonne constante est l'image de b par la bijection.	
	La bijection r�sultante sera plac�e dans le tableau ip */
	/**************************************************************************/

    printf("Bijection secrete:\n");
	display_mix64(ip);
	printf("\n");
	
	/**************************************************************************/
	/* A VOUS DE JOUER !!!                                                    */
	/**************************************************************************/
	// Maintenant que vous avez la bijection secr�te, le plus dur est fait
    // A votre avis, comment r�cup�rer la cl� ?
    //
    //Indice: aidez-vous des fonctions inverse_mix64, mix64 et byte_array_xor
    /**************************************************************************/
    
    printf("Cl� secrete:\n");
    
}









