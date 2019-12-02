<?php
session_start();
?>
	

<!DOCTYPE html>

<html lang="fr">
	
<head>
	<meta charset="utf=8" />
	<link rel="stylesheet" type="text/css" href="default.css" media="screen"/>
	<title>Inscription</title>
</head>

<?php require("headerbis.php"); ?>

<main class="container">

	<body>

		<section>
			<h2>Inscrivez-vous</h2>
				<form method="post" action="traitement/inscriptionttt.php">
					<p>
						<label for="surnom">choisissez votre pseudo :</label>
						<input type="text" name="surnom" id="surnom" /> <?php echo $_SESSION['messageSurnom']; ?>
						<br />
						<label for="pass">Votre mot de passe :</label>
						<input type="password" name="pass" id="pass" />
						<br />
						<label for="confirm">Retapez votre mot de passe :</label>
						<input type="password" name="confirm" /> <?php echo $_SESSION['messagePass']; ?>
						<br />  
						<label for="email">Entrez votre email:</label>
						<input type="email" name="email" id="email"/> <?php echo $_SESSION['messageEmail']; ?>
						<br />
						<input type="submit" value="envoyer" />
						<br />
					</p>
				</form>
		</section>
		<Section>
			<p><a href="../connexion.php">Vous étiez déjà enregistré ? Connectez-vous !</a></p>
		</Section>
		
	</body>
	
</main>
     
<?php require("footer.php"); ?>
     
</html>
