/* Copyright (C) 2013-2015 by Jacob Alexander
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

// ----- Includes -----



// ----- Defines -----

// You can change these to give your code its own name.
#define STR_MANUFACTURER        L"Kiibohd"
#define STR_PRODUCT             L"Keyboard - MDErgo1-C2 PartialMap pjrcUSB full"
#define STR_SERIAL              L"Dirty c2-logo - 2016-04-30 19:22:09 -0700"


// Strings used in the CLI module
#define CLI_Revision            "58e19c831b35dce37c685a2ea0ddc4e187953338"
#define CLI_Branch              "c2-logo"
#define CLI_ModifiedStatus      "Dirty"
#define CLI_ModifiedFiles       "\r\n\tOutput/pjrcUSB/arm/usb_desc.c\r\n\tOutput/pjrcUSB/arm/usb_desc.h\r\n\tOutput/pjrcUSB/arm/usb_dev.c\r\n\tOutput/pjrcUSB/arm/usb_dev.h\r\n\tOutput/pjrcUSB/output_com.c\r\n\tOutput/pjrcUSB/output_com.h\r\n\tOutput/usbMuxUart/output_com.c\r\n\tScan/ISSILed/led_scan.c\r\n\tScan/ISSILed/led_scan.h\r\n\tScan/KType/scan_loop.c\r\n\tScan/KType/scan_loop.h\r\n\tScan/MD1.1/scan_loop.c\r\n\tScan/MD1.1/scan_loop.h\r\n\tScan/MD1/scan_loop.c\r\n\tScan/MD1/scan_loop.h\r\n\tScan/MDErgo1-C2/scan_loop.c\r\n\tScan/MDErgo1-C2/scan_loop.h\r\n\tScan/MDErgo1/scan_loop.c\r\n\tScan/MDErgo1/scan_loop.h\r\n\tScan/MatrixARM/matrix_scan.c\r\n\tScan/MatrixARM/matrix_scan.h\r\n\tScan/STLcd/lcd_scan.c\r\n\tScan/STLcd/lcd_scan.h\r\n\tScan/UARTConnect/connect_scan.c\r\n\tScan/UARTConnect/connect_scan.h\r\n\tScan/WhiteFox/scan_loop.c\r\n\tScan/WhiteFox/scan_loop.h"
#define CLI_RepoOrigin          "git@github.com:csquared/controller.git"
#define CLI_CommitDate          "2016-04-30 19:22:09 -0700"
#define CLI_CommitAuthor        "csquared <christopher.continanza@gmail.com>"
#define CLI_Modules             "Scan(MDErgo1-C2) Macro(PartialMap) Output(pjrcUSB) Debug(full)"
#define CLI_BuildDate           "2016-05-01 15:59:20 -0700"
#define CLI_BuildOS             "Darwin-15.4.0"
#define CLI_Arch                "arm"
#define CLI_Chip                "mk20dx256vlh7"
#define CLI_CPU                 "cortex-m4"
#define CLI_Device              "Keyboard"


// Mac OS-X and Linux automatically load the correct drivers.  On
// Windows, even though the driver is supplied by Microsoft, an
// INF file is needed to load the driver.  These numbers need to
// match the INF file.
#define VENDOR_ID               0x1C11
#define PRODUCT_ID              0xB04D

