inline std::string fgetline (FILE* const input) {
	std::string result = "";
	
	char data;
	
	while (fscanf (input, "%c", &data) != EOF && data != 10) {
		if (data != 13) {
			result += data;
		}
	}
	
	return result;
}
