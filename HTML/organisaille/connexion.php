<?php
session_start();
?>

<!DOCTYPE html>

<html lang="fr">
	
<head>
	<meta charset="utf=8" />
	<link rel="stylesheet" type="text/css" href="default.css" media="screen"/>
	<title>Connexion</title>
</head>

<?php require("headerbis.php"); ?>

<main class="container">

	<body>

		<section>

			<h2>connectez-vous</h2>
				<form method="post" action="traitement/connexionttt.php">
					<p>
						<label for="surnom">Surnom :</label>
						<input type="text" name="surnom" id="surnom" /> <?php echo $_SESSION['messageSurnomNexion']; ?>
						<br />
						<label for="pass">Mot de passe :</label>
						<input type="password" name="pass" id="pass" /> <?php echo $_SESSION['messagePassNexion']; ?>
						<br />
						<input type="submit" value="connexion" />
						<br />
					</p>
				</form>'
		
		</section>
		
		<Section>
			<p><a href="../inscription.php">Pas encore inscrit ? Inscrivez-vous !</a></p>
		</Section>
		
	</body>
	
</main>
     
<?php require("footer.php"); ?>
     
</html>
