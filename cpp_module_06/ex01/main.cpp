#include "Serialization.hpp"
#include "Data.hpp"

int main(void)
{
	Data *data = new Data();

	std::cout << "직렬화 하기 전 data address: " << data << std::endl;
	uintptr_t ptr = Serialization::serialize(data);
	std::cout << "raw ptr address: " << ptr << std::endl;
	data = Serialization::deserialize(ptr);
	std::cout << "역직렬화 한 후 data address: " << data << std::endl;
}