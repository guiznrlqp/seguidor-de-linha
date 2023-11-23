#define _TASK_1_ 1
#include "KYLib.h"
#include "stm32f10x.h"
#include "taskMange.h"
void task1(void){
  while (1) {
    if((Get_Colour_Data(5,1))==(6)) {
      SetMotor(1,-25);
      SetMotor(2,-25);
    } else {
      SetMotor(1,0);
      SetMotor(2,0);
    }
    if((Get_Colour_Data(6,1))==(6)) {
      SetMotor(2,-25);
    } else {
      SetMotor(2,0);
    }
    if((Get_Colour_Data(5,1))==(1)) {
      SetMotor(1,25);
      SetMotor(2,-25);
      SetWaitForTime(0.3);
    }
    if((Get_Colour_Data(6,1))==(1)) {
      SetMotor(1,-25);
      SetMotor(2,25);
      SetWaitForTime(0.3);
    }
  }
}
