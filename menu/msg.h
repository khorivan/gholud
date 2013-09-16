/* Модуль сообщений
 * обновлен.....................................................................15.11.2010 16:43:28
*/

#include "../menucore/usr.h"
#include "../res.h"

#ifndef MSG
#define MSG
typedef struct
{
	uint8_t last_min;
} gmsg_t;
#endif

extern gmsg_t gMsg;

//------------------------------------------------------------------------------
//сообщения
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//FIRST START
//------------------------------------------------------------------------------
extern usr_wnd_t msgW_Firstly;
//------------------------------------------------------------------------------
//LINK
//------------------------------------------------------------------------------
#define MSG_RTC								1
#define MSG_TEMPSENS1						2
#define MSG_TEMPSENS2						3
#define MSG_MEM								4
extern usr_wnd_t msgW_LinkErr;													//ошибка связи
//------------------------------------------------------------------------------
//IIC
//------------------------------------------------------------------------------
extern usr_wnd_t msgW_IicErr;													//IIC, код
//------------------------------------------------------------------------------
//RTC
//------------------------------------------------------------------------------
//extern usr_wnd_t msgW_WasTimeShift;												//"переведено время"
//------------------------------------------------------------------------------
//ALM
//------------------------------------------------------------------------------
#define MSG_TIMEON							1
#define MSG_TIMEDUR							2
#define MSG_TIMEREP							3
#define MSG_TIMEOFF							4
#define MSG_REPNUM							5
#define MSG_DAY								6
#define MSG_STATE							7
#define MSG_MELODY							8
#define MSG_TYPE							9
#define MSG_TBOTTOM							10
#define MSG_TTOP							11
#define MSG_DATEON							12
#define MSG_FILTR							13
#define MSG_STR								14
#define MSG_MESSAGE							15
#define MSG_TIMES							16

extern usr_wnd_t msgW_AlmLost;													//утеряно
extern usr_wnd_t msgW_AlmWas;													//сообщение было
//------------------------------------------------------------------------------
//TMR
//------------------------------------------------------------------------------
extern usr_wnd_t msgW_TmrLost;													//утеряно
//------------------------------------------------------------------------------
//RMD
//------------------------------------------------------------------------------
extern usr_wnd_t msgW_RmdSignal;												//сигнал напоминалки
extern usr_wnd_t msgW_RmdLost;													//утеряно
//------------------------------------------------------------------------------
//TRG
//------------------------------------------------------------------------------
extern usr_wnd_t msgW_TrgTbmoreTt;												//Tн > Tв
extern usr_wnd_t msgW_TrgLost;													//утеряно
//------------------------------------------------------------------------------
//TMP
//------------------------------------------------------------------------------
extern usr_wnd_t msgW_TmpOnSens;
//------------------------------------------------------------------------------
//функции
//------------------------------------------------------------------------------

void msg_Ini(void);
																				//check the msg minute signal
#define MSG_CHECK_TIMERS()														\
{																				\
	if (usr_WndType() > USR_WND_MENU)											\
	{																			\
		if (gRtc.time.min != gMsg.last_min)										\
		{																		\
			gMsg.last_min = gRtc.time.min;										\
			sgn_Try_On(RES_IS_MSG, 0, SGN_MEL_MINUTE_MSG);						\
		}																		\
	}																			\
}
