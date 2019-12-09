<?php
session_start();

require "../parametres/identifiants.php";


//récupérer les valeurs des noms/prenoms et date de naissance s'ils sont saisis.

if (!empty(htmlspecialchars($_POST['nom']))){
	$nom = htmlspecialchars($_POST['nom']);
	$req = $bdd->prepare('UPDATE utilisateurs SET nom = "'.$nom.'" WHERE surnom="'.$_SESSION['username'].'"');
	$req->execute(array($nom));
	$req->closeCursor();
}

if (!empty(htmlspecialchars($_POST['prenom']))){
	$prenom = htmlspecialchars($_POST['prenom']);
	$req = $bdd->prepare('UPDATE utilisateurs SET prenom = "'.$prenom.'" WHERE surnom="'.$_SESSION['username'].'"');
	$req->execute(array($prenom));
	$req->closeCursor();
}

if (!empty(htmlspecialchars($_POST['ddn']))){
	$ddn = htmlspecialchars($_POST['ddn']);
	$req = $bdd->prepare('UPDATE utilisateurs SET date_naissance = "'.$ddn.'" WHERE surnom="'.$_SESSION['username'].'"');
	$req->execute(array($ddn));
	$req->closeCursor();
}

header('location: ../espaceperso.php');
?>
