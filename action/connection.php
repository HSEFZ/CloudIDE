<?php
	include("./../const/config.php");
	function mysqlcon(){
		$con=mysql_connect($DB_HOST, $DB_USER, $DB_PSWD);
		if (!$con) die('Could not connect: '. mysql_error());
		else echo 'Connected Successfully';
	}
	function sqlclose(){
		mysql_close($con);
	}
?>