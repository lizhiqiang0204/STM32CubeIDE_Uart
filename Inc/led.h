#ifndef __LED_H
#define	__LED_H


/* the macro definition to trigger the led on or off
 * 1 - off
 - 0 - on
 */
#define ON  0
#define OFF 1

#define LED3(a)	if (a)	\
					HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,GPIO_PIN_SET);\
					else		\
					HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,GPIO_PIN_RESET)


#define LED2(a)	if (a)	\
					HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,GPIO_PIN_SET);\
					else		\
					HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,GPIO_PIN_RESET)

#define Buzzer(a) if (a)	\
					HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_SET);\
					else		\
					HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_RESET)


#endif /* __LED_H */
