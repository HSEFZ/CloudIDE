<!DOCTYPE HTML>
<html>

<head>
	<meta charset="utf-8" />
	<title>Welcome to CloudIDE!</title>
	<link rel="stylesheet" href="css/index.css" type="text/css" />
	<script>
		function changeToAdminHome(){
			window.location.href="admin.php";
		}
		function changeToLoginPage(){
			window.location.href="login.php";
		}
	</script>
</head>

<body>
	<div class="panel" OnClick="changeToAdminHome()">
	</div>
	<div class="container">
		<h1>
			Welcome to Cloud IDE!
		</h1>
		<center>
			<div class="button" onclick="changeToLoginPage()">
				<span class="index-button">
					Getting Started!
				</span>
			</div>
		</center>
		<br><br>
		<div class="leftside">
			<div class="smalltitle">
				New Features and Updates
			</div>
			<ul id="left">
				<!-- see history.php -->
				<li>
					2014/1/30 login window created
				</li>
				<li>
					2014/1/30 core::Highlight updated
				</li>
				<li>
					2014/1/29 Basic CSS and frames
				</li>
				<li>
					2014/1/29 Highligh Core added
				</li>
				<!-- if the screen is too small<li>
					2014/1/29 GitHub Synced
				</li>
				<li>
					2014/1/29 login page created
				</li>-->
				<li>
					<a href="history.php">more...</a>
				</li>
			</ul>
		</div>
		<div class="rightside">
		</div>
	</div>
</body>

</html>
