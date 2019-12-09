<?php
session_start();
if(empty($_SESSION['username'])) {
  Header('Location: index.php');
  exit();
}
error_reporting(E_ALL);
ini_set("display_errors", 1);
?>
<?php require('parametres/function.php'); ?>

<!DOCTYPE html>

<html>

<head>
	<meta charset="utf=8" />
	<link rel="stylesheet" type="text/css" href="default.css" media="screen"/>
	<title>Famille et groupes</title>
</head>

<?php require("header.php");?>

<main class="container">
	
	<body>
		<section class="presentation_groupe">
			<h2>Famille et groupes</h2>
			<p>Ici, vous trouverez les différents groupes / famille auxquels vous appartenez !</p>
		</section>
		<section class="trouverGroupe">
			<p>Trouver mon groupe à partir de l'indentifiant fourni</p>
			<form method="post" action="traitement/famillettt.php">
				<p>
					<label for="id_groupe">Identifiant :<input type="text" name="id_groupe" id="id_groupe" /></label> <?php echo $_SESSION['messageId_groupe']; ?>
					<br />
					<input type="submit" value="connexion" />
				</p>
			</form>'
		</section>
		<section class="creerGroupe">
			<p>créer un nouveau groupe !</p>
			<form method="post" action="traitement/familleNouvttt.php">
				<p>
					<label for="nom_groupe">choisissez un nom :</label>
					<input type="text" name="nom_groupe" id="nom_groupe" /> <?php echo $_SESSION['messageNom_groupe']; ?>
					<br />
					<input type="submit" value="envoyer" />
				</p>
			</form>
		</section>
		<?php /*$info_groupe = getGroups();
		echo '<section class="mes_groupes">
			<h2>Mes différents groupes</h2>
			<ul>
				<li><a>'".$info_groupe['nom_g']."'</a></li>
			</ul>
		</section>'
		*/?>
	</body>
	
</main>
     
<?php require("footer.php"); ?>
     
</html>
