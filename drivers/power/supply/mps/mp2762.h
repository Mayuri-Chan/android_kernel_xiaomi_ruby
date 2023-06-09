#include <linux/bitops.h>

#define MP2762_IINLIM0_REG		0x00
#define MP2762_IINLIM0_MASK		GENMASK(6, 0)
#define MP2762_IINLIM0_BASE		0
#define MP2762_IINLIM0_STEP		50
#define MP2762_IINLIM0_SHIFT		0
#define MP2762_IINLIM0_MAX		6350

#define MP2762_VINMIN_REG		0x01
#define MP2762_VINMIN_MASK		GENMASK(7, 0)
#define MP2762_VINMIN_BASE		0
#define MP2762_VINMIN_STEP		100
#define MP2762_VINMIN_SHIFT		0
#define MP2762_VINMIN_MAX		25500

#define MP2762_FCC_REG			0x02
#define MP2762_FCC_MASK			GENMASK(6, 0)
#define MP2762_FCC_BASE			0
#define MP2762_FCC_STEP			50
#define MP2762_FCC_SHIFT		0
#define MP2762_FCC_MAX			6000

#define MP2762_IPRE_ITERM_REG		0x03
#define MP2762_ITERM_MASK		GENMASK(3, 0)
#define MP2762_ITERM_BASE		0
#define MP2762_ITERM_STEP		100
#define MP2762_ITERM_SHIFT		0
#define MP2762_ITERM_MAX		1500
#define MP2762_IPRECHG_MASK		GENMASK(7, 4)
#define MP2762_IPRECHG_BASE		0
#define MP2762_IPRECHG_STEP		60
#define MP2762_IPRECHG_SHIFT		4
#define MP2762_IPRECHG_MAX		840

#define MP2762_FV_RECHG_VGAP_REG	0x04
#define MP2762_FV_MASK			GENMASK(6, 1)
#define MP2762_FV_BASE			7425
#define MP2762_FV_STEP			25
#define MP2762_FV_SHIFT			1
#define MP2762_FV_MAX			9000
#define MP2762_RECHG_VGAP_MASK		BIT(0)
#define MP2762_RECHG_VGAP_BASE		200
#define MP2762_RECHG_VGAP_STEP		200
#define MP2762_RECHG_VGAP_SHIFT		0
#define MP2762_RECHG_VGAP_MAX		400

#define MP2762_IR_FET_REG		0x05

#define MP2762_VOTG_REG			0x06
#define MP2762_VOTG_MASK		GENMASK(6, 0)
#define MP2762_OTG_VOLTAGE_MAXVAL 5100

#define MP2762_IOTG_VPRECHG_REG		0x07
#define MP2762_VPRECHG_MASK		GENMASK(5, 4)
#define MP2762_VPRECHG_BASE		5800
#define MP2762_VPRECHG_STEP		200
#define MP2762_VPRECHG_SHIFT		4
#define MP2762_VPRECHG_MAX		6400
#define MP2762_IOTG_MASK		GENMASK(3, 0)
#define MP2762_IOTG_BASE		0
#define MP2762_IOTG_STEP		250
#define MP2762_IOTG_SHIFT		0
#define MP2762_IOTG_MAX			3750

#define MP2762_CONFIGURE_REG0		0x08
#define MP2762_RESET_REGS_BIT		BIT(7)
#define MP2762_RESET_WTD_BIT		BIT(6)
#define MP2762_ENABLE_OTG_BIT		BIT(5)
#define MP2762_ENABLE_CHG_BIT		BIT(4)
#define MP2762_SUSP_INPUT_BIT		BIT(3)
#define MP2762_NTC_GCOMP_SEL_BIT	BIT(2)

#define MP2762_CONFIGURE_REG1		0x09
#define MP2762_ENABLE_TERM_BIT		BIT(6)
#define MP2762_WTD_TIMER_MASK		GENMASK(5, 4)
#define MP2762_WTD_TIMER_SHIFT		4
#define MP2762_WTD_TIMER_DISABLE	0
#define MP2762_WTD_TIMER_40S		1
#define MP2762_WTD_TIMER_80S		2
#define MP2762_WTD_TIMER_160S		3
#define MP2762_ENABLE_CHG_TIMER_BIT	BIT(3)
#define MP2762_CHG_TIMER_MASK		GENMASK(2, 1)
#define MP2762_CHG_TIMER_SHIFT		1
#define MP2762_CHG_TIMER_5H		0
#define MP2762_CHG_TIMER_8H		1
#define MP2762_CHG_TIMER_12H		2
#define MP2762_CHG_TIMER_20H		3

#define MP2762_CONFIGURE_REG2		0x0A

#define MP2762_CONFIGURE_REG3		0x0B

#define MP2762_CONFIGURE_REG4		0x0C

#define MP2762_SYS_OTG_UVOV_REG		0x0D

#define MP2762_PROCHOT_REG		0x0E

#define MP2762_IINLIM1_REG		0x0F
#define MP2762_IINLIM1_MASK		GENMASK(6, 0)
#define MP2762_IINLIM1_BASE		0
#define MP2762_IINLIM1_STEP		50
#define MP2762_IINLIM1_SHIFT		0
#define MP2762_IINLIM1_MAX		6350

#define MP2762_IINLIM1_DURATION_REG	0x10

#define MP2762_IINLIM_PERIOD_REG	0x11

#define MP2762_IINOCP_REG		0x12

#define MP2762_STATUS_REG		0x13
#define MP2762_BAT_UVLO_BIT		BIT(7)
#define MP2762_VSYS_UV_BIT		BIT(6)
#define MP2762_CHG_STATUS_MASK		GENMASK(3, 2)
#define MP2762_CHG_STATUS_SHIFT		2
#define MP2762_VIN_PG_BIT		BIT(1)
#define MP2762_VSYS_STATUS_BIT		BIT(0)

#define MP2762_FAULT_REG		0x14
#define MP2762_WTD_TIMEOUT_BIT		BIT(7)
#define MP2762_OTG_FAULT_BIT		BIT(6)
#define MP2762_CHG_FAULT_MASK		GENMASK(5, 4)
#define MP2762_CHG_FAULT_SHIFT		4
#define MP2762_CHG_FAULT_NORMAL		0
#define MP2762_CHG_FAULT_VIN_OVP	1
#define MP2762_CHG_FAULT_THERMAL	2
#define MP2762_CHG_FAULT_CHG_TIMER	3
#define MP2762_BAT_OVP_BIT		BIT(3)
#define MP2762_THERMAL_STATUS_MASK	GENMASK(2, 0)
#define MP2762_THERMAL_STATUS_SHIFT	0

#define MP2762_ADC_VBAT_REG		0x16
#define MP2762_ADC_VBAT_SHIFT		6
#define MP2762_ADC_VBAT_STEP		12500
#define MP2762_ADC_VBAT_RATE		1000

#define MP2762_ADC_VSYS_REG		0x18
#define MP2762_ADC_VSYS_SHIFT		6
#define MP2762_ADC_VSYS_STEP		12500
#define MP2762_ADC_VSYS_RATE		1000

#define MP2762_ADC_CHARGE_IBAT_REG	0x1A
#define MP2762_ADC_CHARGE_IBAT_SHIFT	6
#define MP2762_ADC_CHARGE_IBAT_STEP	12500
#define MP2762_ADC_CHARGE_IBAT_RATE	1000

#define MP2762_ADC_VBUS_REG		0x1C
#define MP2762_ADC_VBUS_SHIFT		6
#define MP2762_ADC_VBUS_STEP		25
#define MP2762_ADC_VBUS_RATE		1

#define MP2762_ADC_IBUS_REG		0x1E
#define MP2762_ADC_IBUS_SHIFT		6
#define MP2762_ADC_IBUS_STEP		6250
#define MP2762_ADC_IBUS_RATE		1000

#define MP2762_ADC_VOTG_REG		0x20
#define MP2762_ADC_VOTG_SHIFT		6
#define MP2762_ADC_VOTG_STEP		25
#define MP2762_ADC_VOTG_RATE		1

#define MP2762_ADC_IOTG_REG		0x22
#define MP2762_ADC_IOTG_SHIFT		6
#define MP2762_ADC_IOTG_STEP		6250
#define MP2762_ADC_IOTG_RATE		1000

#define MP2762_ADC_TJ_REG		0x24
#define MP2762_ADC_TJ_SHIFT		6
#define MP2762_ADC_TJ_STEP		1
#define MP2762_ADC_TJ_RATE		1
#define MP2762_ADC_TJ_CONVERT(x)	((9030000 - (10000 * (x))) / 2578)

#define MP2762_ADC_PSYS_REG	        0x26
#define MP2762_ADC_PSYS_SHIFT	        6
#define MP2762_ADC_PSYS_STEP	        125
#define MP2762_ADC_PSYS_RATE	        10

#define MP2762_ADC_DISCHARGE_IBAT_REG	0x28
#define MP2762_ADC_DISCHARGE_IBAT_SHIFT	6
#define MP2762_ADC_DISCHARGE_IBAT_STEP	12500
#define MP2762_ADC_DISCHARGE_IBAT_RATE	1000

#define MP2762_VPRECHG_OPTION_REG	0x30
#define MP2762_VPRECHG_OPTION_BIT	BIT(3)

#define MP2762_TEST_MODE_REG		0x53
