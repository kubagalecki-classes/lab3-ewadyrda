#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    
	int liczba_statkow=0;
	Stocznia stocznia{};
	
	while(towar>0)
		{
			Statek* s1 = stocznia();
			
			if(typeid(*(s1))==typeid(Zaglowiec))
				{ 
					liczba_statkow++;
				}
			if(towar>s1->transportuj()
			{
				towar-=s1->transportuj();
				delete s1;

			}
			else
			{
				delete s1;
				break;
			}
		}
    	return liczba_statkow;
}
