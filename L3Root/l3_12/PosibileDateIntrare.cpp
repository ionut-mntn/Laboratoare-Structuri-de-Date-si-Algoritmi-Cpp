/*
		4 4
		1 1 1 1
		1 0 R 1			// R(obotzelul) s-ar bloca miscandu-se de dreapta la stanga, apoi inapoi la dreapta si tot asa... asta daca nu marchez o pozitie
		1 1 1 1			// vizitata !
		1 1 1 1
		2 3
		*/

		/*
		8 8
		0 0 0 0 0 0 0 0
		0 0 0 0 0 0 0 0
		0 0 0 0 1 1 1 1
		0 0 0 0 1 0 0 0
		0 0 0 1 1 1 0 0
		0 0 0 1 0 1 0 0
		0 0 0 1 0 1 0 0
		0 0 0 1 0 1 0 0
		3 5


		8 8
		0 0 0 0 1 0 1 0
		0 0 0 0 1 1 1 0
		0 0 0 0 0 1 0 0
		0 0 1 1 1 1 0 0
		0 0 1 0 0 0 0 0
		0 0 1 1 0 0 0 0
		0 0 0 0 0 0 0 0
		0 0 0 0 0 0 0 0
		6 4

		8 8
		0 0 0 0 0 0 0 0
		0 0 0 0 1 1 1 0
		0 0 0 0 0 1 0 0
		0 0 1 1 1 1 0 0
		0 0 1 0 0 0 0 0
		0 0 1 1 0 0 0 0
		0 0 0 0 0 0 0 0
		0 0 0 0 0 0 0 0
		6 4

		4 8
		0 0 0 0 0 0 1 1
		0 1 0 1 1 1 1 0
		0 1 1 1 0 0 0 0
		0 0 0 0 0 0 0 0
		2 2

		20 20 
	0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
	0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 1 1 1 1 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 1 1 1
	0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 0 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 0 1 0 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 1 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 1 0 0 0 0 1 1 1 1 1 0 0 0 0 0 0 0 0
	0 0 1 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 1 1 1 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	18 3
	
	18 20
	0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
	0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 1 1 1 1 0 0 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 1 1 1
	0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 0 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 0 1 0 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 1 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0
	0 0 1 0 0 0 0 1 1 1 1 1 0 0 0 0 0 0 0 0
	0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
	17 3

	*/
