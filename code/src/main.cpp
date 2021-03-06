#include <iostream>

#include "source_configurations.hpp"
#include "instance_configurations.hpp"

#include "target_generator_t.hpp"
#include "EMIR_set_generator_t.hpp"

using namespace EMIR;


int main(int argc, char **argv)
{
	// Generating target source
	vector<target_set_t>  target_sets;
	basic_source_config_t source_config;		
	target_generator_t    target_generator;
	
	target_generator.generate(source_config, target_sets);
	
	const string path(argv[1]);
	
	// Generating Family A
	{
		A_instance_config_t  A_config(path); 
		EMIR_set_generator_t A_set_generator(A_config, target_sets);
		
		A_set_generator.generate();		
	}
	
	// Generating Family B
	{
		B_instance_config_t  B_config(path); 
		EMIR_set_generator_t B_set_generator(B_config, target_sets);
		
		B_set_generator.generate();		
	}	
	
	
	// Generating Family C
	{
		C_instance_config_t  C_config(path); 
		EMIR_set_generator_t C_set_generator(C_config, target_sets);
		
		C_set_generator.generate();		
	}

	// Generating Family D
	{
		D_instance_config_t  D_config(path); 
		EMIR_set_generator_t D_set_generator(D_config, target_sets);
		
		D_set_generator.generate();		
	}
	
	return 0;
}