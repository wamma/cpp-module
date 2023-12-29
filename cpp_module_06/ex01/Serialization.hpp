#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serialization
{
	private:
		Serialization(const Serialization &copy);
		Serialization &operator=(const Serialization &copy);

	public:
		Serialization();
		~Serialization();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};