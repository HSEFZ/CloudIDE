<!DOCTYPE HTML>

<html>
<head>
	<link rel="stylesheet" href="css/index.css" type="text/css" />
	<link rel="stylesheet" href="css/navigator.css" type="text/css" />
</head>
<script>
	function changeToAdminHome() {
		window.location.href="index.php";
	}	
</script>
<body>
<div class="container">
	<div class="navigator">
		<div class="navigator-button">
			Home
		</div>
		<div class="navigator-button" OnClick="changeToAdminHome()">
			Admin_Home
		</div>
		<div class="navigator-button">
			Environment
		</div>
		<div class="navigator-button">
			Users&Groups
		</div>
	</div>
</div>
<div class="window">
</div>
</body>
</html>
