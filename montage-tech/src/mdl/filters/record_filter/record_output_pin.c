/********************************************************************************************/
/* Montage Technology (Shanghai) Co., Ltd.                                                  */
/* Montage Proprietary and Confidential                                                     */
/* Copyright (c) 2014 Montage Technology Group Limited and its affiliated companies         */
/********************************************************************************************/
// std
#include "string.h"

// sys
#include "sys_types.h"
#include "sys_define.h"
#include "mtos_printk.h"
#include "mtos_msg.h"
#include "mtos_mem.h"

//util
#include "class_factory.h"
#include "simple_queue.h"

//eva
#include "media_format_define.h"
#include "interface.h"
#include "eva.h"
#include "imem_alloc.h"
#include "iasync_reader.h"
#include "ipin.h"
#include "input_pin.h"
#include "output_pin.h"
#include "transf_output_pin.h"
#include "record_output_pin_intra.h"

static rec_out_pin_private_t *get_priv(handle_t _this)
{
  rec_out_pin_t *p_out_pin = (rec_out_pin_t *)_this;
  
  MT_ASSERT(p_out_pin != NULL);

  return &p_out_pin->private_data;
}

static RET_CODE decide_buffer_size(handle_t _this)
{
  rec_out_pin_private_t *p_priv = get_priv(_this);
  imem_allocator_t *p_alloc = p_priv->p_alloc;
  allocator_properties_t properties;
  
  //config mem_alloc
  p_alloc->get_properties(p_alloc, &properties);
  properties.buffers = 2;
  properties.buffer_size = 5 * 188;
  p_alloc->set_properties(p_alloc, &properties, NULL);
  return SUCCESS;
}

rec_out_pin_t *record_out_pin_create(rec_out_pin_t *p_out_pin, interface_t *p_owner)
{
  rec_out_pin_private_t *p_priv = NULL;
  ipin_t *p_ipin = NULL;
  base_output_pin_t *p_output_pin = NULL;
  transf_output_pin_para_t para;
  media_format_t media_format = {MT_RECODE};
  
  MT_ASSERT(p_out_pin != NULL);
  p_ipin = (ipin_t *)p_out_pin;

  para.p_filter = p_owner;
  para.p_name = "rec_out_pin";
  //create base class
  transf_output_pin_create(&p_out_pin->m_pin, &para);

  //init private date
  p_priv = &p_out_pin->private_data;
  p_priv->p_this = p_out_pin;
  p_ipin->get_interface(p_ipin, IMEM_ALLOC_INTERFACE, (void **)&p_priv->p_alloc);
  p_ipin->add_supported_media_format(p_ipin, &media_format);
  
  p_output_pin = (base_output_pin_t *)p_out_pin;
  p_output_pin->decide_buffer_size = decide_buffer_size;
  
  return p_out_pin;
}

//END OF FILE
