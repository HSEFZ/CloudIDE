inline void print_highlight (std::string const& input_filename, std::string const& output_filename) {
	FILE* input = fopen (input_filename.c_str (), "r");
	FILE* output = fopen (output_filename.c_str (), "w");
	
	
	
	fclose (input);
	fclose (output); 
}
