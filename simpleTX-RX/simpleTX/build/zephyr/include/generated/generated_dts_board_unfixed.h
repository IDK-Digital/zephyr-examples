/**********************************************
*                 Generated include file
*                      DO NOT MODIFY
*/
#ifndef GENERATED_DTS_BOARD_UNFIXED_H
#define GENERATED_DTS_BOARD_UNFIXED_H
/* buttons */
#define DT_GPIO_KEYS_0		1

/* button_0 */
#define DT_GPIO_KEYS_BUTTON_0_GPIO_CONTROLLER	"GPIO_0"
#define DT_GPIO_KEYS_BUTTON_0_GPIO_FLAGS	256
#define DT_GPIO_KEYS_BUTTON_0_GPIO_PIN		2
#define DT_GPIO_KEYS_BUTTON_0_LABEL		"Push button switch 0"
#define DT_GPIO_KEYS_SW0_GPIO_CONTROLLER	DT_GPIO_KEYS_BUTTON_0_GPIO_CONTROLLER
#define DT_GPIO_KEYS_SW0_GPIO_FLAGS		DT_GPIO_KEYS_BUTTON_0_GPIO_FLAGS
#define DT_GPIO_KEYS_SW0_GPIO_PIN		DT_GPIO_KEYS_BUTTON_0_GPIO_PIN
#define DT_GPIO_KEYS_SW0_LABEL			DT_GPIO_KEYS_BUTTON_0_LABEL
#define SW0_GPIO_CONTROLLER			DT_GPIO_KEYS_BUTTON_0_GPIO_CONTROLLER
#define SW0_GPIO_FLAGS				DT_GPIO_KEYS_BUTTON_0_GPIO_FLAGS
#define SW0_GPIO_PIN				DT_GPIO_KEYS_BUTTON_0_GPIO_PIN
#define SW0_LABEL				DT_GPIO_KEYS_BUTTON_0_LABEL

/* flash-controller@4001E000 */
#define DT_NORDIC_NRF52_FLASH_CONTROLLER_0				1
#define DT_NORDIC_NRF52_FLASH_CONTROLLER_4001E000_BASE_ADDRESS		0x4001e000
#define DT_NORDIC_NRF52_FLASH_CONTROLLER_4001E000_LABEL			"NRF_FLASH_DRV_NAME"
#define DT_NORDIC_NRF52_FLASH_CONTROLLER_4001E000_SIZE			1360
#define DT_NORDIC_NRF52_FLASH_CONTROLLER_0_BASE_ADDRESS			DT_NORDIC_NRF52_FLASH_CONTROLLER_4001E000_BASE_ADDRESS
#define DT_NORDIC_NRF52_FLASH_CONTROLLER_0_LABEL			DT_NORDIC_NRF52_FLASH_CONTROLLER_4001E000_LABEL
#define DT_NORDIC_NRF52_FLASH_CONTROLLER_0_SIZE				DT_NORDIC_NRF52_FLASH_CONTROLLER_4001E000_SIZE

/* flash@0 */
#define DT_FLASH_BASE_ADDRESS			0x0
#define DT_FLASH_ERASE_BLOCK_SIZE		4096
#define DT_FLASH_SIZE				512
#define DT_FLASH_WRITE_BLOCK_SIZE		4
#define DT_SOC_NV_FLASH_0			1
#define DT_SOC_NV_FLASH_0_ERASE_BLOCK_SIZE	4096
#define DT_SOC_NV_FLASH_0_LABEL			"NRF_FLASH"
#define DT_SOC_NV_FLASH_0_WRITE_BLOCK_SIZE	4
#define FLASH_ERASE_BLOCK_SIZE __DEPRECATED_MACRO DT_FLASH_ERASE_BLOCK_SIZE
#define FLASH_WRITE_BLOCK_SIZE __DEPRECATED_MACRO DT_FLASH_WRITE_BLOCK_SIZE

/* partitions */
#define DT_FIXED_PARTITIONS_0	1

/* partition@0 */
#define DT_FLASH_AREA_MCUBOOT_LABEL		"mcuboot"
#define DT_FLASH_AREA_MCUBOOT_OFFSET_0		0
#define DT_FLASH_AREA_MCUBOOT_READ_ONLY		0
#define DT_FLASH_AREA_MCUBOOT_SIZE_0		49152
#define DT_FLASH_AREA_MCUBOOT_OFFSET		DT_FLASH_AREA_MCUBOOT_OFFSET_0
#define DT_FLASH_AREA_MCUBOOT_SIZE		DT_FLASH_AREA_MCUBOOT_SIZE_0
#define FLASH_AREA_MCUBOOT_LABEL __DEPRECATED_MACRO DT_FLASH_AREA_MCUBOOT_LABEL
#define FLASH_AREA_MCUBOOT_OFFSET __DEPRECATED_MACRO DT_FLASH_AREA_MCUBOOT_OFFSET
#define FLASH_AREA_MCUBOOT_OFFSET_0 __DEPRECATED_MACRO DT_FLASH_AREA_MCUBOOT_OFFSET_0
#define FLASH_AREA_MCUBOOT_READ_ONLY __DEPRECATED_MACRO DT_FLASH_AREA_MCUBOOT_READ_ONLY
#define FLASH_AREA_MCUBOOT_SIZE __DEPRECATED_MACRO DT_FLASH_AREA_MCUBOOT_SIZE
#define FLASH_AREA_MCUBOOT_SIZE_0 __DEPRECATED_MACRO DT_FLASH_AREA_MCUBOOT_SIZE_0

/* partition@3e000 */
#define DT_FLASH_AREA_IMAGE_1_LABEL		"image-1"
#define DT_FLASH_AREA_IMAGE_1_OFFSET_0		253952
#define DT_FLASH_AREA_IMAGE_1_READ_ONLY		0
#define DT_FLASH_AREA_IMAGE_1_SIZE_0		204800
#define DT_FLASH_AREA_IMAGE_1_OFFSET		DT_FLASH_AREA_IMAGE_1_OFFSET_0
#define DT_FLASH_AREA_IMAGE_1_SIZE		DT_FLASH_AREA_IMAGE_1_SIZE_0
#define FLASH_AREA_IMAGE_1_LABEL __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_1_LABEL
#define FLASH_AREA_IMAGE_1_OFFSET __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_1_OFFSET
#define FLASH_AREA_IMAGE_1_OFFSET_0 __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_1_OFFSET_0
#define FLASH_AREA_IMAGE_1_READ_ONLY __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_1_READ_ONLY
#define FLASH_AREA_IMAGE_1_SIZE __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_1_SIZE
#define FLASH_AREA_IMAGE_1_SIZE_0 __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_1_SIZE_0

/* partition@70000 */
#define DT_FLASH_AREA_IMAGE_SCRATCH_LABEL	"image-scratch"
#define DT_FLASH_AREA_IMAGE_SCRATCH_OFFSET_0	458752
#define DT_FLASH_AREA_IMAGE_SCRATCH_READ_ONLY	0
#define DT_FLASH_AREA_IMAGE_SCRATCH_SIZE_0	40960
#define DT_FLASH_AREA_IMAGE_SCRATCH_OFFSET	DT_FLASH_AREA_IMAGE_SCRATCH_OFFSET_0
#define DT_FLASH_AREA_IMAGE_SCRATCH_SIZE	DT_FLASH_AREA_IMAGE_SCRATCH_SIZE_0
#define FLASH_AREA_IMAGE_SCRATCH_LABEL __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_SCRATCH_LABEL
#define FLASH_AREA_IMAGE_SCRATCH_OFFSET __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_SCRATCH_OFFSET
#define FLASH_AREA_IMAGE_SCRATCH_OFFSET_0 __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_SCRATCH_OFFSET_0
#define FLASH_AREA_IMAGE_SCRATCH_READ_ONLY __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_SCRATCH_READ_ONLY
#define FLASH_AREA_IMAGE_SCRATCH_SIZE __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_SCRATCH_SIZE
#define FLASH_AREA_IMAGE_SCRATCH_SIZE_0 __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_SCRATCH_SIZE_0

/* partition@7a000 */
#define DT_FLASH_AREA_STORAGE_LABEL		"storage"
#define DT_FLASH_AREA_STORAGE_OFFSET_0		499712
#define DT_FLASH_AREA_STORAGE_READ_ONLY		0
#define DT_FLASH_AREA_STORAGE_SIZE_0		24576
#define DT_FLASH_AREA_STORAGE_OFFSET		DT_FLASH_AREA_STORAGE_OFFSET_0
#define DT_FLASH_AREA_STORAGE_SIZE		DT_FLASH_AREA_STORAGE_SIZE_0
#define FLASH_AREA_STORAGE_LABEL __DEPRECATED_MACRO DT_FLASH_AREA_STORAGE_LABEL
#define FLASH_AREA_STORAGE_OFFSET __DEPRECATED_MACRO DT_FLASH_AREA_STORAGE_OFFSET
#define FLASH_AREA_STORAGE_OFFSET_0 __DEPRECATED_MACRO DT_FLASH_AREA_STORAGE_OFFSET_0
#define FLASH_AREA_STORAGE_READ_ONLY __DEPRECATED_MACRO DT_FLASH_AREA_STORAGE_READ_ONLY
#define FLASH_AREA_STORAGE_SIZE __DEPRECATED_MACRO DT_FLASH_AREA_STORAGE_SIZE
#define FLASH_AREA_STORAGE_SIZE_0 __DEPRECATED_MACRO DT_FLASH_AREA_STORAGE_SIZE_0

/* partition@c000 */
#define DT_CODE_PARTITION_OFFSET		49152
#define DT_CODE_PARTITION_SIZE			204800
#define DT_FLASH_AREA_IMAGE_0_LABEL		"image-0"
#define DT_FLASH_AREA_IMAGE_0_OFFSET_0		49152
#define DT_FLASH_AREA_IMAGE_0_READ_ONLY		0
#define DT_FLASH_AREA_IMAGE_0_SIZE_0		204800
#define DT_FLASH_AREA_IMAGE_0_OFFSET		DT_FLASH_AREA_IMAGE_0_OFFSET_0
#define DT_FLASH_AREA_IMAGE_0_SIZE		DT_FLASH_AREA_IMAGE_0_SIZE_0
#define FLASH_AREA_IMAGE_0_LABEL __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_0_LABEL
#define FLASH_AREA_IMAGE_0_OFFSET __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_0_OFFSET
#define FLASH_AREA_IMAGE_0_OFFSET_0 __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_0_OFFSET_0
#define FLASH_AREA_IMAGE_0_READ_ONLY __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_0_READ_ONLY
#define FLASH_AREA_IMAGE_0_SIZE __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_0_SIZE
#define FLASH_AREA_IMAGE_0_SIZE_0 __DEPRECATED_MACRO DT_FLASH_AREA_IMAGE_0_SIZE_0

/* leds */
#define DT_GPIO_LEDS_0		1

/* led_0 */
#define DT_GPIO_LEDS_LED_0_GPIO_CONTROLLER	"GPIO_0"
#define DT_GPIO_LEDS_LED_0_GPIO_FLAGS		0
#define DT_GPIO_LEDS_LED_0_GPIO_PIN		14
#define DT_GPIO_LEDS_LED_0_LABEL		"Red LED 0"
#define DT_GPIO_LEDS_LED0_GPIO_CONTROLLER	DT_GPIO_LEDS_LED_0_GPIO_CONTROLLER
#define DT_GPIO_LEDS_LED0_GPIO_FLAGS		DT_GPIO_LEDS_LED_0_GPIO_FLAGS
#define DT_GPIO_LEDS_LED0_GPIO_PIN		DT_GPIO_LEDS_LED_0_GPIO_PIN
#define DT_GPIO_LEDS_LED0_LABEL			DT_GPIO_LEDS_LED_0_LABEL
#define LED0_GPIO_CONTROLLER			DT_GPIO_LEDS_LED_0_GPIO_CONTROLLER
#define LED0_GPIO_FLAGS				DT_GPIO_LEDS_LED_0_GPIO_FLAGS
#define LED0_GPIO_PIN				DT_GPIO_LEDS_LED_0_GPIO_PIN
#define LED0_LABEL				DT_GPIO_LEDS_LED_0_LABEL

/* led_1 */
#define DT_GPIO_LEDS_LED_1_GPIO_CONTROLLER	"GPIO_0"
#define DT_GPIO_LEDS_LED_1_GPIO_FLAGS		0
#define DT_GPIO_LEDS_LED_1_GPIO_PIN		30
#define DT_GPIO_LEDS_LED_1_LABEL		"Green LED 1"
#define DT_GPIO_LEDS_LED1_GPIO_CONTROLLER	DT_GPIO_LEDS_LED_1_GPIO_CONTROLLER
#define DT_GPIO_LEDS_LED1_GPIO_FLAGS		DT_GPIO_LEDS_LED_1_GPIO_FLAGS
#define DT_GPIO_LEDS_LED1_GPIO_PIN		DT_GPIO_LEDS_LED_1_GPIO_PIN
#define DT_GPIO_LEDS_LED1_LABEL			DT_GPIO_LEDS_LED_1_LABEL
#define LED1_GPIO_CONTROLLER			DT_GPIO_LEDS_LED_1_GPIO_CONTROLLER
#define LED1_GPIO_FLAGS				DT_GPIO_LEDS_LED_1_GPIO_FLAGS
#define LED1_GPIO_PIN				DT_GPIO_LEDS_LED_1_GPIO_PIN
#define LED1_LABEL				DT_GPIO_LEDS_LED_1_LABEL

/* led_2 */
#define DT_GPIO_LEDS_LED_2_GPIO_CONTROLLER	"GPIO_0"
#define DT_GPIO_LEDS_LED_2_GPIO_FLAGS		0
#define DT_GPIO_LEDS_LED_2_GPIO_PIN		22
#define DT_GPIO_LEDS_LED_2_LABEL		"Red LED 2"
#define DT_GPIO_LEDS_LED2_GPIO_CONTROLLER	DT_GPIO_LEDS_LED_2_GPIO_CONTROLLER
#define DT_GPIO_LEDS_LED2_GPIO_FLAGS		DT_GPIO_LEDS_LED_2_GPIO_FLAGS
#define DT_GPIO_LEDS_LED2_GPIO_PIN		DT_GPIO_LEDS_LED_2_GPIO_PIN
#define DT_GPIO_LEDS_LED2_LABEL			DT_GPIO_LEDS_LED_2_LABEL
#define LED2_GPIO_CONTROLLER			DT_GPIO_LEDS_LED_2_GPIO_CONTROLLER
#define LED2_GPIO_FLAGS				DT_GPIO_LEDS_LED_2_GPIO_FLAGS
#define LED2_GPIO_PIN				DT_GPIO_LEDS_LED_2_GPIO_PIN
#define LED2_LABEL				DT_GPIO_LEDS_LED_2_LABEL

/* led_3 */
#define DT_GPIO_LEDS_LED_3_GPIO_CONTROLLER	"GPIO_0"
#define DT_GPIO_LEDS_LED_3_GPIO_FLAGS		0
#define DT_GPIO_LEDS_LED_3_GPIO_PIN		31
#define DT_GPIO_LEDS_LED_3_LABEL		"Blue LED 3"
#define DT_GPIO_LEDS_LED3_GPIO_CONTROLLER	DT_GPIO_LEDS_LED_3_GPIO_CONTROLLER
#define DT_GPIO_LEDS_LED3_GPIO_FLAGS		DT_GPIO_LEDS_LED_3_GPIO_FLAGS
#define DT_GPIO_LEDS_LED3_GPIO_PIN		DT_GPIO_LEDS_LED_3_GPIO_PIN
#define DT_GPIO_LEDS_LED3_LABEL			DT_GPIO_LEDS_LED_3_LABEL
#define LED3_GPIO_CONTROLLER			DT_GPIO_LEDS_LED_3_GPIO_CONTROLLER
#define LED3_GPIO_FLAGS				DT_GPIO_LEDS_LED_3_GPIO_FLAGS
#define LED3_GPIO_PIN				DT_GPIO_LEDS_LED_3_GPIO_PIN
#define LED3_LABEL				DT_GPIO_LEDS_LED_3_LABEL

/* memory@20000000 */
#define DT_MMIO_SRAM_0				1
#define DT_MMIO_SRAM_20000000_BASE_ADDRESS	0x20000000
#define DT_MMIO_SRAM_20000000_SIZE		65536
#define DT_SRAM_BASE_ADDRESS			0x20000000
#define DT_SRAM_SIZE				64
#define DT_MMIO_SRAM_0_BASE_ADDRESS		DT_SRAM_BASE_ADDRESS
#define DT_MMIO_SRAM_0_SIZE			DT_SRAM_SIZE

/* adc@40007000 */
#define DT_NORDIC_NRF_SAADC_0				1
#define DT_NORDIC_NRF_SAADC_40007000_BASE_ADDRESS	0x40007000
#define DT_NORDIC_NRF_SAADC_40007000_IRQ_0		7
#define DT_NORDIC_NRF_SAADC_40007000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_SAADC_40007000_LABEL		"ADC_0"
#define DT_NORDIC_NRF_SAADC_40007000_SIZE		4096
#define ADC_0_BASE_ADDRESS __DEPRECATED_MACRO 		DT_NORDIC_NRF_SAADC_40007000_BASE_ADDRESS
#define ADC_0_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_SAADC_40007000_IRQ_0
#define ADC_0_IRQ_PRIORITY __DEPRECATED_MACRO 		DT_NORDIC_NRF_SAADC_40007000_IRQ_0_PRIORITY
#define ADC_0_LABEL __DEPRECATED_MACRO 			DT_NORDIC_NRF_SAADC_40007000_LABEL
#define ADC_0_SIZE __DEPRECATED_MACRO 			DT_NORDIC_NRF_SAADC_40007000_SIZE
#define DT_NORDIC_NRF_SAADC_0_BASE_ADDRESS		DT_NORDIC_NRF_SAADC_40007000_BASE_ADDRESS
#define DT_NORDIC_NRF_SAADC_0_IRQ_0			DT_NORDIC_NRF_SAADC_40007000_IRQ_0
#define DT_NORDIC_NRF_SAADC_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_SAADC_40007000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_SAADC_0_LABEL			DT_NORDIC_NRF_SAADC_40007000_LABEL
#define DT_NORDIC_NRF_SAADC_0_SIZE			DT_NORDIC_NRF_SAADC_40007000_SIZE
#define DT_NORDIC_NRF_SAADC_ADC_0_BASE_ADDRESS		DT_NORDIC_NRF_SAADC_40007000_BASE_ADDRESS
#define DT_NORDIC_NRF_SAADC_ADC_0_IRQ			DT_NORDIC_NRF_SAADC_40007000_IRQ_0
#define DT_NORDIC_NRF_SAADC_ADC_0_IRQ_PRIORITY		DT_NORDIC_NRF_SAADC_40007000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_SAADC_ADC_0_LABEL			DT_NORDIC_NRF_SAADC_40007000_LABEL
#define DT_NORDIC_NRF_SAADC_ADC_0_SIZE			DT_NORDIC_NRF_SAADC_40007000_SIZE

/* clock@40000000 */
#define DT_NORDIC_NRF_CLOCK_40000000_BASE_ADDRESS	0x40000000
#define DT_NORDIC_NRF_CLOCK_40000000_IRQ_0		0
#define DT_NORDIC_NRF_CLOCK_40000000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_CLOCK_40000000_LABEL		"CLOCK"
#define DT_NORDIC_NRF_CLOCK_40000000_SIZE		4096
#define DT_NORDIC_NRF_CLOCK_0_BASE_ADDRESS		DT_NORDIC_NRF_CLOCK_40000000_BASE_ADDRESS
#define DT_NORDIC_NRF_CLOCK_0_IRQ_0			DT_NORDIC_NRF_CLOCK_40000000_IRQ_0
#define DT_NORDIC_NRF_CLOCK_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_CLOCK_40000000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_CLOCK_0_LABEL			DT_NORDIC_NRF_CLOCK_40000000_LABEL
#define DT_NORDIC_NRF_CLOCK_0_SIZE			DT_NORDIC_NRF_CLOCK_40000000_SIZE

/* gpio@50000000 */
#define DT_NORDIC_NRF_GPIO_0				1
#define DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_0	0x50000000
#define DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_1	0x50000500
#define DT_NORDIC_NRF_GPIO_50000000_LABEL		"GPIO_0"
#define DT_NORDIC_NRF_GPIO_50000000_SIZE_0		512
#define DT_NORDIC_NRF_GPIO_50000000_SIZE_1		768
#define DT_NORDIC_NRF_GPIO_0_BASE_ADDRESS_0		DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_0
#define DT_NORDIC_NRF_GPIO_0_BASE_ADDRESS_1		DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_1
#define DT_NORDIC_NRF_GPIO_0_LABEL			DT_NORDIC_NRF_GPIO_50000000_LABEL
#define DT_NORDIC_NRF_GPIO_0_SIZE_0			DT_NORDIC_NRF_GPIO_50000000_SIZE_0
#define DT_NORDIC_NRF_GPIO_0_SIZE_1			DT_NORDIC_NRF_GPIO_50000000_SIZE_1
#define DT_NORDIC_NRF_GPIO_GPIO_0_BASE_ADDRESS_0	DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_0
#define DT_NORDIC_NRF_GPIO_GPIO_0_BASE_ADDRESS_1	DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_1
#define DT_NORDIC_NRF_GPIO_GPIO_0_LABEL			DT_NORDIC_NRF_GPIO_50000000_LABEL
#define DT_NORDIC_NRF_GPIO_GPIO_0_SIZE_0		DT_NORDIC_NRF_GPIO_50000000_SIZE_0
#define DT_NORDIC_NRF_GPIO_GPIO_0_SIZE_1		DT_NORDIC_NRF_GPIO_50000000_SIZE_1
#define GPIO_0_BASE_ADDRESS_0 __DEPRECATED_MACRO 	DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_0
#define GPIO_0_BASE_ADDRESS_1 __DEPRECATED_MACRO 	DT_NORDIC_NRF_GPIO_50000000_BASE_ADDRESS_1
#define GPIO_0_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_GPIO_50000000_LABEL
#define GPIO_0_SIZE_0 __DEPRECATED_MACRO 		DT_NORDIC_NRF_GPIO_50000000_SIZE_0
#define GPIO_0_SIZE_1 __DEPRECATED_MACRO 		DT_NORDIC_NRF_GPIO_50000000_SIZE_1

/* gpiote@40006000 */
#define DT_NORDIC_NRF_GPIOTE_0				1
#define DT_NORDIC_NRF_GPIOTE_40006000_BASE_ADDRESS	0x40006000
#define DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0		6
#define DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0_PRIORITY	5
#define DT_NORDIC_NRF_GPIOTE_40006000_LABEL		"GPIOTE_0"
#define DT_NORDIC_NRF_GPIOTE_40006000_SIZE		4096
#define DT_NORDIC_NRF_GPIOTE_0_BASE_ADDRESS		DT_NORDIC_NRF_GPIOTE_40006000_BASE_ADDRESS
#define DT_NORDIC_NRF_GPIOTE_0_IRQ_0			DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0
#define DT_NORDIC_NRF_GPIOTE_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_GPIOTE_0_LABEL			DT_NORDIC_NRF_GPIOTE_40006000_LABEL
#define DT_NORDIC_NRF_GPIOTE_0_SIZE			DT_NORDIC_NRF_GPIOTE_40006000_SIZE
#define DT_NORDIC_NRF_GPIOTE_GPIOTE_0_BASE_ADDRESS	DT_NORDIC_NRF_GPIOTE_40006000_BASE_ADDRESS
#define DT_NORDIC_NRF_GPIOTE_GPIOTE_0_IRQ		DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0
#define DT_NORDIC_NRF_GPIOTE_GPIOTE_0_IRQ_PRIORITY	DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_GPIOTE_GPIOTE_0_LABEL		DT_NORDIC_NRF_GPIOTE_40006000_LABEL
#define DT_NORDIC_NRF_GPIOTE_GPIOTE_0_SIZE		DT_NORDIC_NRF_GPIOTE_40006000_SIZE
#define GPIOTE_0_BASE_ADDRESS __DEPRECATED_MACRO 	DT_NORDIC_NRF_GPIOTE_40006000_BASE_ADDRESS
#define GPIOTE_0_IRQ __DEPRECATED_MACRO 		DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0
#define GPIOTE_0_IRQ_PRIORITY __DEPRECATED_MACRO 	DT_NORDIC_NRF_GPIOTE_40006000_IRQ_0_PRIORITY
#define GPIOTE_0_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_GPIOTE_40006000_LABEL
#define GPIOTE_0_SIZE __DEPRECATED_MACRO 		DT_NORDIC_NRF_GPIOTE_40006000_SIZE

/* interrupt-controller@e000e100 */
#define DT_ARM_V7M_NVIC_0					1
#define DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS	3
#define DT_ARM_V7M_NVIC_E000E100_BASE_ADDRESS			0xe000e100
#define DT_ARM_V7M_NVIC_E000E100_SIZE				3072
#define DT_ARM_V7M_NVIC_0_ARM_NUM_IRQ_PRIORITY_BITS		DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS
#define DT_ARM_V7M_NVIC_0_BASE_ADDRESS				DT_ARM_V7M_NVIC_E000E100_BASE_ADDRESS
#define DT_ARM_V7M_NVIC_0_SIZE					DT_ARM_V7M_NVIC_E000E100_SIZE

/* rtc@4000b000 */
#define DT_NORDIC_NRF_RTC_0				1
#define DT_NORDIC_NRF_RTC_4000B000_BASE_ADDRESS		0x4000b000
#define DT_NORDIC_NRF_RTC_4000B000_IRQ_0		11
#define DT_NORDIC_NRF_RTC_4000B000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_RTC_4000B000_LABEL		"RTC_0"
#define DT_NORDIC_NRF_RTC_4000B000_SIZE			4096
#define DT_NORDIC_NRF_RTC_0_BASE_ADDRESS		DT_NORDIC_NRF_RTC_4000B000_BASE_ADDRESS
#define DT_NORDIC_NRF_RTC_0_IRQ_0			DT_NORDIC_NRF_RTC_4000B000_IRQ_0
#define DT_NORDIC_NRF_RTC_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_RTC_4000B000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_RTC_0_LABEL			DT_NORDIC_NRF_RTC_4000B000_LABEL
#define DT_NORDIC_NRF_RTC_0_SIZE			DT_NORDIC_NRF_RTC_4000B000_SIZE
#define DT_NORDIC_NRF_RTC_RTC_0_BASE_ADDRESS		DT_NORDIC_NRF_RTC_4000B000_BASE_ADDRESS
#define DT_NORDIC_NRF_RTC_RTC_0_IRQ			DT_NORDIC_NRF_RTC_4000B000_IRQ_0
#define DT_NORDIC_NRF_RTC_RTC_0_IRQ_PRIORITY		DT_NORDIC_NRF_RTC_4000B000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_RTC_RTC_0_LABEL			DT_NORDIC_NRF_RTC_4000B000_LABEL
#define DT_NORDIC_NRF_RTC_RTC_0_SIZE			DT_NORDIC_NRF_RTC_4000B000_SIZE
#define RTC_0_BASE_ADDRESS __DEPRECATED_MACRO 		DT_NORDIC_NRF_RTC_4000B000_BASE_ADDRESS
#define RTC_0_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_4000B000_IRQ_0
#define RTC_0_IRQ_PRIORITY __DEPRECATED_MACRO 		DT_NORDIC_NRF_RTC_4000B000_IRQ_0_PRIORITY
#define RTC_0_LABEL __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_4000B000_LABEL
#define RTC_0_SIZE __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_4000B000_SIZE

/* rtc@40011000 */
#define DT_NORDIC_NRF_RTC_1				1
#define DT_NORDIC_NRF_RTC_40011000_BASE_ADDRESS		0x40011000
#define DT_NORDIC_NRF_RTC_40011000_IRQ_0		17
#define DT_NORDIC_NRF_RTC_40011000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_RTC_40011000_LABEL		"RTC_1"
#define DT_NORDIC_NRF_RTC_40011000_SIZE			4096
#define DT_NORDIC_NRF_RTC_1_BASE_ADDRESS		DT_NORDIC_NRF_RTC_40011000_BASE_ADDRESS
#define DT_NORDIC_NRF_RTC_1_IRQ_0			DT_NORDIC_NRF_RTC_40011000_IRQ_0
#define DT_NORDIC_NRF_RTC_1_IRQ_0_PRIORITY		DT_NORDIC_NRF_RTC_40011000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_RTC_1_LABEL			DT_NORDIC_NRF_RTC_40011000_LABEL
#define DT_NORDIC_NRF_RTC_1_SIZE			DT_NORDIC_NRF_RTC_40011000_SIZE
#define DT_NORDIC_NRF_RTC_RTC_1_BASE_ADDRESS		DT_NORDIC_NRF_RTC_40011000_BASE_ADDRESS
#define DT_NORDIC_NRF_RTC_RTC_1_IRQ			DT_NORDIC_NRF_RTC_40011000_IRQ_0
#define DT_NORDIC_NRF_RTC_RTC_1_IRQ_PRIORITY		DT_NORDIC_NRF_RTC_40011000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_RTC_RTC_1_LABEL			DT_NORDIC_NRF_RTC_40011000_LABEL
#define DT_NORDIC_NRF_RTC_RTC_1_SIZE			DT_NORDIC_NRF_RTC_40011000_SIZE
#define RTC_1_BASE_ADDRESS __DEPRECATED_MACRO 		DT_NORDIC_NRF_RTC_40011000_BASE_ADDRESS
#define RTC_1_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_40011000_IRQ_0
#define RTC_1_IRQ_PRIORITY __DEPRECATED_MACRO 		DT_NORDIC_NRF_RTC_40011000_IRQ_0_PRIORITY
#define RTC_1_LABEL __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_40011000_LABEL
#define RTC_1_SIZE __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_40011000_SIZE

/* rtc@40024000 */
#define DT_NORDIC_NRF_RTC_2				1
#define DT_NORDIC_NRF_RTC_40024000_BASE_ADDRESS		0x40024000
#define DT_NORDIC_NRF_RTC_40024000_IRQ_0		36
#define DT_NORDIC_NRF_RTC_40024000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_RTC_40024000_LABEL		"RTC_2"
#define DT_NORDIC_NRF_RTC_40024000_SIZE			4096
#define DT_NORDIC_NRF_RTC_2_BASE_ADDRESS		DT_NORDIC_NRF_RTC_40024000_BASE_ADDRESS
#define DT_NORDIC_NRF_RTC_2_IRQ_0			DT_NORDIC_NRF_RTC_40024000_IRQ_0
#define DT_NORDIC_NRF_RTC_2_IRQ_0_PRIORITY		DT_NORDIC_NRF_RTC_40024000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_RTC_2_LABEL			DT_NORDIC_NRF_RTC_40024000_LABEL
#define DT_NORDIC_NRF_RTC_2_SIZE			DT_NORDIC_NRF_RTC_40024000_SIZE
#define DT_NORDIC_NRF_RTC_RTC_2_BASE_ADDRESS		DT_NORDIC_NRF_RTC_40024000_BASE_ADDRESS
#define DT_NORDIC_NRF_RTC_RTC_2_IRQ			DT_NORDIC_NRF_RTC_40024000_IRQ_0
#define DT_NORDIC_NRF_RTC_RTC_2_IRQ_PRIORITY		DT_NORDIC_NRF_RTC_40024000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_RTC_RTC_2_LABEL			DT_NORDIC_NRF_RTC_40024000_LABEL
#define DT_NORDIC_NRF_RTC_RTC_2_SIZE			DT_NORDIC_NRF_RTC_40024000_SIZE
#define RTC_2_BASE_ADDRESS __DEPRECATED_MACRO 		DT_NORDIC_NRF_RTC_40024000_BASE_ADDRESS
#define RTC_2_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_40024000_IRQ_0
#define RTC_2_IRQ_PRIORITY __DEPRECATED_MACRO 		DT_NORDIC_NRF_RTC_40024000_IRQ_0_PRIORITY
#define RTC_2_LABEL __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_40024000_LABEL
#define RTC_2_SIZE __DEPRECATED_MACRO 			DT_NORDIC_NRF_RTC_40024000_SIZE

/* spi@40004000 */
#define DT_NORDIC_NRF_SPI_0				1
#define DT_NORDIC_NRF_SPI_40004000_BASE_ADDRESS		0x40004000
#define DT_NORDIC_NRF_SPI_40004000_IRQ_0		4
#define DT_NORDIC_NRF_SPI_40004000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_SPI_40004000_LABEL		"SPI_1"
#define DT_NORDIC_NRF_SPI_40004000_MISO_PIN		18
#define DT_NORDIC_NRF_SPI_40004000_MOSI_PIN		20
#define DT_NORDIC_NRF_SPI_40004000_SCK_PIN		16
#define DT_NORDIC_NRF_SPI_40004000_SIZE			4096
#define DT_NORDIC_NRF_SPI_40004000_SS_PIN		17
#define DT_NORDIC_NRF_SPI_0_BASE_ADDRESS		DT_NORDIC_NRF_SPI_40004000_BASE_ADDRESS
#define DT_NORDIC_NRF_SPI_0_IRQ_0			DT_NORDIC_NRF_SPI_40004000_IRQ_0
#define DT_NORDIC_NRF_SPI_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_SPI_40004000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_SPI_0_LABEL			DT_NORDIC_NRF_SPI_40004000_LABEL
#define DT_NORDIC_NRF_SPI_0_MISO_PIN			DT_NORDIC_NRF_SPI_40004000_MISO_PIN
#define DT_NORDIC_NRF_SPI_0_MOSI_PIN			DT_NORDIC_NRF_SPI_40004000_MOSI_PIN
#define DT_NORDIC_NRF_SPI_0_SCK_PIN			DT_NORDIC_NRF_SPI_40004000_SCK_PIN
#define DT_NORDIC_NRF_SPI_0_SIZE			DT_NORDIC_NRF_SPI_40004000_SIZE
#define DT_NORDIC_NRF_SPI_0_SS_PIN			DT_NORDIC_NRF_SPI_40004000_SS_PIN
#define DT_NORDIC_NRF_SPI_SPI_1_BASE_ADDRESS		DT_NORDIC_NRF_SPI_40004000_BASE_ADDRESS
#define DT_NORDIC_NRF_SPI_SPI_1_IRQ			DT_NORDIC_NRF_SPI_40004000_IRQ_0
#define DT_NORDIC_NRF_SPI_SPI_1_IRQ_PRIORITY		DT_NORDIC_NRF_SPI_40004000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_SPI_SPI_1_LABEL			DT_NORDIC_NRF_SPI_40004000_LABEL
#define DT_NORDIC_NRF_SPI_SPI_1_MISO_PIN		DT_NORDIC_NRF_SPI_40004000_MISO_PIN
#define DT_NORDIC_NRF_SPI_SPI_1_MOSI_PIN		DT_NORDIC_NRF_SPI_40004000_MOSI_PIN
#define DT_NORDIC_NRF_SPI_SPI_1_SCK_PIN			DT_NORDIC_NRF_SPI_40004000_SCK_PIN
#define DT_NORDIC_NRF_SPI_SPI_1_SIZE			DT_NORDIC_NRF_SPI_40004000_SIZE
#define DT_NORDIC_NRF_SPI_SPI_1_SS_PIN			DT_NORDIC_NRF_SPI_40004000_SS_PIN
#define SPI_1_BASE_ADDRESS __DEPRECATED_MACRO 		DT_NORDIC_NRF_SPI_40004000_BASE_ADDRESS
#define SPI_1_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_SPI_40004000_IRQ_0
#define SPI_1_IRQ_PRIORITY __DEPRECATED_MACRO 		DT_NORDIC_NRF_SPI_40004000_IRQ_0_PRIORITY
#define SPI_1_LABEL __DEPRECATED_MACRO 			DT_NORDIC_NRF_SPI_40004000_LABEL
#define SPI_1_MISO_PIN __DEPRECATED_MACRO 		DT_NORDIC_NRF_SPI_40004000_MISO_PIN
#define SPI_1_MOSI_PIN __DEPRECATED_MACRO 		DT_NORDIC_NRF_SPI_40004000_MOSI_PIN
#define SPI_1_SCK_PIN __DEPRECATED_MACRO 		DT_NORDIC_NRF_SPI_40004000_SCK_PIN
#define SPI_1_SIZE __DEPRECATED_MACRO 			DT_NORDIC_NRF_SPI_40004000_SIZE
#define SPI_1_SS_PIN __DEPRECATED_MACRO 		DT_NORDIC_NRF_SPI_40004000_SS_PIN

/* temp@4000c000 */
#define DT_NORDIC_NRF_TEMP_4000C000_BASE_ADDRESS	0x4000c000
#define DT_NORDIC_NRF_TEMP_4000C000_IRQ_0		12
#define DT_NORDIC_NRF_TEMP_4000C000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_TEMP_4000C000_SIZE		4096
#define DT_NORDIC_NRF_TEMP_0_BASE_ADDRESS		DT_NORDIC_NRF_TEMP_4000C000_BASE_ADDRESS
#define DT_NORDIC_NRF_TEMP_0_IRQ_0			DT_NORDIC_NRF_TEMP_4000C000_IRQ_0
#define DT_NORDIC_NRF_TEMP_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_TEMP_4000C000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TEMP_0_SIZE			DT_NORDIC_NRF_TEMP_4000C000_SIZE

/* timer@40008000 */
#define DT_NORDIC_NRF_TIMER_40008000_BASE_ADDRESS	0x40008000
#define DT_NORDIC_NRF_TIMER_40008000_IRQ_0		8
#define DT_NORDIC_NRF_TIMER_40008000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_TIMER_40008000_LABEL		"TIMER_0"
#define DT_NORDIC_NRF_TIMER_40008000_SIZE		4096
#define DT_NORDIC_NRF_TIMER_0_BASE_ADDRESS		DT_NORDIC_NRF_TIMER_40008000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_0_IRQ_0			DT_NORDIC_NRF_TIMER_40008000_IRQ_0
#define DT_NORDIC_NRF_TIMER_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_TIMER_40008000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_0_LABEL			DT_NORDIC_NRF_TIMER_40008000_LABEL
#define DT_NORDIC_NRF_TIMER_0_SIZE			DT_NORDIC_NRF_TIMER_40008000_SIZE
#define DT_NORDIC_NRF_TIMER_TIMER_0_BASE_ADDRESS	DT_NORDIC_NRF_TIMER_40008000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_TIMER_0_IRQ			DT_NORDIC_NRF_TIMER_40008000_IRQ_0
#define DT_NORDIC_NRF_TIMER_TIMER_0_IRQ_PRIORITY	DT_NORDIC_NRF_TIMER_40008000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_TIMER_0_LABEL		DT_NORDIC_NRF_TIMER_40008000_LABEL
#define DT_NORDIC_NRF_TIMER_TIMER_0_SIZE		DT_NORDIC_NRF_TIMER_40008000_SIZE
#define TIMER_0_BASE_ADDRESS __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_40008000_BASE_ADDRESS
#define TIMER_0_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_TIMER_40008000_IRQ_0
#define TIMER_0_IRQ_PRIORITY __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_40008000_IRQ_0_PRIORITY
#define TIMER_0_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_40008000_LABEL
#define TIMER_0_SIZE __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_40008000_SIZE

/* timer@40009000 */
#define DT_NORDIC_NRF_TIMER_40009000_BASE_ADDRESS	0x40009000
#define DT_NORDIC_NRF_TIMER_40009000_IRQ_0		9
#define DT_NORDIC_NRF_TIMER_40009000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_TIMER_40009000_LABEL		"TIMER_1"
#define DT_NORDIC_NRF_TIMER_40009000_SIZE		4096
#define DT_NORDIC_NRF_TIMER_1_BASE_ADDRESS		DT_NORDIC_NRF_TIMER_40009000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_1_IRQ_0			DT_NORDIC_NRF_TIMER_40009000_IRQ_0
#define DT_NORDIC_NRF_TIMER_1_IRQ_0_PRIORITY		DT_NORDIC_NRF_TIMER_40009000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_1_LABEL			DT_NORDIC_NRF_TIMER_40009000_LABEL
#define DT_NORDIC_NRF_TIMER_1_SIZE			DT_NORDIC_NRF_TIMER_40009000_SIZE
#define DT_NORDIC_NRF_TIMER_TIMER_1_BASE_ADDRESS	DT_NORDIC_NRF_TIMER_40009000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_TIMER_1_IRQ			DT_NORDIC_NRF_TIMER_40009000_IRQ_0
#define DT_NORDIC_NRF_TIMER_TIMER_1_IRQ_PRIORITY	DT_NORDIC_NRF_TIMER_40009000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_TIMER_1_LABEL		DT_NORDIC_NRF_TIMER_40009000_LABEL
#define DT_NORDIC_NRF_TIMER_TIMER_1_SIZE		DT_NORDIC_NRF_TIMER_40009000_SIZE
#define TIMER_1_BASE_ADDRESS __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_40009000_BASE_ADDRESS
#define TIMER_1_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_TIMER_40009000_IRQ_0
#define TIMER_1_IRQ_PRIORITY __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_40009000_IRQ_0_PRIORITY
#define TIMER_1_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_40009000_LABEL
#define TIMER_1_SIZE __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_40009000_SIZE

/* timer@4000a000 */
#define DT_NORDIC_NRF_TIMER_4000A000_BASE_ADDRESS	0x4000a000
#define DT_NORDIC_NRF_TIMER_4000A000_IRQ_0		10
#define DT_NORDIC_NRF_TIMER_4000A000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_TIMER_4000A000_LABEL		"TIMER_2"
#define DT_NORDIC_NRF_TIMER_4000A000_SIZE		4096
#define DT_NORDIC_NRF_TIMER_2_BASE_ADDRESS		DT_NORDIC_NRF_TIMER_4000A000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_2_IRQ_0			DT_NORDIC_NRF_TIMER_4000A000_IRQ_0
#define DT_NORDIC_NRF_TIMER_2_IRQ_0_PRIORITY		DT_NORDIC_NRF_TIMER_4000A000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_2_LABEL			DT_NORDIC_NRF_TIMER_4000A000_LABEL
#define DT_NORDIC_NRF_TIMER_2_SIZE			DT_NORDIC_NRF_TIMER_4000A000_SIZE
#define DT_NORDIC_NRF_TIMER_TIMER_2_BASE_ADDRESS	DT_NORDIC_NRF_TIMER_4000A000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_TIMER_2_IRQ			DT_NORDIC_NRF_TIMER_4000A000_IRQ_0
#define DT_NORDIC_NRF_TIMER_TIMER_2_IRQ_PRIORITY	DT_NORDIC_NRF_TIMER_4000A000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_TIMER_2_LABEL		DT_NORDIC_NRF_TIMER_4000A000_LABEL
#define DT_NORDIC_NRF_TIMER_TIMER_2_SIZE		DT_NORDIC_NRF_TIMER_4000A000_SIZE
#define TIMER_2_BASE_ADDRESS __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_4000A000_BASE_ADDRESS
#define TIMER_2_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_TIMER_4000A000_IRQ_0
#define TIMER_2_IRQ_PRIORITY __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_4000A000_IRQ_0_PRIORITY
#define TIMER_2_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_4000A000_LABEL
#define TIMER_2_SIZE __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_4000A000_SIZE

/* timer@4001a000 */
#define DT_NORDIC_NRF_TIMER_4001A000_BASE_ADDRESS	0x4001a000
#define DT_NORDIC_NRF_TIMER_4001A000_IRQ_0		26
#define DT_NORDIC_NRF_TIMER_4001A000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_TIMER_4001A000_LABEL		"TIMER_3"
#define DT_NORDIC_NRF_TIMER_4001A000_SIZE		4096
#define DT_NORDIC_NRF_TIMER_3_BASE_ADDRESS		DT_NORDIC_NRF_TIMER_4001A000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_3_IRQ_0			DT_NORDIC_NRF_TIMER_4001A000_IRQ_0
#define DT_NORDIC_NRF_TIMER_3_IRQ_0_PRIORITY		DT_NORDIC_NRF_TIMER_4001A000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_3_LABEL			DT_NORDIC_NRF_TIMER_4001A000_LABEL
#define DT_NORDIC_NRF_TIMER_3_SIZE			DT_NORDIC_NRF_TIMER_4001A000_SIZE
#define DT_NORDIC_NRF_TIMER_TIMER_3_BASE_ADDRESS	DT_NORDIC_NRF_TIMER_4001A000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_TIMER_3_IRQ			DT_NORDIC_NRF_TIMER_4001A000_IRQ_0
#define DT_NORDIC_NRF_TIMER_TIMER_3_IRQ_PRIORITY	DT_NORDIC_NRF_TIMER_4001A000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_TIMER_3_LABEL		DT_NORDIC_NRF_TIMER_4001A000_LABEL
#define DT_NORDIC_NRF_TIMER_TIMER_3_SIZE		DT_NORDIC_NRF_TIMER_4001A000_SIZE
#define TIMER_3_BASE_ADDRESS __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_4001A000_BASE_ADDRESS
#define TIMER_3_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_TIMER_4001A000_IRQ_0
#define TIMER_3_IRQ_PRIORITY __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_4001A000_IRQ_0_PRIORITY
#define TIMER_3_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_4001A000_LABEL
#define TIMER_3_SIZE __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_4001A000_SIZE

/* timer@4001b000 */
#define DT_NORDIC_NRF_TIMER_4001B000_BASE_ADDRESS	0x4001b000
#define DT_NORDIC_NRF_TIMER_4001B000_IRQ_0		27
#define DT_NORDIC_NRF_TIMER_4001B000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_TIMER_4001B000_LABEL		"TIMER_4"
#define DT_NORDIC_NRF_TIMER_4001B000_SIZE		4096
#define DT_NORDIC_NRF_TIMER_4_BASE_ADDRESS		DT_NORDIC_NRF_TIMER_4001B000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_4_IRQ_0			DT_NORDIC_NRF_TIMER_4001B000_IRQ_0
#define DT_NORDIC_NRF_TIMER_4_IRQ_0_PRIORITY		DT_NORDIC_NRF_TIMER_4001B000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_4_LABEL			DT_NORDIC_NRF_TIMER_4001B000_LABEL
#define DT_NORDIC_NRF_TIMER_4_SIZE			DT_NORDIC_NRF_TIMER_4001B000_SIZE
#define DT_NORDIC_NRF_TIMER_TIMER_4_BASE_ADDRESS	DT_NORDIC_NRF_TIMER_4001B000_BASE_ADDRESS
#define DT_NORDIC_NRF_TIMER_TIMER_4_IRQ			DT_NORDIC_NRF_TIMER_4001B000_IRQ_0
#define DT_NORDIC_NRF_TIMER_TIMER_4_IRQ_PRIORITY	DT_NORDIC_NRF_TIMER_4001B000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_TIMER_TIMER_4_LABEL		DT_NORDIC_NRF_TIMER_4001B000_LABEL
#define DT_NORDIC_NRF_TIMER_TIMER_4_SIZE		DT_NORDIC_NRF_TIMER_4001B000_SIZE
#define TIMER_4_BASE_ADDRESS __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_4001B000_BASE_ADDRESS
#define TIMER_4_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_TIMER_4001B000_IRQ_0
#define TIMER_4_IRQ_PRIORITY __DEPRECATED_MACRO 	DT_NORDIC_NRF_TIMER_4001B000_IRQ_0_PRIORITY
#define TIMER_4_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_4001B000_LABEL
#define TIMER_4_SIZE __DEPRECATED_MACRO 		DT_NORDIC_NRF_TIMER_4001B000_SIZE

/* uart@40002000 */
#define DT_NORDIC_NRF_UART_0				1
#define DT_NORDIC_NRF_UART_40002000_BASE_ADDRESS	0x40002000
#define DT_NORDIC_NRF_UART_40002000_CURRENT_SPEED	115200
#define DT_NORDIC_NRF_UART_40002000_IRQ_0		2
#define DT_NORDIC_NRF_UART_40002000_IRQ_0_PRIORITY	1
#define DT_NORDIC_NRF_UART_40002000_LABEL		"UART_0"
#define DT_NORDIC_NRF_UART_40002000_RX_PIN		11
#define DT_NORDIC_NRF_UART_40002000_SIZE		4096
#define DT_NORDIC_NRF_UART_40002000_TX_PIN		5
#define DT_UART_CONSOLE_ON_DEV_NAME			"UART_0"
#define DT_UART_MCUMGR_ON_DEV_NAME			"UART_0"
#define DT_UART_SHELL_ON_DEV_NAME			"UART_0"
#define DT_NORDIC_NRF_UART_0_BASE_ADDRESS		DT_NORDIC_NRF_UART_40002000_BASE_ADDRESS
#define DT_NORDIC_NRF_UART_0_CURRENT_SPEED		DT_NORDIC_NRF_UART_40002000_CURRENT_SPEED
#define DT_NORDIC_NRF_UART_0_IRQ_0			DT_NORDIC_NRF_UART_40002000_IRQ_0
#define DT_NORDIC_NRF_UART_0_IRQ_0_PRIORITY		DT_NORDIC_NRF_UART_40002000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_UART_0_LABEL			DT_NORDIC_NRF_UART_40002000_LABEL
#define DT_NORDIC_NRF_UART_0_RX_PIN			DT_NORDIC_NRF_UART_40002000_RX_PIN
#define DT_NORDIC_NRF_UART_0_SIZE			DT_NORDIC_NRF_UART_40002000_SIZE
#define DT_NORDIC_NRF_UART_0_TX_PIN			DT_NORDIC_NRF_UART_40002000_TX_PIN
#define DT_NORDIC_NRF_UART_UART_0_BASE_ADDRESS		DT_NORDIC_NRF_UART_40002000_BASE_ADDRESS
#define DT_NORDIC_NRF_UART_UART_0_CURRENT_SPEED		DT_NORDIC_NRF_UART_40002000_CURRENT_SPEED
#define DT_NORDIC_NRF_UART_UART_0_IRQ			DT_NORDIC_NRF_UART_40002000_IRQ_0
#define DT_NORDIC_NRF_UART_UART_0_IRQ_PRIORITY		DT_NORDIC_NRF_UART_40002000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_UART_UART_0_LABEL			DT_NORDIC_NRF_UART_40002000_LABEL
#define DT_NORDIC_NRF_UART_UART_0_RX_PIN		DT_NORDIC_NRF_UART_40002000_RX_PIN
#define DT_NORDIC_NRF_UART_UART_0_SIZE			DT_NORDIC_NRF_UART_40002000_SIZE
#define DT_NORDIC_NRF_UART_UART_0_TX_PIN		DT_NORDIC_NRF_UART_40002000_TX_PIN
#define UART_0_BASE_ADDRESS __DEPRECATED_MACRO 		DT_NORDIC_NRF_UART_40002000_BASE_ADDRESS
#define UART_0_CURRENT_SPEED __DEPRECATED_MACRO 	DT_NORDIC_NRF_UART_40002000_CURRENT_SPEED
#define UART_0_IRQ __DEPRECATED_MACRO 			DT_NORDIC_NRF_UART_40002000_IRQ_0
#define UART_0_IRQ_PRIORITY __DEPRECATED_MACRO 		DT_NORDIC_NRF_UART_40002000_IRQ_0_PRIORITY
#define UART_0_LABEL __DEPRECATED_MACRO 		DT_NORDIC_NRF_UART_40002000_LABEL
#define UART_0_RX_PIN __DEPRECATED_MACRO 		DT_NORDIC_NRF_UART_40002000_RX_PIN
#define UART_0_SIZE __DEPRECATED_MACRO 			DT_NORDIC_NRF_UART_40002000_SIZE
#define UART_0_TX_PIN __DEPRECATED_MACRO 		DT_NORDIC_NRF_UART_40002000_TX_PIN

/* watchdog@40010000 */
#define DT_NORDIC_NRF_WATCHDOG_0				1
#define DT_NORDIC_NRF_WATCHDOG_40010000_BASE_ADDRESS		0x40010000
#define DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0			16
#define DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0_PRIORITY		1
#define DT_NORDIC_NRF_WATCHDOG_40010000_LABEL			"WDT"
#define DT_NORDIC_NRF_WATCHDOG_40010000_SIZE			4096
#define DT_NORDIC_NRF_WATCHDOG_0_BASE_ADDRESS			DT_NORDIC_NRF_WATCHDOG_40010000_BASE_ADDRESS
#define DT_NORDIC_NRF_WATCHDOG_0_IRQ_0				DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0
#define DT_NORDIC_NRF_WATCHDOG_0_IRQ_0_PRIORITY			DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_WATCHDOG_0_LABEL				DT_NORDIC_NRF_WATCHDOG_40010000_LABEL
#define DT_NORDIC_NRF_WATCHDOG_0_SIZE				DT_NORDIC_NRF_WATCHDOG_40010000_SIZE
#define DT_NORDIC_NRF_WATCHDOG_WDT_0_BASE_ADDRESS		DT_NORDIC_NRF_WATCHDOG_40010000_BASE_ADDRESS
#define DT_NORDIC_NRF_WATCHDOG_WDT_0_IRQ			DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0
#define DT_NORDIC_NRF_WATCHDOG_WDT_0_IRQ_PRIORITY		DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0_PRIORITY
#define DT_NORDIC_NRF_WATCHDOG_WDT_0_LABEL			DT_NORDIC_NRF_WATCHDOG_40010000_LABEL
#define DT_NORDIC_NRF_WATCHDOG_WDT_0_SIZE			DT_NORDIC_NRF_WATCHDOG_40010000_SIZE
#define WDT_0_BASE_ADDRESS __DEPRECATED_MACRO 			DT_NORDIC_NRF_WATCHDOG_40010000_BASE_ADDRESS
#define WDT_0_IRQ __DEPRECATED_MACRO 				DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0
#define WDT_0_IRQ_PRIORITY __DEPRECATED_MACRO 			DT_NORDIC_NRF_WATCHDOG_40010000_IRQ_0_PRIORITY
#define WDT_0_LABEL __DEPRECATED_MACRO 				DT_NORDIC_NRF_WATCHDOG_40010000_LABEL
#define WDT_0_SIZE __DEPRECATED_MACRO 				DT_NORDIC_NRF_WATCHDOG_40010000_SIZE

/* DT_FLASH_AREA */
#define DT_FLASH_AREA_0_DEV			"NRF_FLASH_DRV_NAME"
#define DT_FLASH_AREA_0_LABEL			MCUBOOT
#define DT_FLASH_AREA_0_OFFSET_0		0
#define DT_FLASH_AREA_0_SIZE_0			49152
#define DT_FLASH_AREA_1_DEV			"NRF_FLASH_DRV_NAME"
#define DT_FLASH_AREA_1_LABEL			IMAGE_1
#define DT_FLASH_AREA_1_OFFSET_0		253952
#define DT_FLASH_AREA_1_SIZE_0			204800
#define DT_FLASH_AREA_2_DEV			"NRF_FLASH_DRV_NAME"
#define DT_FLASH_AREA_2_LABEL			IMAGE_SCRATCH
#define DT_FLASH_AREA_2_OFFSET_0		458752
#define DT_FLASH_AREA_2_SIZE_0			40960
#define DT_FLASH_AREA_3_DEV			"NRF_FLASH_DRV_NAME"
#define DT_FLASH_AREA_3_LABEL			STORAGE
#define DT_FLASH_AREA_3_OFFSET_0		499712
#define DT_FLASH_AREA_3_SIZE_0			24576
#define DT_FLASH_AREA_4_DEV			"NRF_FLASH_DRV_NAME"
#define DT_FLASH_AREA_4_LABEL			IMAGE_0
#define DT_FLASH_AREA_4_OFFSET_0		49152
#define DT_FLASH_AREA_4_SIZE_0			204800
#define DT_FLASH_AREA_IMAGE_0_ID		4
#define DT_FLASH_AREA_IMAGE_1_ID		1
#define DT_FLASH_AREA_IMAGE_SCRATCH_ID		2
#define DT_FLASH_AREA_MCUBOOT_ID		0
#define DT_FLASH_AREA_NUM			5
#define DT_FLASH_AREA_STORAGE_ID		3
#define DT_FLASH_AREA_0_OFFSET			DT_FLASH_AREA_0_OFFSET_0
#define DT_FLASH_AREA_0_SIZE			DT_FLASH_AREA_0_SIZE_0
#define DT_FLASH_AREA_1_OFFSET			DT_FLASH_AREA_1_OFFSET_0
#define DT_FLASH_AREA_1_SIZE			DT_FLASH_AREA_1_SIZE_0
#define DT_FLASH_AREA_2_OFFSET			DT_FLASH_AREA_2_OFFSET_0
#define DT_FLASH_AREA_2_SIZE			DT_FLASH_AREA_2_SIZE_0
#define DT_FLASH_AREA_3_OFFSET			DT_FLASH_AREA_3_OFFSET_0
#define DT_FLASH_AREA_3_SIZE			DT_FLASH_AREA_3_SIZE_0
#define DT_FLASH_AREA_4_OFFSET			DT_FLASH_AREA_4_OFFSET_0
#define DT_FLASH_AREA_4_SIZE			DT_FLASH_AREA_4_SIZE_0

/* chosen */
#define DT_CHOSEN_ZEPHYR_CODE_PARTITION		1
#define DT_CHOSEN_ZEPHYR_CONSOLE		1
#define DT_CHOSEN_ZEPHYR_FLASH			1
#define DT_CHOSEN_ZEPHYR_SHELL_UART		1
#define DT_CHOSEN_ZEPHYR_SRAM			1
#define DT_CHOSEN_ZEPHYR_UART_MCUMGR		1

/* compatibles */
#define DT_COMPAT_ARM_V7M_NVIC				1
#define DT_COMPAT_FIXED_PARTITIONS			1
#define DT_COMPAT_GPIO_KEYS				1
#define DT_COMPAT_GPIO_LEDS				1
#define DT_COMPAT_MMIO_SRAM				1
#define DT_COMPAT_NORDIC_NRF52_FLASH_CONTROLLER		1
#define DT_COMPAT_NORDIC_NRF_GPIO			1
#define DT_COMPAT_NORDIC_NRF_GPIOTE			1
#define DT_COMPAT_NORDIC_NRF_RTC			1
#define DT_COMPAT_NORDIC_NRF_SAADC			1
#define DT_COMPAT_NORDIC_NRF_SPI			1
#define DT_COMPAT_NORDIC_NRF_UART			1
#define DT_COMPAT_NORDIC_NRF_WATCHDOG			1
#define DT_COMPAT_SOC_NV_FLASH				1

#endif
