inline int read_color (std::string const& location) {
	std::string real_location = "./color/" + location;
	
	FILE* color = fopen (real_location.c_str (), "r");
	
	char div_name [LEN_MAX];
	
	while (fscanf (color, "%s\n", div_name) != EOF) {
		div_number [div_name] = div_count;
		
		while (true) {
			std::string line = fgetline (color);
			
			if (line != "") {
				int type = line [0] - '0';
				
				if (type == 1 || type == 2) {
					char beginning [LEN_MAX], ending [LEN_MAX];
					 
					sscanf (line.c_str (), "%*d %s %s", beginning, ending);
					
					word_list.push_back (word (beginning, -type, div_count));
					word_list.push_back (word (ending, type, div_count));
					
					pair_number [beginning] = pair_count;
					pair_number [ending] = pair_count;
					
					pair_boolean.push_back (false);
					
					pair_count ++;
				} else {
					char character [LEN_MAX];
					 
					sscanf (line.c_str (), "%*d %s", character);
					
					word_list.push_back (word (character, type, div_count));
				}
			} else {
				break;
			}
		}
		
		div_count ++;
	}
	
	fclose (color);
}

