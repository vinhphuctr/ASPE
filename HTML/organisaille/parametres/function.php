<?php
function getGroups()
{
	$dem = $bdd->query('SELEct nom_g FROM groupes NATURAL JOIN appartenir NATURAL JOIN utilisateurs WHERE surnom='.$S_SESSION['username'].'');
	$dem->execute();
	var_dump($dem->fetchAll(PDO::FETCH_COLUMN|PDO::FETCH_GROUP));
	return($dem);
}
?>

