<?php
session_start();
	require "../parametres/identifiants.php";

$surnom_co = htmlspecialchars($_POST['surnom']);
if (empty($surnom_co)){
	$_SESSION['messageSurnomNexion'] = 'Attention, ce champ est nécessaire !';
	$_SESSION['messagePassNexion'] = '';
	header('Location: ../connexion.php');
	exit();
} 
else
{
	$_SESSION['messageSurnomNexion'] = '';
}

$pass_co = htmlspecialchars($_POST['pass']);
if (empty($pass_co)){
	$_SESSION['messageSurnomNexion'] = '';
	$_SESSION['messagePassNexion'] = 'Vous n\'oubliez rien ?';
	header('Location: ../connexion.php');
	exit();
} 


$dem = $bdd->query('SELEct pass FROM utilisateurs WHERE surnom="'.$surnom_co.'"');
$paramco = $dem->rowCount();
$pass_verif = $dem->fetch();
if ($paramco!=1)
{
	$_SESSION['messageSurnomNexion'] = 'Désolé, ce surnom n\'est pas connu...';
	$_SESSION['messagePassNexion'] = '';
	header('Location: ../connexion.php');
	exit();
}
else if (!(password_verify($pass_co, $pass_verif['pass'])))
{
	$_SESSION['messageSurnomNexion'] = '';
	$_SESSION['messagePassNexion'] = 'Attention, le mot de passe ne correspond pas.';
	header('Location: ../connexion.php');
	exit();
}

$dem->closeCursor();

$_SESSION['username'] = $surnom_co;

$dem = $bdd->query('SELEct id FROM utilisateurs WHERE surnom="'.$_SESSION['username'].'"');
$_SESSION['id'] = $dem->fetch();
$dem->closeCursor();

header('Location: ../accueil.php');

?>
