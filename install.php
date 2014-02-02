<?php
	$con = mysql_connect("localhost","root","root");
	$res = mysql_select_db("cloudide");
	if (!$res) {
		$sql = "CREATE DATABASE cloudide charset utf8";
		mysql_query($sql);
	}
	mysql_close($con);
?>