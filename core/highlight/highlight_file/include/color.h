inline int read_color (std::string const& location) {
	std::string real_location = "./color/" + location;
	
	FIN* color = fopen (real_location.c_str (), "r");
	
	fclose (color);
}

