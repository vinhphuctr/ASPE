<?php
session_start();
	require "../parametres/identifiants.php";
error_reporting(E_ALL);
ini_set("display_errors", 1);



$nom_groupe = htmlspecialchars($_POST['nom_groupe']);
if (empty($nom_groupe)){
		$_SESSION['messageId_groupe'] = '';
		$_SESSION['messageNom_groupe'] = 'Attention, vous devez choisir un nom.';
		$_SESSION['affiche_groupe'] = False;
		header('Location: ../famille.php');
		exit();
}  else {
	$chaine='abcdefghijklmnopqrstuvwxyzABDEFGHIJKLMNOPQRSTUVWXYZ0123456789';
	$melange=shuffle($chaine);
	$ident=substr($melange‚ 0‚ 9);
	$_SESSION['messageId_groupe'] = '';
	$_SESSION['messageNom_groupe'] = 'Groupe créé';
	$dem = $bdd->prepare('INSERT INTO groupes(id_g,nom_g) VALUES (?,?)');
	$dem->execute(array($ident, $nom_groupe));
	$dem->closeCursor();
	$_SESSION['affiche_groupe'] = True;
	header('Location: ../famille.php');
}

?>
