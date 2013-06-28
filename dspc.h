/*	Конфигурация модуля графического интерфейса DSP
 *	обновлен....................................................................28.12.2010 13:48:14
 */

#include "pdef.h"

#ifndef DSPC_H_
#define DSPC_H_
//------------------------------------------------------------------------------
//модель индикатора
//------------------------------------------------------------------------------

	#define	___BC1602E		0													//(Bolymin)
	#define	___WH1602D		1													//(Winstar)
	#define ___BG12864F		2													//(Bolymin)
	#define ___RLD5621		3													//(LED)
#define DSPC_INICATOR_MODEL						___BC1602E

//------------------------------------------------------------------------------
//конфигурация Print()
//------------------------------------------------------------------------------

#define DSPC_USE_FLASH_STR						1								//используеться вывод flash строки
#define DSPC_USE_EEPROM_STR						0								//используеться вывод eeprom строки
#define DSPC_USE_RAM_STR						1								//используеться вывод ram строки
#define DSPC_USE_SYMBOL							1								//используеться вывод символа
#define DSPC_USE_INT							1								//используеться вывод uint16_t
#define DSPC_USE_SIGNED_INT						1								//исплльзуеться вывод целого со знаком
#define DSPC_USE_LONG							1								//используеться вывод uint32_t
#define DSPC_USE_HEX							0								//используеться вывод hex
#define DSPC_USE_ACCURACY						1								//используеться алгоритм задания точности вывода
#define DSPC_USE_FLOAT							1								//используеться вывод числа с плавающей точкой
#define DSPC_USE_ONSTR							1								//используеться вывод на ram строку
#define DSPC_USE_TIME							1								//используеться вывод структуры типа TIME_
#define DSPC_USE_DATE							1								//используеться вывод структуры типа DATE_
#define DSPC_USE_FULLYAER						1								//используеться год будет выводится полностью

	#define ___DSPC_SINGLE_ARROW		0
	#define ___DSPC_DOUBLE_ARROW		1
#define DSPC_ARROW_TYPE							___DSPC_SINGLE_ARROW

//#define dspc_									flash_							//спецификатор командной строки
typedef uint8_pr_t								DSPC_CSTR_;						//тип коммандной строки
typedef uint8_pr_t								DSPC_STR_;						//тип строки

#define DSPC_TIME_SEPARATOR						':'
#define DSPC_DATE_SEPARATOR						'.'

//------------------------------------------------------------------------------
//остальное
//------------------------------------------------------------------------------

//#define dspt_									flash_							//спецификатор таблиц
typedef const uint8_pr_t							DSPC_TAB_;						//тип данных таблиц

	#define ___DSPC_UKR				1
	#define ___DSPC_RUS				2
#define DSPC_LENGUAGE							___DSPC_RUS						//основной язык

//------------------------------------------------------------------------------
//специальные символы
//------------------------------------------------------------------------------

#define DSPC_SYM_ARROW1							0xC9							//символ левая стрелочка
#define DSPC_SYM_ARROW2							DSP_SPEC_STR + 1				//символ правая стрелочка
#define DSPC_SYM_STAR							0xFB							//символ звездочка
#define DSPC_SYM_WOW							'!'								//символ восклицание
#define DSPC_SYM_SPACE							0x20								//символ пробел
#define DSPC_SYM_PROGRESS_FUL					DSP_SPEC_STR + 5				//символ строки прогресса полный
#define DSPC_SYM_PROGRESS_EMP					DSP_SPEC_STR + 6				//символ строки прогресса пустой
#define DSPC_SYM_CHECKMARK						DSP_SPEC_STR + 3				//символ галочка
#define DSPC_SYM_GRADUS							DSP_SPEC_STR + 2				//символ градус
#define DSPC_SYM_SQRT							DSP_SPEC_STR + 7				//символ корень квадратный

//------------------------------------------------------------------------------
//масив специальных символов
//------------------------------------------------------------------------------


const static DSPC_TAB_ special_symbols[] =
{
0x1F,	/*  ...@@@@@  */
0x0E,	/*  ....@@@.  */
0x04,	/*  .....@..  */														//курсор
0x00,	/*  ........  */
0x00,	/*  ........  */
0x00,	/*  ........  */
0x00,	/*  ........  */
0x00,	/*  ........  */
	
0x3F,	/*  ..@@@@@@  */
0x00,	/*  ........  */
0x00,	/*  ........  */														//символ строки прогресса пустой
0x00,	/*  ........  */
0x00,	/*  ........  */
0x00,	/*  ........  */
0x3F,	/*  ..@@@@@@  */
0x00,	/*  ........  */

0x00,	/*  ........  */
0x06,	/*  .....@@.  */
0x09,	/*  ....@..@  */														//градус
0x09,	/*  ....@..@  */
0x06,	/*  .....@@.  */
0x00,	/*  ........  */
0x00,	/*  ........  */
0x00,	/*  ........  */

0x00,	/*  ........  */
0x00,	/*  ........  */
0x01,	/*  .......@  */														//галочка
0x02,	/*  ......@.  */
0x14,	/*  ...@.@..  */
0x08,	/*  ....@...  */
0x00,	/*  ........  */
0x00,	/*  ........  */

0x00,	/*  ........  */
0x04,	/*  .....@..  */
0x0E,	/*  ....@@@.  */														//колокольчик
0x0E,	/*  ....@@@.  */
0x0E,	/*  ....@@@.  */
0x1F,	/*  ...@@@@@  */
0x04,	/*  .....@..  */
0x00,	/*  ........  */

0x00,	/*  ........  */
0x0E,	/*  ....@@@.  */
0x1F,	/*  ...@@@@@  */														//включенный переключатель
0x1F,	/*  ...@@@@@  */
0x1F,	/*  ...@@@@@  */
0x0E,	/*  ....@@@.  */
0x00,	/*  ........  */
0x00,	/*  ........  */

0x00,	/*  ........  */
0x0E,	/*  ....@@@.  */
0x11,	/*  ...@...@  */														//выключенный переключатель
0x11,	/*  ...@...@  */
0x11,	/*  ...@...@  */
0x0E,	/*  ....@@@.  */
0x00,	/*  ........  */
0x00,	/*  ........  */

0x00,	/*  ........  */
0x07,	/*  .....@@@  */
0x04,	/*  .....@..  */														//орень квадратный
0x04,	/*  .....@..  */
0x1C,	/*  ...@@@..  */
0x0C,	/*  ....@@..  */
0x04,	/*  .....@..  */
0x00,	/*  ........  */
};

//------------------------------------------------------------------------------
//библиотека специальных символов
//------------------------------------------------------------------------------

//0x18,  /*  ...@@...  */
//0x04,  /*  .....@..  */
//0x08,  /*  ....@...  */														//куб
//0x04,  /*  .....@..  */
//0x18,  /*  ...@@...  */
//0x00,  /*  ........  */
//0x00,  /*  ........  */
//0x00,  /*  ........  */

//0x3B,  /*  ..@@@.@@  */
//0x31,  /*  ..@@...@  */
//0x20,  /*  ..@.....  */
//0x3F,  /*  ..@@@@@@  */
//0x20,  /*  ..@.....  */
//0x31,  /*  ..@@...@  */
//0x3B,  /*  ..@@@.@@  */
//0x3F,  /*  ..@@@@@@  */

//0x33,  /*  ..@@..@@  */
//0x2D,  /*  ..@.@@.@  */
//0x2D,  /*  ..@.@@.@  */
//0x28,  /*  ..@.@...  */
//0x2D,  /*  ..@.@@.@  */
//0x2F,  /*  ..@.@@@@  */
//0x37,  /*  ..@@.@@@  */
//0x3F,  /*  ..@@@@@@  */

//0x33,  /*  ..@@..@@  */
//0x3D,  /*  ..@@@@.@  */
//0x2D,  /*  ..@.@@.@  */
//0x05,  /*  .....@.@  */
//0x2D,  /*  ..@.@@.@  */
//0x2D,  /*  ..@.@@.@  */
//0x33,  /*  ..@@..@@  */
//0x3F,  /*  ..@@@@@@  */

//0x3F,  /*  ..@@@@@@  */
//0x31,  /*  ..@@...@  */
//0x2E,  /*  ..@.@@@.  */
//0x20,  /*  ..@.....  */
//0x2F,  /*  ..@.@@@@  */
//0x31,  /*  ..@@...@  */
//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */

//0x31,  /*  ..@@...@  */
//0x3B,  /*  ..@@@.@@  */
//0x0E,  /*  ....@@@.  */
//0x04,  /*  .....@..  */
//0x0E,  /*  ....@@@.  */
//0x3B,  /*  ..@@@.@@  */
//0x31,  /*  ..@@...@  */
//0x00,  /*  ........  */

//0x12,  /*  ...@..@.  */
//0x24,  /*  ..@..@..  */
//0x09,  /*  ....@..@  */
//0x12,  /*  ...@..@.  */
//0x24,  /*  ..@..@..  */
//0x09,  /*  ....@..@  */
//0x12,  /*  ...@..@.  */
//0x00,  /*  ........  */

//0x3F,	/*  ..@@@@@@  */
//0x3F,	/*  ..@@@@@@  */
//0x3F,	/*  ..@@@@@@  */														//символ строки прогресса полный
//0x3F,	/*  ..@@@@@@  */
//0x3F,	/*  ..@@@@@@  */
//0x3F,	/*  ..@@@@@@  */
//0x3F,	/*  ..@@@@@@  */
//0x00,	/*  ........  */

//0x3F,  /*  ..@@@@@@  */
//0x00,  /*  ........  */
//0x00,  /*  ........  */
//0x00,  /*  ........  */
//0x00,  /*  ........  */
//0x00,  /*  ........  */
//0x3F,  /*  ..@@@@@@  */
//0x00,  /*  ........  */

//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */
//0x3F,  /*  ..@@@@@@  */

//0x08,  /*  ....@...  */
//0x0C,  /*  ....@@..  */
//0x1E,  /*  ...@@@@.  */														//левая стрелочка
//0x1F,  /*  ...@@@@@  */
//0x1E,  /*  ...@@@@.  */
//0x0C,  /*  ....@@..  */
//0x08,  /*  ....@...  */
//0x00,  /*  ........  */

//0x02,  /*  ......@.  */
//0x06,  /*  .....@@.  */
//0x0F,  /*  ....@@@@  */														//правая стрелочка
//0x1F,  /*  ...@@@@@  */
//0x0F,  /*  ....@@@@  */
//0x06,  /*  .....@@.  */
//0x02,  /*  ......@.  */
//0x00,  /*  ........  */

//0x00,	/*  ........  */
//0x04,	/*  .....@..  */
//0x0E,	/*  ....@@@.  */														//колокольчик
//0x0E,	/*  ....@@@.  */
//0x0E,	/*  ....@@@.  */
//0x1F,	/*  ...@@@@@  */
//0x04,	/*  .....@..  */
//0x00,	/*  ........  */

//0x00,	/*  ........  */
//0x0E,	/*  ....@@@.  */
//0x1F,	/*  ...@@@@@  */														//включенный переключатель
//0x1F,	/*  ...@@@@@  */
//0x1F,	/*  ...@@@@@  */
//0x0E,	/*  ....@@@.  */
//0x00,	/*  ........  */
//0x00,	/*  ........  */

//0x00,	/*  ........  */
//0x0E,	/*  ....@@@.  */
//0x11,	/*  ...@...@  */														//выключенный переключатель
//0x11,	/*  ...@...@  */
//0x11,	/*  ...@...@  */
//0x0E,	/*  ....@@@.  */
//0x00,	/*  ........  */
//0x00	/*  ........  */

//0x00,	/*  ........  */
//0x00,	/*  ........  */
//0x01,	/*  .......@  */														//галочка
//0x02,	/*  ......@.  */
//0x14,	/*  ...@.@..  */
//0x08,	/*  ....@...  */
//0x00,	/*  ........  */
//0x00,	/*  ........  */

//0x00,	/*  ........  */
//0x06,	/*  .....@@.  */
//0x09,	/*  ....@..@  */														//градус
//0x09,	/*  ....@..@  */
//0x06,	/*  .....@@.  */
//0x00,	/*  ........  */
//0x00,	/*  ........  */
//0x00,	/*  ........  */

//0x00,	/*  ........  */
//0x07,	/*  .....@@@  */
//0x04,	/*  .....@..  */														//орень квадратный
//0x04,	/*  .....@..  */
//0x1C,	/*  ...@@@..  */
//0x0C,	/*  ....@@..  */
//0x04,	/*  .....@..  */
//0x00,	/*  ........  */

//0x1F,	/*  ...@@@@@  */
//0x0E,	/*  ....@@@.  */
//0x04,	/*  .....@..  */														//курсор
//0x00,	/*  ........  */
//0x00,	/*  ........  */
//0x00,	/*  ........  */
//0x00,	/*  ........  */
//0x00,	/*  ........  */
#endif
