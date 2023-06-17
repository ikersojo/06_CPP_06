#include "../inc/main.hpp"

void	test1(void)
{
	Data		data;
	Data*		ptr_data;
	uintptr_t	number;

	data.name = "iker";
	data.id = 42;
	std::cout << "data structure (name:" << data.name << ", id: "
				<< data.id << ")" << std::endl;
	number = Serializer::serialize(&data);
	std::cout << "number = " << number << std::endl;
	ptr_data = Serializer::deserialize(number);
	std::cout << "data structure (name:" << ptr_data->name << ", id: "
				<< ptr_data->id << ")" << std::endl;
}
