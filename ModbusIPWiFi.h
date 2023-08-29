/*
    ModbusIPWiFi.h - Header for Modbus IP WiFi Library
    Copyright (C) 2023 Dewar Goosen
*/
#include <Arduino.h>
#include <Modbus.h>
#include <SPI.h>
#include <WiFiNINA.h>

#ifndef MODBUSIP_H
#define MODBUSIP_H

#define MODBUSIP_PORT 	  502
#define MODBUSIP_MAXFRAME 200

#define TCP_KEEP_ALIVE

class ModbusIPWiFi : public Modbus {
    private:
        WiFiServer _server;
        byte _MBAP[7];

    public:
        ModbusIPWiFi();
	void config();
	void taskwifi();
};

#endif //MODBUSIP_H

