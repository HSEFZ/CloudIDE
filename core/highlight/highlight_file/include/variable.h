/**	Global Variables	*/ 

struct word {
	std::string data;
	int type, div;
	
	inline word (std::string const& _data, int const& _type, int const& _div) {
		data = _data;
		type = _type;
		div = _div;
	}
};

int div_count;

std::map < std::string, int > div_number;
std::vector < word > word_list;

/**	Variables for highlight.h	*/

std::vector < word > belong;
