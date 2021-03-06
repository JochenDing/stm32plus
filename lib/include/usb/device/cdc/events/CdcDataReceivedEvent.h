/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */


#pragma once


namespace stm32plus {
  namespace usb {

    /**
     * Sent when connected and device descriptor is being asked for. Subscriber
     * can modify descriptor if required.
     */

    struct CdcDataReceivedEvent : UsbEventDescriptor {

      uint8_t *data;
      uint32_t size;

      CdcDataReceivedEvent(uint8_t *d,uint32_t s)
        : UsbEventDescriptor(EventType::CDC_DATA_RECEIVED),
          data(d),
          size(s) {
      }
    };
  }
}

