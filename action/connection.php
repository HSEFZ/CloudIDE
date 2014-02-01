<?php
	include("./../const/config.php");
	function mysqlcon(){
		global $con;
		$con = mysql_connect("localhost", "root", "root");
		if (!$con) die('Could not connect: '. mysql_error());
		else echo 'Connected Successfully';
	}
	function sqlclose(){
		mysql_close($con);
	}
?>