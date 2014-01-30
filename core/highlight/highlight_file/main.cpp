#include "./include/header.h"
#include "./include/constant.h"
#include "./include/variable.h"

#include "./include/io.h"

#include "./include/type.h"
#include "./include/color.h"
#include "./include/highlight.h"

int main (int argc, char** argv) {
	if (argc == 3) {
		std::string filename = argv [1];
		std::string output = argv [2];
		
		std::string type = get_type (filename);
		
		if (type == "" || !find_type (type)) {
			type = "original";
		}
		
		read_color (type_location (type));
		
		print_highlight (filename, output);
	}
}

