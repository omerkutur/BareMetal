#include<stdint.h>

#define 	SRAM_START		0x20000000U
#define 	STACK_SIZE 		( 128 * 1024 )
#define 	SRAM_END		( SRAM_START + STACK_SIZE )
#define		STACK_START		SRAM_END

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;

extern uint32_t _sbss;
extern uint32_t _ebss;

int main(void);

void Reset_Handler( void );
void NMI_Handler			 (void) __attribute__((weak, alias("Default_Handler")));
void HardFault_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void MemManage_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void BusFault_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler      (void) __attribute__((weak, alias("Default_Handler")));
void SVC_Handler             (void) __attribute__((weak, alias("Default_Handler")));
void DebugMon_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void PendSV_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void SysTick_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void WWDG_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void PVD_IRQHandler          (void) __attribute__((weak, alias("Default_Handler")));
void TAMP_STAMP_IRQHandler   (void) __attribute__((weak, alias("Default_Handler")));
void RTC_WKUP_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void FLASH_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void RCC_IRQHandler          (void) __attribute__((weak, alias("Default_Handler")));
void EXTI0_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void EXTI1_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void EXTI2_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void EXTI3_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void EXTI4_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream0_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream1_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream2_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream3_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream4_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream5_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream6_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void ADC_IRQHandler          (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_TX_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_RX0_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_RX1_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_SCE_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void EXTI9_5_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_BRK_TIM9_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_UP_TIM10_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_TRG_COM_TIM11_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_CC_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void TIM2_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void TIM3_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void TIM4_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void I2C1_EV_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void I2C1_ER_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void I2C2_EV_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void I2C2_ER_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void SPI1_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void SPI2_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void USART1_IRQHandler       (void) __attribute__((weak, alias("Default_Handler")));
void USART2_IRQHandler       (void) __attribute__((weak, alias("Default_Handler")));
void USART3_IRQHandler       (void) __attribute__((weak, alias("Default_Handler")));
void EXTI15_10_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
void RTC_Alarm_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
void OTG_FS_WKUP_IRQHandler  (void) __attribute__((weak, alias("Default_Handler")));
void TIM8_BRK_TIM12_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void TIM8_UP_TIM13_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void TIM8_TRG_COM_TIM14_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void TIM8_CC_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Stream7_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void FSMC_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void SDIO_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void TIM5_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void SPI3_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void UART4_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void UART5_IRQHandler        (void) __attribute__((weak, alias("Default_Handler")));
void TIM6_DAC_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void TIM7_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream0_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream1_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream2_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream3_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream4_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void ETH_IRQHandler          (void) __attribute__((weak, alias("Default_Handler")));
void ETH_WKUP_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_TX_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_RX0_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_RX1_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_SCE_IRQHandler     (void) __attribute__((weak, alias("Default_Handler")));
void OTG_FS_IRQHandler       (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream5_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream6_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Stream7_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void USART6_IRQHandler       (void) __attribute__((weak, alias("Default_Handler")));
void I2C3_EV_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void I2C3_ER_IRQHandler      (void) __attribute__((weak, alias("Default_Handler")));
void OTG_HS_EP1_OUT_IRQHandler (void) __attribute__((weak, alias("Default_Handler")));
void OTG_HS_EP1_IN_IRQHandler  (void) __attribute__((weak, alias("Default_Handler")));
void OTG_HS_WKUP_IRQHandler    (void) __attribute__((weak, alias("Default_Handler")));
void OTG_HS_IRQHandler         (void) __attribute__((weak, alias("Default_Handler")));
void DCMI_IRQHandler           (void) __attribute__((weak, alias("Default_Handler")));
void CRYP_IRQHandler           (void) __attribute__((weak, alias("Default_Handler")));
void HASH_RNG_IRQHandler       (void) __attribute__((weak, alias("Default_Handler")));
void FPU_IRQHandler            (void) __attribute__((weak, alias("Default_Handler")));

uint32_t vectors[] __attribute__((section(".isr_vector"))) = {
    (uint32_t)STACK_START,                  // 0x000 Initial Stack Pointer
    (uint32_t)Reset_Handler,                // 0x004 Reset Handler
    (uint32_t)NMI_Handler,                  // 0x008 NMI Handler
    (uint32_t)HardFault_Handler,            // 0x00C HardFault Handler
    (uint32_t)MemManage_Handler,            // 0x010 MemManage Handler
    (uint32_t)BusFault_Handler,             // 0x014 BusFault Handler
    (uint32_t)UsageFault_Handler,           // 0x018 UsageFault Handler
    (uint32_t)0,                            // 0x01C Reserved
    (uint32_t)0,                            // 0x020 Reserved
    (uint32_t)0,                            // 0x024 Reserved
    (uint32_t)0,                            // 0x028 Reserved
    (uint32_t)SVC_Handler,                  // 0x02C SVCall Handler
    (uint32_t)DebugMon_Handler,             // 0x030 Debug Monitor Handler
    (uint32_t)0,                            // 0x034 Reserved
    (uint32_t)PendSV_Handler,               // 0x038 PendSV Handler
    (uint32_t)SysTick_Handler,              // 0x03C SysTick Handler

    // External Interrupts
    (uint32_t)WWDG_IRQHandler,              // 0x040 Window Watchdog
    (uint32_t)PVD_IRQHandler,               // 0x044 PVD through EXTI Line detect
    (uint32_t)TAMP_STAMP_IRQHandler,        // 0x048 Tamper and TimeStamp
    (uint32_t)RTC_WKUP_IRQHandler,          // 0x04C RTC Wakeup
    (uint32_t)FLASH_IRQHandler,             // 0x050 Flash
    (uint32_t)RCC_IRQHandler,               // 0x054 RCC
    (uint32_t)EXTI0_IRQHandler,             // 0x058 EXTI Line 0
    (uint32_t)EXTI1_IRQHandler,             // 0x05C EXTI Line 1
    (uint32_t)EXTI2_IRQHandler,             // 0x060 EXTI Line 2
    (uint32_t)EXTI3_IRQHandler,             // 0x064 EXTI Line 3
    (uint32_t)EXTI4_IRQHandler,             // 0x068 EXTI Line 4
    (uint32_t)DMA1_Stream0_IRQHandler,      // 0x06C DMA1 Stream 0
    (uint32_t)DMA1_Stream1_IRQHandler,      // 0x070 DMA1 Stream 1
    (uint32_t)DMA1_Stream2_IRQHandler,      // 0x074 DMA1 Stream 2
    (uint32_t)DMA1_Stream3_IRQHandler,      // 0x078 DMA1 Stream 3
    (uint32_t)DMA1_Stream4_IRQHandler,      // 0x07C DMA1 Stream 4
    (uint32_t)DMA1_Stream5_IRQHandler,      // 0x080 DMA1 Stream 5
    (uint32_t)DMA1_Stream6_IRQHandler,      // 0x084 DMA1 Stream 6
    (uint32_t)ADC_IRQHandler,               // 0x088 ADC1, ADC2 and ADC3
    (uint32_t)CAN1_TX_IRQHandler,           // 0x08C CAN1 TX
    (uint32_t)CAN1_RX0_IRQHandler,          // 0x090 CAN1 RX0
    (uint32_t)CAN1_RX1_IRQHandler,          // 0x094 CAN1 RX1
    (uint32_t)CAN1_SCE_IRQHandler,          // 0x098 CAN1 SCE
    (uint32_t)EXTI9_5_IRQHandler,           // 0x09C EXTI Line 9..5
    (uint32_t)TIM1_BRK_TIM9_IRQHandler,     // 0x0A0 TIM1 Break and TIM9
    (uint32_t)TIM1_UP_TIM10_IRQHandler,     // 0x0A4 TIM1 Update and TIM10
    (uint32_t)TIM1_TRG_COM_TIM11_IRQHandler, // 0x0A8 TIM1 Trigger and Commutation and TIM11
    (uint32_t)TIM1_CC_IRQHandler,           // 0x0AC TIM1 Capture Compare
    (uint32_t)TIM2_IRQHandler,              // 0x0B0 TIM2
    (uint32_t)TIM3_IRQHandler,              // 0x0B4 TIM3
    (uint32_t)TIM4_IRQHandler,              // 0x0B8 TIM4
    (uint32_t)I2C1_EV_IRQHandler,           // 0x0BC I2C1 Event
    (uint32_t)I2C1_ER_IRQHandler,           // 0x0C0 I2C1 Error
    (uint32_t)I2C2_EV_IRQHandler,           // 0x0C4 I2C2 Event
    (uint32_t)I2C2_ER_IRQHandler,           // 0x0C8 I2C2 Error
    (uint32_t)SPI1_IRQHandler,              // 0x0CC SPI1
    (uint32_t)SPI2_IRQHandler,              // 0x0D0 SPI2
    (uint32_t)USART1_IRQHandler,            // 0x0D4 USART1
    (uint32_t)USART2_IRQHandler,            // 0x0D8 USART2
    (uint32_t)USART3_IRQHandler,            // 0x0DC USART3
    (uint32_t)EXTI15_10_IRQHandler,         // 0x0E0 EXTI Line 15..10
    (uint32_t)RTC_Alarm_IRQHandler,         // 0x0E4 RTC Alarm (A and B)
    (uint32_t)OTG_FS_WKUP_IRQHandler,       // 0x0E8 USB OTG FS Wakeup
    (uint32_t)TIM8_BRK_TIM12_IRQHandler,    // 0x0EC TIM8 Break and TIM12
    (uint32_t)TIM8_UP_TIM13_IRQHandler,     // 0x0F0 TIM8 Update and TIM13
    (uint32_t)TIM8_TRG_COM_TIM14_IRQHandler, // 0x0F4 TIM8 Trigger and Commutation and TIM14
    (uint32_t)TIM8_CC_IRQHandler,           // 0x0F8 TIM8 Capture Compare
    (uint32_t)DMA1_Stream7_IRQHandler,      // 0x0FC DMA1 Stream7
    (uint32_t)FSMC_IRQHandler,              // 0x100 FSMC
    (uint32_t)SDIO_IRQHandler,              // 0x104 SDIO
    (uint32_t)TIM5_IRQHandler,              // 0x108 TIM5
    (uint32_t)SPI3_IRQHandler,              // 0x10C SPI3
    (uint32_t)UART4_IRQHandler,             // 0x110 UART4
    (uint32_t)UART5_IRQHandler,             // 0x114 UART5
    (uint32_t)TIM6_DAC_IRQHandler,          // 0x118 TIM6 and DAC1&2 underrun
    (uint32_t)TIM7_IRQHandler,              // 0x11C TIM7
    (uint32_t)DMA2_Stream0_IRQHandler,      // 0x120 DMA2 Stream 0
    (uint32_t)DMA2_Stream1_IRQHandler,      // 0x124 DMA2 Stream 1
    (uint32_t)DMA2_Stream2_IRQHandler,      // 0x128 DMA2 Stream 2
    (uint32_t)DMA2_Stream3_IRQHandler,      // 0x12C DMA2 Stream 3
    (uint32_t)DMA2_Stream4_IRQHandler,      // 0x130 DMA2 Stream 4
    (uint32_t)ETH_IRQHandler,               // 0x134 Ethernet
    (uint32_t)ETH_WKUP_IRQHandler,          // 0x138 Ethernet Wakeup
    (uint32_t)CAN2_TX_IRQHandler,           // 0x13C CAN2 TX
    (uint32_t)CAN2_RX0_IRQHandler,          // 0x140 CAN2 RX0
    (uint32_t)CAN2_RX1_IRQHandler,          // 0x144 CAN2 RX1
    (uint32_t)CAN2_SCE_IRQHandler,          // 0x148 CAN2 SCE
    (uint32_t)OTG_FS_IRQHandler,            // 0x14C USB OTG FS
    (uint32_t)DMA2_Stream5_IRQHandler,      // 0x150 DMA2 Stream 5
    (uint32_t)DMA2_Stream6_IRQHandler,      // 0x154 DMA2 Stream 6
    (uint32_t)DMA2_Stream7_IRQHandler,      // 0x158 DMA2 Stream 7
    (uint32_t)USART6_IRQHandler,            // 0x15C USART6
    (uint32_t)I2C3_EV_IRQHandler,           // 0x160 I2C3 Event
    (uint32_t)I2C3_ER_IRQHandler,           // 0x164 I2C3 Error
    (uint32_t)OTG_HS_EP1_OUT_IRQHandler,    // 0x168 USB OTG HS Endpoint 1 Out
    (uint32_t)OTG_HS_EP1_IN_IRQHandler,     // 0x16C USB OTG HS Endpoint 1 In
    (uint32_t)OTG_HS_WKUP_IRQHandler,       // 0x170 USB OTG HS Wakeup
    (uint32_t)OTG_HS_IRQHandler,            // 0x174 USB OTG HS
    (uint32_t)DCMI_IRQHandler,              // 0x178 DCMI
    (uint32_t)CRYP_IRQHandler,              // 0x17C CRYP crypto
    (uint32_t)HASH_RNG_IRQHandler,          // 0x180 Hash and RNG
    (uint32_t)FPU_IRQHandler                // 0x184 Floating point unit
};

void Default_Handler(void){
	for(;;);
}


void Reset_Handler( void ){

	// copy .data section to SRAM
	uint32_t dataSize = (uint32_t)&_edata - (uint32_t)&_sdata;
	
	uint8_t *pDst = (uint8_t*)&_sdata;
	uint8_t *pSrc = (uint8_t*)&_etext;
	
	for(int i=0; i<dataSize; i++){
		*pDst++ = *pSrc++;
	}
	
	// init the .bss section to zero in SRAM
	dataSize = (uint32_t)&_ebss - (uint32_t)&_sbss;
	pDst = (uint8_t*)&_sbss;
	
	for(int i=0; i<dataSize; i++){
		*pDst++ = 0;
	}
	
	// call main()
	main();
}