#include <stdio.h>
#include <stdlib.h>

#include "epocDevice.hpp"


int main()
{
	epocDevice device ;
	int err ;

	if(err = device.connect())
	{
		fprintf(stderr, "oh shit, code error = %d.\nMaybe try with sudo or with the device turned on ?\n", err) ;
		return 1 ;
	}

	for (int i = 0 ; i < 4096 ; i++)
	{
		device.update() ;
		fprintf(stdout, "%d\n", device.getCounter()) ;
	}

	device.disconnect() ;

	return 0 ;
}





