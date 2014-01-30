inline void print_highlight (std::string const& input_filename, std::string const& output_filename) {
	FILE* input = fopen (input_filename.c_str (), "r");
	FILE* output = fopen (output_filename.c_str (), "w");
	
	std::string line;
	 
	while (fgetline (input, line)) {
		/**	UNFINISHED	--AC Automata	*/
		
		/**	UNFINISHED	--scan the string (line)	*/
		
		int length = (int)line.length ();
		
		for (int i = 0; i < length; ++i) {
			
		}
	}
	
	fclose (input);
	fclose (output); 
}
