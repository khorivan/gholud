/* Конфигурационный файл КАЛЬКУЛЯТОРА
 * обновлен.....................................................................10.02.2011 17:50:50
*/


//------------------------------------------------------------------------------
//тип калькулятора
//------------------------------------------------------------------------------

	#define ___CLCC_SIMPLE				1										//упрощенный калькуль
	#define ___CLCC_IMPROVED			2										//обновленный калькуль
#define CLCC_TYPE										___CLCC_IMPROVED


//------------------------------------------------------------------------------
//использование дополнительных функций
//------------------------------------------------------------------------------


#define CLCC_USE_SQRT							1								//корень квадратный
#define CLCC_USE_SIN							1								//синус
#define CLCC_USE_COS							1								//косинус
#define CLCC_USE_TAN							1								//тангенс
#define CLCC_USE_POW							1								//степень





#define CLCC_DOTSTR_LENGTH			(CLCC_USE_SQRT + CLCC_USE_SIN + CLCC_USE_COS + CLCC_USE_TAN + 2)
