inline std::string get_type (std::string const& filename) {
	int length = filename.length ();
	
	int dot_position = -1;
	
	for (int i = length - 1; i >= 0; --i)
		if (filename [i] == '.') {
			dot_position = i;
			break;
		}
	
	if (dot_position >= 0) {
		std::string type = "";
		
		for (int i = dot_position + 1; i < length; ++i)
			type += filename [i];
		
		return type;
	} else {
		return "";
	}
}

inline bool find_type (std::string const& type) {
	FILE* content = fopen ("./color/_content_", "r");
	
	bool exist = false;
	char type_name [LEN_MAX], type_location [LEN_MAX];
	
	while (fscanf (content, "%s|%s\n", type_name, type_location) != EOF) {
		if (type_name == type) {
			exist = true;
			break;
		}
	}
	
	fclose (content);
	
	return exist;
}

inline std::string type_location (std::string const& type) {
	FILE* content = fopen ("./color/_content_", "r");
	
	std::string location;
	char type_name [LEN_MAX], type_location [LEN_MAX];
	
	while (fscanf (content, "%s|%s\n", type_name, type_location) != EOF) {
		if (type_name == type) {
			location = type_location;
			break;
		}
	}
	
	fclose (content);
	
	return location;
}
