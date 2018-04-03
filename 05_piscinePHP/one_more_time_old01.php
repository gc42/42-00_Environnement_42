#!/usr/bin/php
<?php

date_default_timezone_set("Europe/Paris");

	// Declaration des tableaux associatifs
	$nbr_mois = array(
        1 => "janvier",
        2 => "février",
        3 => "mars",
        4 => "avril",
        5 => "mai",
        6 => "juin",
        7 => "juillet",
        8 => "août",
        9 => "septembre",
        10 => "octobre",
        11 => "novembre",
        12 => "décembre");

    $nbr_week = array(
        1 => "lundi",
        2 => "mardi",
        3 => "mercredi",
        4 => "jeudi",
        5 => "vendredi",
        6 => "samedi",
        7 => "dimanche");

    if ($argc < 2)
    	exit();

	$tab_date = explode(" ", $argv[1]);
	// TESTS VALIDATION DU TEXTE DE LA DATE
	if (count($tab_date) != 5 ||
		preg_match("/^[1-9]$|0[1-9]|[1-2][0-9]|3[0-1]$/", $date[1], $date[1]) === 0 ||
		preg_match("/^[0-9]{4}$/", $date[3], $date[3]) === 0 ||
		preg_match("/^([0-1][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9])$/", $date[4], $date[4]) === 0)
		 
	{
		# code...
	}







	// Tout en minuscules
	$str = strtolower($str);
	// echo $str, ">> afterlower\n";	// A SUPPRIMER ###########
	
	// Separation en mots
	$tab = explode(" ", $str);

	// print_r($tab);					// A SUPPRIMER ###########

	// Convertion nom_du_mois en nbr_mois
	foreach ($nbr_mois as $key => $value)
	{
		if ($tab[2] === $key)
		{
			$tab[2] = $value;
			break;
		}
	}

	// print_r($tab);					// A SUPPRIMER ###########

	// Recomposition du string de la date au format YY/mm/dd/HH:MM:II
	$str_date = $tab[3] . "/" . $tab[2] . "/" . $tab[1] . "/" . $tab[4];

	// Erreur si ce n'est pas une date valide
	if (($epock = strtotime($str_date)) === False )
		return "Wrong Format\n";
	else
		return $epock . "\n";
}

/*  EXEMPLES. */
// echo $my_date = "Mardi 12 Décembre 2013 12:02:21", ">> initial\n";
// echo strtotime("2013/11/12/12:02:21"), "\n";
// echo one_more_time($my_date);
// echo "________________________\n";

// echo $my_date = "Jeudi 13 Février 1961 00:00:00", ">> initial\n";
// echo strtotime("1961/02/13/00:00:00"), "\n";
// echo one_more_time($my_date);
// echo "________________________\n";

// echo $my_date = "AAAAAA 99 Décembre 2013 12:02:21", ">> initial\n";
// echo "date erronnee", "\n";
// echo one_more_time($my_date);
// echo "________________________\n";

// echo $my_date = "AAAAAA 12 MéMembre 2013 12:02:21", ">> initial\n";
// echo "date erronnee", "\n";
// echo one_more_time($my_date);
// echo "________________________\n";
?>