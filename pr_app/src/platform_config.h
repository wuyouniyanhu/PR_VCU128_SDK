#ifndef __PLATFORM_CONFIG_H_
#define __PLATFORM_CONFIG_H_


#define PLATFORM_EMAC_BASEADDR XPAR_ETHERNET_BASEADDR

#define PLATFORM_TIMER_BASEADDR XPAR_TIMER_BASEADDR
#define PLATFORM_TIMER_INTERRUPT_INTR XPAR_CPU_AXI_INTC_TIMER_INTERRUPT_INTR
#define PLATFORM_TIMER_INTERRUPT_MASK (1 << XPAR_CPU_AXI_INTC_TIMER_INTERRUPT_INTR)


#endif
