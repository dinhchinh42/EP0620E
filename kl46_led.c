#include "derivative.h" /* include peripheral declarations */

void SystemClockInit(void)  //dau tien phai khoi tao clock, tra datasheet phan SIM_SCGC5
{
	SIM_BASE_PTR -> SCGC5 |= 1 << 13; //vi ta dang dung PortE nen dich den 13,Clock enable cho portE
    
}

void GPIO_Init(void) //khoi tao GPIO
{	
	PORTE_BASE_PTR -> PCR[2] |= 1 << 8; //xuat tin hieu chan PTE2 nen la PCR[2], truong Mux o bit so 8, tra truong mux o chap 11 portx_pcr
	FPTE_BASE_PTR -> PDDR |= 1 << 2; //dung con tro nen chon FPTE, bit 1 dua den vi tri bit 2 cua PTE2
	
	
}
void delay(uint32_t time)
{
	while(time--);
}
int main(void)
{
	SystemClockInit();
	GPIO_Init();
    for(;;)
    {
    	FPTE_BASE_PTR -> PDOR |= 1<<2;
    	delay(100);
    	FPTE_BASE_PTR -> PDOR &= -(1<<2);
    	delay(100);
    }
    return 0;
}
