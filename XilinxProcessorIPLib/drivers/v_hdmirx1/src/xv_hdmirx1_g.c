/******************************************************************************
*
* Copyright (C) 2018 – 2019 Xilinx, Inc.  All rights reserved.
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*
******************************************************************************/

#include "xparameters.h"
#include "xv_hdmirx1.h"

/*
* The configuration table for devices
*/

XV_HdmiRx1_Config XV_HdmiRx1_ConfigTable[XPAR_XV_HDMIRX1_NUM_INSTANCES] =
{
	{
		XPAR_V_HDMI_RXSS1_V_HDMI_RX_DEVICE_ID,
		XPAR_V_HDMI_RXSS1_V_HDMI_RX_BASEADDR,
		XPAR_V_HDMI_RXSS1_V_HDMI_RX_AXI_LITE_FREQ_HZ,
		XPAR_V_HDMI_RXSS1_V_HDMI_RX_LNK_REF_CLK
	}
};

