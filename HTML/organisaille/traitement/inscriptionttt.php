<?php
session_start();
?>

<!DOCTYPE html>

<html lang="fr">

<head>
	<meta charset="utf=8" />
	<link rel="stylesheet" type="text/css" href="default.css" media="screen"/>
	<title>Inscriptionttt</title>
</head>

<?php
require "../parametres/identifiants.php";

// Hachage du mot de passe

$surnom = htmlspecialchars($_POST['surnom']);
if (empty($surnom)){
	$_SESSION['messageSurnom'] = 'Attention, ce champ est nécessaire !';
	$_SESSION['messagePass'] = '';
	$_SESSION['messageEmail'] = '';
	header('Location: ../inscription.php');
	exit();
} 
else
{
	$_SESSION['messageSurnom'] = '';
}

if ((htmlspecialchars($_POST['pass']) == htmlspecialchars($_POST['confirm'])))
{
	if (!empty(htmlspecialchars($_POST['pass']))){
	$pass_hache = password_hash(htmlspecialchars($_POST['pass']), PASSWORD_DEFAULT);
	$_SESSION['messagePass'] = '';
	} else {
		$_SESSION['messagePass'] = 'Vous devez definir un mot de passe, même moche.';
		$_SESSION['messageEmail'] = '';
		header('Location: ../inscription.php');
		exit();
	}
}
else
{
	$_SESSION['messagePass'] = 'Vos mots de passe sont différents, retentez !';
	$_SESSION['messageEmail'] = '';
	header('Location: ../inscription.php');
	exit();
}

$email = htmlspecialchars($_POST['email']);
if (empty($email)){
	$_SESSION['messageSurnom'] = '';
	$_SESSION['messagePass'] = '';
	$_SESSION['messageEmail'] = 'Attention, ce champ est nécessaire !';
	header('Location: ../inscription.php');
	exit();
} 

$dem = $bdd->query('SELEct surnom FROM utilisateurs WHERE surnom="'.$surnom.'"');
$surnomverif = $dem->rowCount();
$dem = $bdd->query('SELECT email FROM utilisateurs WHERE email ="'.$email.'"');
$emailverif = $dem->rowCount();
if ($surnomverif>0)
{
	$_SESSION['messageSurnom'] = 'Ce surnom est déjà utilisée.';
	$_SESSION['messagePass'] = '';
	$_SESSION['messageEmail'] = '';
	header('Location: ../inscription.php');
	exit();
}
elseif ($emailverif>0)
{
	$_SESSION['messageSurnom'] = '';
	$_SESSION['messagePass'] = '';
	$_SESSION['messageEmail'] = 'Cette adresse mail est déjà enregistrée';
	header('Location: ../inscription.php');
	exit();
}
$dem->closeCursor();

// Insertion
$req = $bdd->prepare('INSERT INTO utilisateurs (surnom, email, pass) VALUES(?, ?, ?)');
$req->execute(array($surnom, $email, $pass_hache));

$req->closeCursor(); // Termine le traitement de la requête

$_SESSION['username'] = $surnom;
header('Location: ../accueil.php');

?>
