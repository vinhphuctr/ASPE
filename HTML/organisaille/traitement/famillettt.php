<?php
session_start();
	require "../parametres/identifiants.php";
error_reporting(E_ALL);
ini_set("display_errors", 1);


$id_groupe = htmlspecialchars($_POST['id_groupe']);
if (empty($id_groupe)){
		$_SESSION['messageId_groupe'] = 'Attention, ce champ est nécessaire !';
		$_SESSION['messageNom_groupe'] = '';
		$_SESSION['affiche_groupe'] = False;
		header('Location: ../famille.php');
		exit();
} else {
	$dem = $bdd->query('SELEct nom_g, surnom FROM groupes NATURAL JOIN appartenir NATURAL JOIN utilisateurs WHERE id_g="'.$id_groupe.'"');
	$info_groupe = $dem->fetch();
	$exist_grp = $dem->rowCount();
	if ($exist_grp==0) {
		$_SESSION['messageId_groupe'] = 'Désolé, ce groupe n\'est pas connu...';
		$_SESSION['messageNom_groupe'] = '';
		$_SESSION['affiche_groupe'] = False;
		header('Location: ../famille.php');
		exit();
	} else {
		$_SESSION['messageId_groupe'] = $info_groupe['nom_g'];
		$_SESSION['messageNom_groupe'] = '';
		$_SESSION['affiche_groupe'] = True;
		header('Location: ../famille.php');
		exit();
	}
$dem->closeCursor();
}

header('Location: ../famille.php');

?>
