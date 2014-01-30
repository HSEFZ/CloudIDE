inline void print_highlight (std::string const& input_filename, std::string const& output_filename) {
	FILE* input = fopen (input_filename.c_str (), "r");
	FILE* output = fopen (output_filename.c_str (), "w");
	
	std::string line;
	 
	while (fgetline (input, line)) {
		int length = (int)line.length ();
		
		/**	collect the information of (line)	*/
		
		belong.clear ();
		belong.resize (length);
		
		for (int i = 0; i < (int)word_list.size (); ++i) {
			int word_length = (int)word_list [i].data.length ();
			
			for (int j = 0; j + word_length - 1 < length; ++j) {
				bool is_equal = true;
				
				for (int k = 0; k < word_length; ++k) {
					if (line [j + k] != word_list [i].data [k]) {
						is_equal = false;
						break;
					}
				}
				
				if (is_equal) {
					for (int k = 0; k < word_length; ++k) {
						belong [j + k] = word_list [i];
					}
				}
			}
		}
		
		/** SHOULD BE DELETED	--debug
		for (int i = 0; i < length; ++i) {
			printf ("%s,%d,%d%s", belong [i].data.c_str (), belong [i].type, belong [i].div, (i < length - 1) ? " | " : "\n");
		}
		*/
		
		/**	UNFINISHED	--scan the string (line)	*/
		
		for (int i = 0; i < length; ++i) {
			
		}
	}
	
	fclose (input);
	fclose (output); 
}
