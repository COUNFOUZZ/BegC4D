<h1>BegC4D</h1>
<h2>Erreur dans le livre:</h2>

<ol>
	<li>
		<h4>Chapitre 17 dans l'ère binaire :</h4>
		<p>
		Page 278 :<br />
		Dans le tableau des "Valeurs binaires négatives"<br />
		Dans l'exemple, ils expliquent que si la variable est de type <code>signed</code> et que le bit le plus à gauche est armé <i>(le bit possède la valeur 1)</i> alors la valeur sera négative. Or leur exemple est incorrect.
		</p>
		<p>
		Exemple qu'ils donnent :
		<ol>
			1. <code>1 0 0 0 0 0 0 0</code> = <code>-128</code><br />
			2. <code>1 0 0 0 0 0 0 1</code> = <code>-129</code><br />
			3. <code>1 0 0 0 0 0 1 0</code> = <code>-130</code><br />
			<p>
			<h6><i>L'exemple est donné avec un <code>signed char</code> or on sait que la plage de valeurs d'un <code>signed char</code> est entre 				<code>-128 à 127</code></i></h6>
			</p>
		</ol>
		</p>
		<p>
		Dans l'exemple ci-dessus, seul le premier exemple est juste.
		</p>
		<i>Correction :</i>
		<p>
		<ol>
			1. <code>1 0 0 0 0 0 0 0</code> = <code>-128</code><br />
			2. <code>1 0 0 0 0 0 0 1</code> = <code>-127</code><br />
			3. <code>1 0 0 0 0 0 1 0</code> = <code>-126</code><br />
		</ol>
		</p>
	</li>
</ol>

