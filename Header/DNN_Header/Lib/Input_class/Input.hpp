#ifndef __DNN_INPUT_HPP__
#define __DNN_INPUT_HPP__

#include "../DNNLIB.hpp"
#include "../DateAndTime_class/DateAndTime.hpp"

const char* DNN::input::inputDate(char* date)
{
	char input;
	int index = 0;

	while(true)
	{
		input = getch();  
		
        if(input == KEY_ENTER) 
		{
            if(index == 10)
            {
              break;
            }

            else continue;
		}	
        

		else if(input == KEY_BACKSPACE)// key backspace
		{	
			if(index > 0)
			{
				printf("\b \b");
				
				index--;

				date[index] = '\0';
			}
		}

        else if(!(input >= '0' && input <= '9'))
		{
			continue;
		}

		else
		{
			if(index < 10)
			{
                if(index == 2 || index == 5)
                {
                    printf("/");
                    
                    date[index] = '/';

                    index++;
                }

				printf("%c", input);
				
                // add char array
				date[index] = input;
				
                //next position
				index++;
			}

			else
			{
				// set to NULL
				date[index] = '\0';
			}
			
		}
	}

	// set to NULL
	date[index] = '\0';//charArray[index] = NULL;
	
	return date;
}

const char* DNN::input::inputDate(char* date, int limitAge)
{
 	char input;
	int index = 0;

	while(true)
	{
		input = getch();  
		
        if(input == KEY_ENTER) 
		{
            if(index == 10 && DateAndTimes::calculateAge(date) >= limitAge)
            {
              break;
            }

            else continue;
		}	

		else if(input == KEY_BACKSPACE) // key backspace
		{	
			if(index > 0)
			{
				printf("\b \b");
				
				index--;
				
				date[index] = '\0';
			}
		}

        else if(!(input>='0' && input<='9'))
		{
			continue;
		}

		else
		{
			if(index < 10)
			{
                if(index == 2 || index == 5)
                {
                    printf("/");
                    
                    date[index] = '/';

                    index++;
                }

				printf("%c", input);
				
                // add char array
				date[index] = input;
				
                //next position
				index++;
			}

			else
			{
				// set to NULL
				date[index] = '\0';
			}
			
		}
	}

	// set to NULL
	date[index] = '\0';//charArray[index] = NULL;
	
	return date;

}

const char* DNN::input::inputMail(char* mail, int size)
{
	char input;
	int index = 0;

	while(true)
	{
		input = getch();  
		
        if(input == KEY_ENTER) 
		{
            if(index <= size && index > 1)
            {
              break;
            }

            else continue;
		}	

		else if(input == KEY_BACKSPACE) // key backspace
		{	
			if(index > 0)
			{
				printf("\b \b");
				
				index--;
				
				mail[index] = '\0';
			}
		}

        else if(!((input >= '0' && input <= '9') || input == '@' || input == '.' || (input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')))
		{
			continue;
		}

		else
		{
			if(index <= size)
			{

				printf("%c", input);
				
                // add char array
				mail[index] = input;
				
                //next position
				index++;
			}

			else
			{
				// set to NULL
				mail[index] = '\0';
			}
			
		}
	}

	// set to NULL
	mail[index] = '\0';//charArray[index] = NULL;
	
	return mail;

}
#endif 