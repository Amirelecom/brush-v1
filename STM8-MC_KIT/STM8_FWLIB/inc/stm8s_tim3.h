/**
  ******************************************************************************
  * @file stm8s_tim3.h
  * @brief This file contains all functions prototype and macros for the TIM3 peripheral.
  * @author STMicroelectronics - MCD Application Team
  * @version V1.0.1
  * @date 09/22/2008
  ******************************************************************************
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2008 STMicroelectronics</center></h2>
  * @image html logo.bmp
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM8S_TIM3_H
#define __STM8S_TIM3_H

/* Includes ------------------------------------------------------------------*/
#include "stm8s_map.h"

/* Exported types ------------------------------------------------------------*/

/** @addtogroup TIM3_Exported_Types
  * @{
  */

/** TIM3 Forced Action */
typedef enum
{
  TIM3_FORCEDACTION_ACTIVE           = ((u8)0x50),
  TIM3_FORCEDACTION_INACTIVE         = ((u8)0x40)
} TIM3_ForcedAction_TypeDef;

#define IS_TIM3_FORCED_ACTION_OK(ACTION) ((ACTION == TIM3_FORCEDACTION_ACTIVE) || \
    (ACTION == TIM3_FORCEDACTION_INACTIVE))

/** TIM3 Prescaler */
typedef enum
{
  TIM3_PRESCALER_1  = ((u8)0x00),
  TIM3_PRESCALER_2    = ((u8)0x01),
  TIM3_PRESCALER_4    = ((u8)0x02),
  TIM3_PRESCALER_8     = ((u8)0x03),
  TIM3_PRESCALER_16   = ((u8)0x04),
  TIM3_PRESCALER_32     = ((u8)0x05),
  TIM3_PRESCALER_64    = ((u8)0x06),
  TIM3_PRESCALER_128   = ((u8)0x07),
  TIM3_PRESCALER_256   = ((u8)0x08),
  TIM3_PRESCALER_512   = ((u8)0x09),
  TIM3_PRESCALER_1024  = ((u8)0x0A),
  TIM3_PRESCALER_2048 = ((u8)0x0B),
  TIM3_PRESCALER_4096   = ((u8)0x0C),
  TIM3_PRESCALER_8192 = ((u8)0x0D),
  TIM3_PRESCALER_16384 = ((u8)0x0E),
  TIM3_PRESCALER_32768 = ((u8)0x0F)
} TIM3_Prescaler_TypeDef;

#define IS_TIM3_PRESCALER_OK(PRESCALER) (((PRESCALER) == TIM3_PRESCALER_1  ) || \
    ((PRESCALER) == TIM3_PRESCALER_2    ) || \
    ((PRESCALER) == TIM3_PRESCALER_4    ) || \
    ((PRESCALER) == TIM3_PRESCALER_8  ) || \
    ((PRESCALER) == TIM3_PRESCALER_16   ) || \
    ((PRESCALER) == TIM3_PRESCALER_32     ) || \
    ((PRESCALER) == TIM3_PRESCALER_64    ) || \
    ((PRESCALER) == TIM3_PRESCALER_128   ) || \
    ((PRESCALER) == TIM3_PRESCALER_256   ) || \
    ((PRESCALER) == TIM3_PRESCALER_512   ) || \
    ((PRESCALER) == TIM3_PRESCALER_1024  ) || \
    ((PRESCALER) == TIM3_PRESCALER_2048 ) || \
    ((PRESCALER) == TIM3_PRESCALER_4096 ) || \
    ((PRESCALER) == TIM3_PRESCALER_8192 ) || \
    ((PRESCALER) == TIM3_PRESCALER_16384 ) || \
    ((PRESCALER) == TIM3_PRESCALER_32768 ))

/** TIM3 Output Compare and PWM modes */
typedef enum
{
  TIM3_OCMODE_TIMING     = ((u8)0x00),
  TIM3_OCMODE_ACTIVE     = ((u8)0x10),
  TIM3_OCMODE_INACTIVE   = ((u8)0x20),
  TIM3_OCMODE_TOGGLE     = ((u8)0x30),
  TIM3_OCMODE_PWM1       = ((u8)0x60),
  TIM3_OCMODE_PWM2       = ((u8)0x70)
} TIM3_OCMode_TypeDef;

#define IS_TIM3_OC_MODE_OK(MODE) (((MODE) ==  TIM3_OCMODE_TIMING) || \
                                  ((MODE) == TIM3_OCMODE_ACTIVE) || \
                                  ((MODE) == TIM3_OCMODE_INACTIVE) || \
                                  ((MODE) == TIM3_OCMODE_TOGGLE)|| \
                                  ((MODE) == TIM3_OCMODE_PWM1) || \
                                  ((MODE) == TIM3_OCMODE_PWM2))

#define IS_TIM3_OCM_OK(MODE)(((MODE) ==  TIM3_OCMODE_TIMING) || \
                             ((MODE) == TIM3_OCMODE_ACTIVE) || \
                             ((MODE) == TIM3_OCMODE_INACTIVE) || \
                             ((MODE) == TIM3_OCMODE_TOGGLE)|| \
                             ((MODE) == TIM3_OCMODE_PWM1) || \
                             ((MODE) == TIM3_OCMODE_PWM2) || \
                             ((MODE) == TIM3_FORCEDACTION_ACTIVE) || \
                             ((MODE) == TIM3_FORCEDACTION_INACTIVE))

/** TIM3 One Pulse Mode */
typedef enum
{
  TIM3_OPMODE_SINGLE                 = ((u8)0x01),
  TIM3_OPMODE_REPETITIVE             = ((u8)0x00)
} TIM3_OPMode_TypeDef;

#define IS_TIM3_OPM_MODE_OK(MODE) (((MODE) == TIM3_OPMODE_SINGLE) || \
                                   ((MODE) == TIM3_OPMODE_REPETITIVE))

/** TIM3 Channel */

typedef enum
{
  TIM3_CHANNEL_1                     = ((u8)0x00),
  TIM3_CHANNEL_2                     = ((u8)0x01)
} TIM3_Channel_TypeDef;

#define IS_TIM3_CHANNEL_OK(CHANNEL) (((CHANNEL) == TIM3_CHANNEL_1) || \
                                     ((CHANNEL) == TIM3_CHANNEL_2))

#define IS_TIM3_PWMI_CHANNEL_OK(CHANNEL) (((CHANNEL) == TIM3_CHANNEL_1) || \
    ((CHANNEL) == TIM3_CHANNEL_2))

/** TIM3 Output Compare Polarity */
typedef enum
{
  TIM3_OCPOLARITY_HIGH               = ((u8)0x00),
  TIM3_OCPOLARITY_LOW                = ((u8)0x22)
} TIM3_OCPolarity_TypeDef;

#define IS_TIM3_OC_POLARITY_OK(POLARITY) (((POLARITY) == TIM3_OCPOLARITY_HIGH) || \
    ((POLARITY) == TIM3_OCPOLARITY_LOW))

/** TIM3 Output Compare states */
typedef enum
{
  TIM3_OUTPUTSTATE_DISABLE           = ((u8)0x00),
  TIM3_OUTPUTSTATE_ENABLE            = ((u8)0x11)
} TIM3_OutputState_TypeDef;

#define IS_TIM3_OUTPUT_STATE_OK(STATE) (((STATE) == TIM3_OUTPUTSTATE_DISABLE) || \
                                        ((STATE) == TIM3_OUTPUTSTATE_ENABLE))

/** TIM3 Input Capture Polarity */
typedef enum
{
  TIM3_ICPOLARITY_RISING            = ((u8)0x00),
  TIM3_ICPOLARITY_FALLING           = ((u8)0x44)
} TIM3_ICPolarity_TypeDef;

#define IS_TIM3_IC_POLARITY_OK(POLARITY) (((POLARITY) == TIM3_ICPOLARITY_RISING) || \
    ((POLARITY) == TIM3_ICPOLARITY_FALLING))

/** TIM3 Input Capture Selection */
typedef enum
{
  TIM3_ICSELECTION_DIRECTTI          = ((u8)0x01),
  TIM3_ICSELECTION_INDIRECTTI        = ((u8)0x02),
  TIM3_ICSELECTION_TRGI              = ((u8)0x03)
} TIM3_ICSelection_TypeDef;

#define IS_TIM3_IC_SELECTION_OK(SELECTION) (((SELECTION) == TIM3_ICSELECTION_DIRECTTI) || \
    ((SELECTION) == TIM3_ICSELECTION_INDIRECTTI) || \
    ((SELECTION) == TIM3_ICSELECTION_TRGI))

/** TIM3 Input Capture Prescaler */
typedef enum
{
  TIM3_ICPSC_DIV1                    = ((u8)0x00),
  TIM3_ICPSC_DIV2                    = ((u8)0x04),
  TIM3_ICPSC_DIV4                    = ((u8)0x08),
  TIM3_ICPSC_DIV8                    = ((u8)0x0C)
} TIM3_ICPSC_TypeDef;

#define IS_TIM3_IC_PRESCALER_OK(PRESCALER) (((PRESCALER) == TIM3_ICPSC_DIV1) || \
    ((PRESCALER) == TIM3_ICPSC_DIV2) || \
    ((PRESCALER) == TIM3_ICPSC_DIV4) || \
    ((PRESCALER) == TIM3_ICPSC_DIV8))

/** TIM3 Input Capture Filer Value */
#define IS_TIM3_IC_FILTER_OK(ICFILTER) (ICFILTER <= 0x0F)

/** TIM3 interrupt sources */
typedef enum
{
  TIM3_IT_UPDATE                     = ((u8)0x01),
  TIM3_IT_CC1                        = ((u8)0x02),
  TIM3_IT_CC2                        = ((u8)0x04)
} TIM3_IT_TypeDef;

#define IS_TIM3_IT_OK(IT) (IT != 0x00)

#define IS_TIM3_GET_IT_OK(IT) (((IT) == TIM3_IT_UPDATE) || \
                               ((IT) == TIM3_IT_CC1) || \
                               ((IT) == TIM3_IT_CC2))

/** TIM3 Prescaler Reload Mode */
typedef enum
{
  TIM3_PSCRELOADMODE_UPDATE          = ((u8)0x00),
  TIM3_PSCRELOADMODE_IMMEDIATE       = ((u8)0x01)
} TIM3_PSCReloadMode_TypeDef;

#define IS_TIM3_PRESCALER_RELOAD_OK(RELOAD) (((RELOAD) == TIM3_PSCRELOADMODE_UPDATE) || \
    ((RELOAD) == TIM3_PSCRELOADMODE_IMMEDIATE))

/** TIM3 Event Source */
typedef enum
{
  TIM3_EVENTSOURCE_UPDATE            = ((u8)0x01),
  TIM3_EVENTSOURCE_CC1               = ((u8)0x02),
  TIM3_EVENTSOURCE_CC2               = ((u8)0x04)
} TIM3_EventSource_TypeDef;

#define IS_TIM3_EVENT_SOURCE_OK(SOURCE) ((SOURCE != 0x00))

/** TIM3 Update Source */
typedef enum
{
  TIM3_UPDATESOURCE_GLOBAL           = ((u8)0x00),
  TIM3_UPDATESOURCE_REGULAR          = ((u8)0x01)
} TIM3_UpdateSource_TypeDef;

#define IS_TIM3_UPDATE_SOURCE_OK(SOURCE) (((SOURCE) == TIM3_UPDATESOURCE_GLOBAL) || \
    ((SOURCE) == TIM3_UPDATESOURCE_REGULAR))

/** TIM3 Flags */
typedef enum
{
  TIM3_FLAG_UPDATE                   = ((u16)0x0001),
  TIM3_FLAG_CC1                      = ((u16)0x0002),
  TIM3_FLAG_CC2                      = ((u16)0x0004),
  TIM3_FLAG_CC1OF                    = ((u16)0x0200),
  TIM3_FLAG_CC2OF                    = ((u16)0x0400)
} TIM3_FLAG_TypeDef;

#define IS_TIM3_GET_FLAG_OK(FLAG) (((FLAG) == TIM3_FLAG_UPDATE) || \
                                   ((FLAG) == TIM3_FLAG_CC1) || \
                                   ((FLAG) == TIM3_FLAG_CC2) || \
                                   ((FLAG) == TIM3_FLAG_CC1OF) || \
                                   ((FLAG) == TIM3_FLAG_CC2OF) )

#define IS_TIM3_CLEAR_FLAG_OK(FLAG) (((FLAG & (u16)0xF1F0) == 0x0000) && (FLAG != 0x0000))

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/

/** @addtogroup TIM3_Exported_Functions
  * @{
  */

void TIM3_DeInit(void);
void TIM3_TimeBaseInit(TIM3_Prescaler_TypeDef TIM3_Prescaler, u16 TIM3_Period);
void TIM3_OC1Init(TIM3_OCMode_TypeDef TIM3_OCMode, TIM3_OutputState_TypeDef TIM3_OutputState, u16 TIM3_Pulse, TIM3_OCPolarity_TypeDef TIM3_OCPolarity);
void TIM3_OC2Init(TIM3_OCMode_TypeDef TIM3_OCMode, TIM3_OutputState_TypeDef TIM3_OutputState, u16 TIM3_Pulse, TIM3_OCPolarity_TypeDef TIM3_OCPolarity);
void TIM3_ICInit(TIM3_Channel_TypeDef TIM3_Channel, TIM3_ICPolarity_TypeDef TIM3_ICPolarity, TIM3_ICSelection_TypeDef TIM3_ICSelection,  TIM3_ICPSC_TypeDef TIM3_ICPrescaler, u8 TIM3_ICFilter);
void TIM3_PWMIConfig(TIM3_Channel_TypeDef TIM3_Channel, TIM3_ICPolarity_TypeDef TIM3_ICPolarity, TIM3_ICSelection_TypeDef TIM3_ICSelection,  TIM3_ICPSC_TypeDef TIM3_ICPrescaler, u8 TIM3_ICFilter);
void TIM3_Cmd(FunctionalState NewState);
void TIM3_ITConfig(TIM3_IT_TypeDef TIM3_IT, FunctionalState NewState);
void TIM3_InternalClockConfig(void);
void TIM3_UpdateDisableConfig(FunctionalState Newstate);
void TIM3_UpdateRequestConfig(TIM3_UpdateSource_TypeDef TIM3_UpdateSource);
void TIM3_SelectOnePulseMode(TIM3_OPMode_TypeDef TIM3_OPMode);
void TIM3_PrescalerConfig(TIM3_Prescaler_TypeDef Prescaler, TIM3_PSCReloadMode_TypeDef TIM3_PSCReloadMode);
void TIM3_ForcedOC1Config(TIM3_ForcedAction_TypeDef TIM3_ForcedAction);
void TIM3_ForcedOC2Config(TIM3_ForcedAction_TypeDef TIM3_ForcedAction);
void TIM3_ARRPreloadConfig(FunctionalState Newstate);
void TIM3_CCPreloadControl(FunctionalState Newstate);
void TIM3_OC1PreloadConfig(FunctionalState Newstate);
void TIM3_OC2PreloadConfig(FunctionalState Newstate);
void TIM3_GenerateEvent(TIM3_EventSource_TypeDef TIM3_EventSource);
void TIM3_OC1PolarityConfig(TIM3_OCPolarity_TypeDef TIM3_OCPolarity);
void TIM3_OC2PolarityConfig(TIM3_OCPolarity_TypeDef TIM3_OCPolarity);
void TIM3_CCxCmd(TIM3_Channel_TypeDef TIM3_Channel, FunctionalState Newstate);
void TIM3_SelectOCxM(TIM3_Channel_TypeDef TIM3_Channel, TIM3_OCMode_TypeDef TIM3_OCMode);
void TIM3_SetCounter(u16 Counter);
void TIM3_SetAutoreload(u16 Autoreload);
void TIM3_SetCompare1(u16 Compare1);
void TIM3_SetCompare2(u16 Compare2);
void TIM3_SetIC1Prescaler(TIM3_ICPSC_TypeDef TIM3_IC1Prescaler);
void TIM3_SetIC2Prescaler(TIM3_ICPSC_TypeDef TIM3_IC2Prescaler);
u16 TIM3_GetCapture1(void);
u16 TIM3_GetCapture2(void);
u16 TIM3_GetCounter(void);
TIM3_Prescaler_TypeDef TIM3_GetPrescaler(void);
FlagStatus TIM3_GetFlagStatus(TIM3_FLAG_TypeDef TIM3_FLAG);
void TIM3_ClearFlag(TIM3_FLAG_TypeDef TIM3_FLAG);
ITStatus TIM3_GetITStatus(TIM3_IT_TypeDef TIM3_IT);
void TIM3_ClearITPendingBit(TIM3_IT_TypeDef TIM3_IT);
u32 TIM3_ComputeLsiClockFreq(u32 TimerClockFreq);

/**
  * @}
  */

#endif /* __STM8S_TIM3_H */

/******************* (C) COPYRIGHT 2008 STMicroelectronics *****END OF FILE****/
