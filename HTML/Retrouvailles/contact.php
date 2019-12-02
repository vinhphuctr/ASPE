<?php
session_start();
?>

<!DOCTYPE html>

<html lang="fr">
	
<head>
	<meta charset="utf=8" />
	<link rel="stylesheet" type="text/css" href="default.css" media="screen"/>
	<title>Contact</title>
</head>

<?php require("header.php"); ?>

<main class="container">

	<body>

		<section class="groupe">
			<h2>Pour me joindre</h2>
			<p>Vous pouvez utiliser le formulaire suivant (pour l'instant en cours d'installation, ne fonctionne pas !)</p>
				<form method="post" action="traitement.php">
					<p>
						<label for="nom">Votre nom :</label>
						<input type="text" name="nom" id="nom" />
						<br />
						<br />
						<label for="email">Votre email :</label>
						<input type="email" name="email" id="email" />
						<br />
						<br />
						<label for="message">N'hésitez pas,je suis à l'écoute de tout commentaire:</label>
						<br />
						<textarea name="message" id="message" rows="10" cols="70"></textarea>
						<br />
						<br />
						<br />
						<input type="submit" value="Envoyer" />
					</p>
				</form>
			<h2>Sinon ma boite mail</h2>
			<p>Pas encore définie non plus... Patience!</p>
		</section>
		
	</body>
	
</main>
     
<?php require("footer.php"); ?>
     
</html>
