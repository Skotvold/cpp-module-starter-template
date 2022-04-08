module;
#include <string_view>
module HelloWorld;

auto greeting::Hello() -> std::string_view {
	return "Hello, World!";
}