<?php
	include("./../const/config.php");
	global $con;
	$con = mysql_connect("localhost", "root", "root");
	if (!$con) die('Could not connect: '. mysql_error());
	else echo 'Connected Successfully';
	mysql_close($con);
?>