<html>
<head>
	<meta charset="utf-8" />
	<title>Redirecting...</title>
</head>
<body>
<?php
	include("connection.php");
	function authorize(){
		mysqlcon();
		sqlclose();
		return;
	}
	function failure_notice($str) {
		echo "<div class=\"failure\">" . $str . "</div>";
		echo "<script>setInterval(\"window.location.href='../login.php'\",2000)</script>";
	}
	if (!isset($_REQUEST["username"]) || $_REQUEST["username"]=="") {
		failure_notice("Please Enter Username");
	}
	else if (!isset($_REQUEST["password"]) || $_REQUEST["password"]=="") {
		failure_notice("Please Enter Password");
	} else {
		authorize();
	}
?>
</body>
</html>