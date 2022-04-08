module;
#include <string_view>
export module HelloWorld;

export namespace greeting {
	auto Hello()->std::string_view;
}