#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    
	unsigned int ilosc_zaglowcow = 0;
    	Stocznia s{};

    	while (towar > 0) 
	{
        	Statek* boat = s();
		
		if(std::dynamic_cast<Zaglowiec*>(boat)!=nullptr)
		{
           		ilosc_zaglowcow++;
		}

        	if (towar > boat->transportuj()) 
        	{
            		towar -= boat->transportuj();
            		delete boat;
        	}

            	else 
       		{
            		delete boat;
            		break;
        	}
    	}
    return ilosc_zaglowcow;
}
