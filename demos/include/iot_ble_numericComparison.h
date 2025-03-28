/*
 * Amazon FreeRTOS V201906.00 Major
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/**
 * @file aws_iot_network.h
 * @brief Header file containing the network management APIs
 */
#ifndef _AWS_BLE_NUMERIC_COMPARISON_H_
#define _AWS_BLE_NUMERIC_COMPARISON_H_

#include "queue.h"

typedef struct
{
    uint8_t * pcData;
    size_t xDataSize;
} INPUTMessage_t;

extern QueueHandle_t xNumericComparisonQueue;

extern void BLENumericComparisonCb( BTBdaddr_t * pxRemoteBdAddr,
                                    uint32_t ulPassKey );

extern void BLEGAPPairingStateChangedCb( BTStatus_t xStatus,
                                         BTBdaddr_t * pxRemoteBdAddr,
                                         BTSecurityLevel_t xSecurityLevel,
                                         BTAuthFailureReason_t xReason );
extern void NumericComparisonInit( void );
extern BaseType_t getUserMessage( INPUTMessage_t * pxINPUTmessage,
                                  TickType_t xAuthTimeout );


#endif /* _AWS_IOT_NETWORK_MANAGER_H_ */
