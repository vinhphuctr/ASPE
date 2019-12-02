<header class="top">

	<nav>
		<ul  class="navigation">
			<li><a href="accueil.php">Accueil</a></li>
			<li><a href="famille.php">Famille et groupes</a></li>
			<li><a href="evenement.php">Evènements</a></li>
			<li><a href="contact.php">Contact</a></li>
		</ul>
	</nav>
	
	<section classe="deconnexion">
		<p><?php echo $_SESSION['username']; echo 'sid= '.session_id().'Fsid';?></p>
		<p><a href="traitement/deconnexion.php">Deconnexion</a></p>
	</section>
	

	<section class="entete">
		<h1>Bienvenue</h1>
		<p>Vous êtes ici chez vous</p>
	</section>

</header>

</html>
