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
	<link rel="stylesheet" href="css/navigator.css" type="text/css" />
	<title>Login - CloudIDE</title>
</head>

<body>
	<div class="container">
	<div class="navigator">
		<div class="navigator-icon">
		</div>
		<div class="separate">
		</div>
		<div class="navigator-button">
			<a href="index.php" class="awhite">Home</a>
		</div>
		<div class="navigator-button">
			<a href="#" class="awhite">Dashboard</a>
		</div>
		<div class="navigator-button">
			<a href="#" class="awhite">Editor</a>
		</div>
		<div class="navigator-button">
			<a href="#" class="awhite">About</a>
		</div>
	</div>
		<h1>
			Welcome to Cloud IDE!	
		</h1>
		<div class="loginwindow">
			<div class="loginwindowheader">
				<div class="loginwindowtitle">
				Login Window
				</div>
			</div>
			<div class="loginwindowcontent">
				<form name="input" action="login.php" method="post">
					<div id="username">Username:
					<input class="loginwindowinput" type="text" name="username">
					</div>
					<div id="password">Password:
					<input class="loginwindowinput" type="password" name="password">
					</div>
					<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
					<input type="submit" value="submit">
				</form>
			</div>
			</div>
		</div>
	</div>
</body>

</html>
