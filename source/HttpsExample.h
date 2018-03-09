/*
* Licensee agrees that the example code provided to Licensee has been developed and released by Bosch solely as an example to be used as a potential reference for Licensee�s application development.
* Fitness and suitability of the example code for any use within Licensee�s applications need to be verified by Licensee on its own authority by taking appropriate state of the art actions and measures (e.g. by means of quality assurance measures).
* Licensee shall be responsible for conducting the development of its applications as well as integration of parts of the example code into such applications, taking into account the state of the art of technology and any statutory regulations and provisions applicable for such applications. Compliance with the functional system requirements and testing there of (including validation of information/data security aspects and functional safety) and release shall be solely incumbent upon Licensee.
* For the avoidance of doubt, Licensee shall be responsible and fully liable for the applications and any distribution of such applications into the market.
*
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
*     (1) Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*
*     (2) Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in
*     the documentation and/or other materials provided with the
*     distribution.
*
*     (3)The name of the author may not be used to
*     endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
*  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
*  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
*  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
*  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
*  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
*  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
*  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
*  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*/
/*----------------------------------------------------------------------------*/
/**
* @file
* @brief  This Module is Configuration header for XDK Application Template configurations
*
**/

/* header definition ******************************************************** */
#ifndef XDK110_XDKAPPLICATIONTEMPLATE_H_
#define XDK110_XDKAPPLICATIONTEMPLATE_H_

/* local interface declaration ********************************************** */
 /* Priorities */
#define TASK_PRIO_MAIN_CMD_PROCESSOR                (UINT32_C(1))
#define TASK_STACK_SIZE_MAIN_CMD_PROCESSOR          (UINT16_C(700))
#define TASK_Q_LEN_MAIN_CMD_PROCESSOR                (UINT32_C(10))
/* local type and macro definitions */


#define CONNECT_TIME_INTERVAL           UINT32_C(10000)                 /**< Macro to represent connect time interval */
#define TIMERBLOCKTIME                  UINT32_C(0xffff)                /**< Macro used to define blocktime of a timer*/
#define TIMER_AUTORELOAD_ON             UINT32_C(1)                     /**< Auto reload of timer is enabled*/


/**
 * WLAN_CONNECT_WPA_SSID is the WIFI network name where user wants connect the XDK device.
 * Make sure to update the WLAN_CONNECT_WPA_SSID constant according to your required WIFI network.
 */
#define WLAN_CONNECT_WPA_SSID          "Centraal-Comunidad"
/**
 * WLAN_CONNECT_WPA_PASS is the WIFI router WPA/WPA2 password used at the Wifi network connection.
 * Make sure to update the WLAN_CONNECT_WPA_PASS constant according to your router password.
 */
#define WLAN_CONNECT_WPA_PASS          "hoyemprendo"

/**
 * DEST_SERVER_HOST is the hostname of the webserver we will send HTTP requests to.
 * If you want to test this example without setting up your own server, you can use publicly available
 * Make sure to update the DEST_POST_PATH constant below.
 */
#define DEST_SERVER_HOST                "thawing-waters-35250.herokuapp.com"

/**
 * DEST_SERVER_PORT is the TCP port to which we will send HTTP requests to.
 * The default of 80 should be fine for most applications.
 */
#define DEST_SERVER_PORT                UINT16_C(443)

/**
 * DEST_POST_PATH is the path relative to the DEST_SERVER_HOST that we will send
 * the HTTP POST request to.
 *
 * Change this value if you use your own webserver or url in putsreq.com .
 */
#define DEST_POST_PATH                  "/xdk"

/**
 * DEST_GET_PATH is the path relative to the DEST_SERVER_HOST that we will send
 * the HTTP GET request to. Using / will retrieve the index page of the webserver
 * which for demo purposes may be enough.
 *
 * Change this value if you use your own webserver or putsreq.com.
 */
#define DEST_GET_PATH                   DEST_SERVER_HOST

/* Will be used after encryption
 * #define DEST_SERVER_ADDRESS 			"www.xdk.bosch-connectivity.com"
 */

/* local module global variable declarations */

/* local inline function definitions */
/**
 * @brief This is a template function where the user can write his custom application.
 *
 * @param[in] CmdProcessorHandle Handle of the main commandprocessor
 *
 * @param[in] param2  Currently not used will be used in future
 *
 */


void appInitSystem(void * CmdProcessorHandle, uint32_t param2);


#endif /* XDK110_XDKAPPLICATIONTEMPLATE_H_ */

/** ************************************************************************* */
