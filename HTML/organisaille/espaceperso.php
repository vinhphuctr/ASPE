<?php
session_start();
if(empty($_SESSION['username'])) {
  Header('Location: index.php');
  exit();
}
require "parametres/identifiants.php";

//récupérer les paramètres de la base de donnée

$dem = $bdd->query('SELEct * FROM utilisateurs WHERE surnom="'.$_SESSION['username'].'"');
$dataUser = $dem->fetch();

$_SESSION['nom']= $dataUser['nom'];
$_SESSION['prenom']= $dataUser['prenom'];
$_SESSION['ddn']= $dataUser['date_naissance'];

$dem->closeCursor();
?>

<!DOCTYPE html>
     
<html>
     
    <head>
    	<meta charset="utf=8" />
    	<link rel="stylesheet" type="text/css" href="default.css" media="screen"/>
    	<title>Espace personnel</title>
    </head>
    
<?php 
require("header.php"); 
?>
	
    <main class="container">
     
    	<body>

    		<section>
    			<h2>Vous pouvez compléter un peu votre profil</h2>
    			<p>Aucun des champs ci dessous n'est obligatoire, cependant ils me seront bien pratiques pour vous proposer certaines fonctionnalités. N'ayez crainte, je ne diffuse pas l'année de naissance à d'éventuels médisants. Un minimum de discrétion tout de même !</p>
    			<form method="post" action="traitement/espacepersottt.php">
					<p>
						<?php if (empty($_SESSION['nom'])) { 
								echo '<label for="nom">Quel est votre nom ?<input type="text" name="nom" id="nom" /></label><br />';
							} else {
								echo 'Votre nom est ',$_SESSION['nom'],'<br />';
							}
							if (empty($_SESSION['prenom'])) { 
								echo '<label for="prenom">Ainsi que votre prénom ?<input type="text" name="prenom" id="prenom" /></label><br />';
							} else {
								echo 'Votre prenom est ',$_SESSION['prenom'],'<br />';
							}
							if (empty($_SESSION['ddn']) || $_SESSION['ddn'] == '0000-00-00') { 
								echo '<label for="ddn">Et votre date de naissance ?<input type="date" name="ddn" /></label><br />';
							} else {
								echo 'Votre date de naissance est ',$_SESSION['ddn'],'<br />';
							}
							if (empty($_SESSION['nom']) ||empty($_SESSION['prenom']) ||empty($_SESSION['ddn']) || $_SESSION['ddn'] == '0000-00-00') {
								echo '<input type="submit" value="Valider" />';
							}
						?>
					</p>
				</form>
				<p>Voilà, c'est tout ! Un jour il y aura probablement la possibilité de rajouter un avatar mais pour l'instant j'ai plus urgent à traiter.</p>
				<p>Pour le moment, si vous souhaitez modifier vos données ou supprimer définitivement votre compte, contactez moi. Plus tard vous aurrez la possibilité de le faire vous même.</p>
            </section>
     
    	</body>
	</main>
     
    <?php require("footer.php"); ?>
     
</html>
     			
