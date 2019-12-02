<?php
try
{
$bdd = new PDO('mysql:host=organisafbsophie.mysql.db;dbname=organisafbsophie;charset=utf8', 'organisafbsophie', 'Maripa05');
}
catch (Exception $e)
{
        die('Erreur : ' . $e->getMessage());
}
?>
