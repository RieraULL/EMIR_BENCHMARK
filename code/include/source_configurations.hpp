#pragma once

#include "source_config_t.hpp"
#include "CSU_EMIR_t.hpp"

namespace EMIR {

	class basic_source_config_t: public source_config_t
	{
	public:
		basic_source_config_t(void): 
		source_config_t(CSU_EMIR_t(), target_range_t({1, 20}, {10, 1000, 10000}), 500, {1, 2, 3, 4, 5})
		{}
		
		~basic_source_config_t(void) {}
	};

}