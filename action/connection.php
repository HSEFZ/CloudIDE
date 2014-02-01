<?php
	include("./../const/config.php");
	global $con;
	$con = mysql_connect("localhost", "root", "root");
	if (!$con) die('Could not connect: '. mysql_error()); 	else echo 'Connected Successfully';
	if (isset($cmdt) && $cmdt == 10086) include("./../action/authorize.php");
	mysql_close($con);
?>