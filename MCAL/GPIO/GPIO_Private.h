#ifndef GPIO_PRIVATE_
#define GPIO_PRIVATE_

/* GPIOA */
#define GPIOA_DATA   *((volatile u32*)0x40058000)
#define GPIOA_DIR    *((volatile u32*)0x40058400)
#define GPIOA_IS   *((volatile u32*)0x40058404)
#define GPIOA_IBE   *((volatile u32*)0x40058408)
#define GPIOA_IEV   *((volatile u32*)0x4005840C)
#define GPIOA_IM   *((volatile u32*)0x40058410)
#define GPIOA_RIS   *((volatile u32*)0x40058414)
#define GPIOA_MIS   *((volatile u32*)0x40058418)
#define GPIOA_ICR   *((volatile u32*)0x4005841C)
#define GPIOA_AFSEL   *((volatile u32*)0x40058420)
#define GPIOA_DR2R   *((volatile u32*)0x40058500)
#define GPIOA_DR4R   *((volatile u32*)0x40058504)
#define GPIOA_DR8R   *((volatile u32*)0x40058508)
#define GPIOA_ODR   *((volatile u32*)0x4005850C)
#define GPIOA_PUR   *((volatile u32*)0x40058510)
#define GPIOA_PDR   *((volatile u32*)0x40058514)
#define GPIOA_SLR   *((volatile u32*)0x40058518)
#define GPIOA_DEN   *((volatile u32*)0x4005851C)
#define GPIOA_LOCK   *((volatile u32*)0x40058520)
#define GPIOA_CR   *((volatile u32*)0x40058524)
#define GPIOA_AMSEL   *((volatile u32*)0x40058528)
#define GPIOA_PCTL   *((volatile u32*)0x4005852C)
#define GPIOA_ADCCTL   *((volatile u32*)0x40058530)
#define GPIOA_DMACTL   *((volatile u32*)0x40058534)
#define GPIOA_PeriphID4   *((volatile u32*)0x40058FD0)
#define GPIOA_PeriphID5   *((volatile u32*)0x40058FD4)
#define GPIOA_PeriphID6   *((volatile u32*)0x40058FD8)
#define GPIOA_PeriphID7   *((volatile u32*)0x40058FDC)
#define GPIOA_PeriphID0   *((volatile u32*)0x40058FE0)
#define GPIOA_PeriphID1   *((volatile u32*)0x40058FE4)
#define GPIOA_PeriphID2   *((volatile u32*)0x40058FE8)
#define GPIOA_PeriphID43  *((volatile u32*)0x40058FEC)
#define GPIOA_CeLLID0  *((volatile u32*)0x40058FF0)
#define GPIOA_CeLLID1  *((volatile u32*)0x40058FF4)
#define GPIOA_CeLLID2  *((volatile u32*)0x40058FF8)
#define GPIOA_CeLLID3  *((volatile u32*)0x40058FFC)

/* GPIOB */ 

#define GPIOB_DATA   *((volatile u32*)0x0x40059000)
#define GPIOB_DIR    *((volatile u32*)0x40059400)
#define GPIOB_IS   *((volatile u32*)0x40059404)
#define GPIOB_IBE   *((volatile u32*)0x40059408)
#define GPIOB_IEV   *((volatile u32*)0x4005940C)
#define GPIOB_IM   *((volatile u32*)0x40059410)
#define GPIOB_RIS   *((volatile u32*)0x40059414)
#define GPIOB_MIS   *((volatile u32*)0x40059418)
#define GPIOB_ICR   *((volatile u32*)0x4005941C)
#define GPIOB_AFSEL   *((volatile u32*)0x40059420)
#define GPIOB_DR2R   *((volatile u32*)0x40059500)
#define GPIOB_DR4R   *((volatile u32*)0x40059504)
#define GPIOB_DR8R   *((volatile u32*)0x40059508)
#define GPIOB_ODR   *((volatile u32*)0x4005950C)
#define GPIOB_PUR   *((volatile u32*)0x40059510)
#define GPIOB_PDR   *((volatile u32*)0x40059514)
#define GPIOB_SLR   *((volatile u32*)0x40059518)
#define GPIOB_DEN   *((volatile u32*)0x4005951C)
#define GPIOB_LOCK   *((volatile u32*)0x40059520)
#define GPIOB_CR   *((volatile u32*)0x40059524)
#define GPIOB_AMSEL   *((volatile u32*)0x40059528)
#define GPIOB_PCTL   *((volatile u32*)0x4005952C)
#define GPIOB_ADCCTL   *((volatile u32*)0x40059530)
#define GPIOB_DMACTL   *((volatile u32*)0x40059534)
#define GPIOB_PeriphID4   *((volatile u32*)0x40059FD0)
#define GPIOB_PeriphID5   *((volatile u32*)0x40059FD4)
#define GPIOB_PeriphID6   *((volatile u32*)0x40059FD8)
#define GPIOB_PeriphID7   *((volatile u32*)0x40059FDC)
#define GPIOB_PeriphID0   *((volatile u32*)0x40059FE0)
#define GPIOB_PeriphID1   *((volatile u32*)0x40059FE4)
#define GPIOB_PeriphID2   *((volatile u32*)0x40059FE8)
#define GPIOB_PeriphID43  *((volatile u32*)0x40059FEC)
#define GPIOB_CeLLID0  *((volatile u32*)0x40059FF0)
#define GPIOB_CeLLID1  *((volatile u32*)0x40059FF4)
#define GPIOB_CeLLID2  *((volatile u32*)0x40059FF8)
#define GPIOB_CeLLID3  *((volatile u32*)0x40059FFC)



/* GPIOC */ 

#define GPIOC_DATA   *((volatile u32*)0x0x4005A000)
#define GPIOC_DIR    *((volatile u32*)0x4005A400)
#define GPIOC_IS   *((volatile u32*)0x4005A404)
#define GPIOC_IBE   *((volatile u32*)0x4005A408)
#define GPIOC_IEV   *((volatile u32*)0x4005A40C)
#define GPIOC_IM   *((volatile u32*)0x4005A410)
#define GPIOC_RIS   *((volatile u32*)0x4005A414)
#define GPIOC_MIS   *((volatile u32*)0x4005A418)
#define GPIOC_ICR   *((volatile u32*)0x4005A41C)
#define GPIOC_AFSEL   *((volatile u32*)0x4005A420)
#define GPIOC_DR2R   *((volatile u32*)0x4005A500)
#define GPIOC_DR4R   *((volatile u32*)0x4005A504)
#define GPIOC_DR8R   *((volatile u32*)0x4005A508)
#define GPIOC_ODR   *((volatile u32*)0x4005A50C)
#define GPIOC_PUR   *((volatile u32*)0x4005A510)
#define GPIOC_PDR   *((volatile u32*)0x4005A514)
#define GPIOC_SLR   *((volatile u32*)0x4005A518)
#define GPIOC_DEN   *((volatile u32*)0x4005A51C)
#define GPIOC_LOCK   *((volatile u32*)0x4005A520)
#define GPIOC_CR   *((volatile u32*)0x4005A524)
#define GPIOC_AMSEL   *((volatile u32*)0x4005A528)
#define GPIOC_PCTL   *((volatile u32*)0x4005A52C)
#define GPIOC_ADCCTL   *((volatile u32*)0x4005A530)
#define GPIOC_DMACTL   *((volatile u32*)0x4005A534)
#define GPIOC_PeriphID4   *((volatile u32*)0x4005AFD0)
#define GPIOC_PeriphID5   *((volatile u32*)0x4005AFD4)
#define GPIOC_PeriphID6   *((volatile u32*)0x4005AFD8)
#define GPIOC_PeriphID7   *((volatile u32*)0x4005AFDC)
#define GPIOC_PeriphID0   *((volatile u32*)0x4005AFE0)
#define GPIOC_PeriphID1   *((volatile u32*)0x4005AFE4)
#define GPIOC_PeriphID2   *((volatile u32*)0x4005AFE8)
#define GPIOC_PeriphID43  *((volatile u32*)0x4005AFEC)
#define GPIOC_CeLLID0  *((volatile u32*)0x4005AFF0)
#define GPIOC_CeLLID1  *((volatile u32*)0x4005AFF4)
#define GPIOC_CeLLID2  *((volatile u32*)0x4005AFF8)
#define GPIOC_CeLLID3  *((volatile u32*)0x4005AFFC)

/* GPIOD */ 

#define GPIOD_DATA   *((volatile u32*)0x0x4005B000)
#define GPIOD_DIR    *((volatile u32*)0x4005B400)
#define GPIOD_IS   *((volatile u32*)0x4005B404)
#define GPIOD_IBE   *((volatile u32*)0x4005B408)
#define GPIOD_IEV   *((volatile u32*)0x4005B40C)
#define GPIOD_IM   *((volatile u32*)0x4005B410)
#define GPIOD_RIS   *((volatile u32*)0x4005B414)
#define GPIOD_MIS   *((volatile u32*)0x4005B418)
#define GPIOD_ICR   *((volatile u32*)0x4005B41C)
#define GPIOD_AFSEL   *((volatile u32*)0x4005B420)
#define GPIOD_DR2R   *((volatile u32*)0x4005B500)
#define GPIOD_DR4R   *((volatile u32*)0x4005B504)
#define GPIOD_DR8R   *((volatile u32*)0x4005B508)
#define GPIOD_ODR   *((volatile u32*)0x4005B50C)
#define GPIOD_PUR   *((volatile u32*)0x4005B510)
#define GPIOD_PDR   *((volatile u32*)0x4005B514)
#define GPIOD_SLR   *((volatile u32*)0x4005B518)
#define GPIOD_DEN   *((volatile u32*)0x4005B51C)
#define GPIOD_LOCK   *((volatile u32*)0x4005B520)
#define GPIOD_CR   *((volatile u32*)0x4005B524)
#define GPIOD_AMSEL   *((volatile u32*)0x4005B528)
#define GPIOD_PCTL   *((volatile u32*)0x4005B52C)
#define GPIOD_ADCCTL   *((volatile u32*)0x4005B530)
#define GPIOD_DMACTL   *((volatile u32*)0x4005B534)
#define GPIOD_PeriphID4   *((volatile u32*)0x4005BFD0)
#define GPIOD_PeriphID5   *((volatile u32*)0x4005BFD4)
#define GPIOD_PeriphID6   *((volatile u32*)0x4005BFD8)
#define GPIOD_PeriphID7   *((volatile u32*)0x4005BFDC)
#define GPIOD_PeriphID0   *((volatile u32*)0x4005BFE0)
#define GPIOD_PeriphID1   *((volatile u32*)0x4005BFE4)
#define GPIOD_PeriphID2   *((volatile u32*)0x4005BFE8)
#define GPIOD_PeriphID43  *((volatile u32*)0x4005BFEC)
#define GPIOD_CeLLID0  *((volatile u32*)0x4005BFF0)
#define GPIOD_CeLLID1  *((volatile u32*)0x4005BFF4)
#define GPIOD_CeLLID2  *((volatile u32*)0x4005BFF8)
#define GPIOD_CeLLID3  *((volatile u32*)0x4005BFFC)

/* GPIOE */ 

#define GPIOE_DATA   *((volatile u32*)0x0x4005C000)
#define GPIOE_DIR    *((volatile u32*)0x4005C400)
#define GPIOE_IS   *((volatile u32*)0x4005C404)
#define GPIOE_IBE   *((volatile u32*)0x4005C408)
#define GPIOE_IEV   *((volatile u32*)0x4005C40C)
#define GPIOE_IM   *((volatile u32*)0x4005C410)
#define GPIOE_RIS   *((volatile u32*)0x4005C414)
#define GPIOE_MIS   *((volatile u32*)0x4005C418)
#define GPIOE_ICR   *((volatile u32*)0x4005C41C)
#define GPIOE_AFSEL   *((volatile u32*)0x4005C420)
#define GPIOE_DR2R   *((volatile u32*)0x4005C500)
#define GPIOE_DR4R   *((volatile u32*)0x4005C504)
#define GPIOE_DR8R   *((volatile u32*)0x4005C508)
#define GPIOE_ODR   *((volatile u32*)0x4005C50C)
#define GPIOE_PUR   *((volatile u32*)0x4005C510)
#define GPIOE_PDR   *((volatile u32*)0x4005C514)
#define GPIOE_SLR   *((volatile u32*)0x4005C518)
#define GPIOE_DEN   *((volatile u32*)0x4005C51C)
#define GPIOE_LOCK   *((volatile u32*)0x4005C520)
#define GPIOE_CR   *((volatile u32*)0x4005C524)
#define GPIOE_AMSEL   *((volatile u32*)0x4005C528)
#define GPIOE_PCTL   *((volatile u32*)0x4005C52C)
#define GPIOE_ADCCTL   *((volatile u32*)0x4005C530)
#define GPIOE_DMACTL   *((volatile u32*)0x4005C534)
#define GPIOE_PeriphID4   *((volatile u32*)0x4005CFD0)
#define GPIOE_PeriphID5   *((volatile u32*)0x4005CFD4)
#define GPIOE_PeriphID6   *((volatile u32*)0x4005CFD8)
#define GPIOE_PeriphID7   *((volatile u32*)0x4005CFDC)
#define GPIOE_PeriphID0   *((volatile u32*)0x4005CFE0)
#define GPIOE_PeriphID1   *((volatile u32*)0x4005CFE4)
#define GPIOE_PeriphID2   *((volatile u32*)0x4005CFE8)
#define GPIOE_PeriphID43  *((volatile u32*)0x4005CFEC)
#define GPIOE_CeLLID0  *((volatile u32*)0x4005CFF0)
#define GPIOE_CeLLID1  *((volatile u32*)0x4005CFF4)
#define GPIOE_CeLLID2  *((volatile u32*)0x4005CFF8)
#define GPIOE_CeLLID3  *((volatile u32*)0x4005CFFC)

/* GPIOF */ 

#define GPIOF_DATA   *((volatile u32*)0x4005D000)
#define GPIOF_DIR    *((volatile u32*)0x4005D400)
#define GPIOF_IS   *((volatile u32*)0x4005D404)
#define GPIOF_IBE   *((volatile u32*)0x4005D408)
#define GPIOF_IEV   *((volatile u32*)0x4005D40C)
#define GPIOF_IM   *((volatile u32*)0x4005D410)
#define GPIOF_RIS   *((volatile u32*)0x4005D414)
#define GPIOF_MIS   *((volatile u32*)0x4005D418)
#define GPIOF_ICR   *((volatile u32*)0x4005D41C)
#define GPIOF_AFSEL   *((volatile u32*)0x4005D420)
#define GPIOF_DR2R   *((volatile u32*)0x4005D500)
#define GPIOF_DR4R   *((volatile u32*)0x4005D504)
#define GPIOF_DR8R   *((volatile u32*)0x4005D508)
#define GPIOF_ODR   *((volatile u32*)0x4005D50C)
#define GPIOF_PUR   *((volatile u32*)0x4005D510)
#define GPIOF_PDR   *((volatile u32*)0x4005D514)
#define GPIOF_SLR   *((volatile u32*)0x4005D518)
#define GPIOF_DEN   *((volatile u32*)0x4005D51C)
#define GPIOF_LOCK   *((volatile u32*)0x4005D520)
#define GPIOF_CR   *((volatile u32*)0x4005D524)
#define GPIOF_AMSEL   *((volatile u32*)0x4005D528)
#define GPIOF_PCTL   *((volatile u32*)0x4005D52C)
#define GPIOF_ADCCTL   *((volatile u32*)0x4005D530)
#define GPIOF_DMACTL   *((volatile u32*)0x4005D534)
#define GPIOF_PeriphID4   *((volatile u32*)0x4005DFD0)
#define GPIOF_PeriphID5   *((volatile u32*)0x4005DFD4)
#define GPIOF_PeriphID6   *((volatile u32*)0x4005DFD8)
#define GPIOF_PeriphID7   *((volatile u32*)0x4005DFDC)
#define GPIOF_PeriphID0   *((volatile u32*)0x4005DFE0)
#define GPIOF_PeriphID1   *((volatile u32*)0x4005DFE4)
#define GPIOF_PeriphID2   *((volatile u32*)0x4005DFE8)
#define GPIOF_PeriphID43  *((volatile u32*)0x4005DFEC)
#define GPIOF_CeLLID0  *((volatile u32*)0x4005DFF0)
#define GPIOF_CeLLID1  *((volatile u32*)0x4005DFF4)
#define GPIOF_CeLLID2  *((volatile u32*)0x4005DFF8)
#define GPIOF_CeLLID3  *((volatile u32*)0x4005DFFC)
#endif