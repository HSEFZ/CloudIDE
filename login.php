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
	<link rel="stylesheet" href="css/index.css" type="text/css" />
	<link rel="stylesheet" href="css/login.css" type="text/css" />
</head>

<body>
	<div class="container">
	<div class="navigator">
		<div class="navigator-icon">
		</div>
		<div class="navigator-home">
		</div>
	</div>
		<h1>
			Welcome to Cloud IDE!	
		</h1>
		<div class="loginwindow">
			<div class="loginwindowhead">
			</div>
			<div class="smalltitle">
				Please Login or <a href="#">register a new account</a>
			</div>
		</div>
	</div>
</body>

</html>
