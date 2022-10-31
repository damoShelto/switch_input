


#include <switch_input.h>



//-----------------------------

bool is_switch_pressed(void){


	if( digitalRead(PCB_BUTTON)==BUTTON_PRESSED)
{
	delay(5);		//switch debounce

	return true;

}

return false;

}


 //------------------------------
//provide value in milliSeconds

bool is_long_press(uint16_t timeout){

uint32_t timing;

timing = millis();


while(is_switch_pressed()==true)
{
	show_switch_pressed();

	if(millis()-timing >=timeout)
	{
		return true;

	}



}


return false;


}


 //-----------------------------------