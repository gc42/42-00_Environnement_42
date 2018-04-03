/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d10_makefile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:30:39 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/16 18:02:15 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// makefile
// permet de scripter gcc

//nom du fidhier : Makefile

//Structure du fichier :

// EXEMPLE 1
regle_a:
	echo "regle A"		// si @ avant, pas de echo

	//Dans le shell :
	make regle_a
	//donne
	echo "regleA"		//affichage de ce qui va etre fait
	regle A				//execution de la commande



// EXAMPLE 2
regle_a:
	echo "regle A"		// si @ avant, pas de echo
regle_b: regle_a		// la regle_a est inclue dans regle_b
	echo "regle B"		// les 2 sont executionutees


	//Dans le shell :
	make regle_rba
	//donne
	echo "regleA"		//affichage de ce qui va etre fait
	regle A				//execution de la commande
	echo "regleB"		//affichage de ce qui va etre fait
	regle B				//execution de la commande



// EXEMPLE 3 (variables)
TEXT = "42 for the braves"

regle_a:
	echo $(TEXT)

// donne
$>make
echo "42 for the braves"
42 for the braves
$>



// EXEMPLE 4
NAME = mon_programme

SRC = toutes les sources *.c dont j'ai besoin \
	  deuxieme ligne si besois...

all: $(NAME)				//regle ''all" est la premiere, executee par defaut

$(NAME):					//execution par defaut de cette regle
	gcc -o $(NAME) $(SRC)

clean:						//va nettoyer les *.o
	/bin/rm -f *.o

fclean: clean				//nettoye les *.o puis l'executable
	/bin/rm -f $(NAME)

re: fclean all				//nettoye tout (fclean), puis recompile


