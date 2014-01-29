inline std::string fgetline (FILE* const& input) {
	std::string result = "";
	
	char data;
	
	while (fscanf (input, "%c", &data) != EOF && data != 10) {
		if (data != 13) {
			result += data;
		}
	}
	
	return result;
}

inline bool fgetline (FILE* const& input, std::string& result) {
	result = "";
	
	char data;
	
	while (fscanf (input, "%c", &data) != EOF) {
		if (data == 10) {
			return true;
		}
		
		if (data != 13) {
			result += data;
		}
	}
	
	if (result == "") {
		return false;
	} else {
		return true;
	}
}
