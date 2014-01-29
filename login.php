<!DOCTYPE HTML>
<?php
	include("lib/auth_lib.php");
	if (isset ($_REQUEST["auth"])) {
		if (!isset ($_COOKIE["auth"])) authorize();
		cookie_save();
	}
?>

<html>

<head>
	<meta charset="utf-8" />
</head>

<body>
</body>

</html>
