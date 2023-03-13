<!DOCTYPE html>
<html>
<head>
	<title>Sito Eratostenesa</title>
</head>
<body>

	<form method="post">
		<label>Liczba:</label>
		<input type="text" name="number">
		<input type="submit" value="Sprawdź">
	</form>

	<?php
		if ($_SERVER["REQUEST_METHOD"] == "POST") {
			$numer = $_POST["number"];
			$sieve = array_fill(2, $numer - 1, true);

			for ($i = 2; $i <= sqrt($numer); $i++) {
				if ($sieve[$i]) {
					for ($j = $i * $i; $j <= $numer; $j += $i) {
						$sieve[$j] = false;
					}
				}
			}

			echo "<h3>Liczby pierwsze mniejsze lub równe $numer:</h3>";

			for ($i = 2; $i <= $numer; $i++) {
				if ($sieve[$i]) {
					echo $i . ", ";
				}
			}
		}
	?>

</body>
</html>
