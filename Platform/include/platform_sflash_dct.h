/*
 * Copyright 2013, Broadcom Corporation
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom Corporation.
 */
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

extern wiced_result_t platform_get_sflash_dct_loc( sflash_handle_t* sflash_handle, uint32_t* loc );

#ifdef __cplusplus
} /* extern "C" */
#endif