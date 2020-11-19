#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
	int liczba_statkow=0;
	Stocznia stocznia{};
	
	while(toawr>0)
		{
			Statek* s1 = stocznia();
			
			if(typeid(*(statek))==typeid(Zaglowiec))
			{ 
				liczba_statkow++;
			}
        
			if(towar>statek->transportuj()
			{
				towar-=statek->transportuj();
				delete statek;

			}
               
			else
			{
				delete statek;
				break;
			}
		}
    	return liczba_statkow;
}
