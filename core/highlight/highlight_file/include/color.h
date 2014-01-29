inline int read_color (std::string const& location) {
	std::string real_location = "./color/" + location;
	
	FIN* color = fopen (real_location.c_str (), "r");
	
	char div_name [LEN_MAX];
	
	while (fscanf (color, "%s\n", div_name) != EOF) {
		div_number [div_name] = div_count;
		
		while (true) {
			std::string line = fgetline (color);
			
			if (line != "") {
				/**	UNFINISHED	--Read the details of the line.	*/
			} else {
				break;
			}
		}
		
		div_count ++;
	}
	
	fclose (color);
}

