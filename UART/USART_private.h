
#ifndef USART_PRIVATE_H
#define USART_PRIVATE_H

typedef struct{
	volatile u32 CR[3];
	volatile u32 BRR;
	volatile u32 GTPR;
	volatile u32 RTOR;
	volatile u32 RQR;
	volatile u32 ISR;
	volatile u32 ICR;
	volatile u32 RDR;
	volatile u32 TDR;
}USART_Register;


#define 	USART1 		((USART_Register *) 0x40013800)

#endif
