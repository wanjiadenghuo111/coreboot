/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2018-2019, The Linux Foundation.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <bootblock_common.h>
#include <soc/clock.h>
#include <soc/mmu.h>
#include <soc/qspi.h>

void bootblock_soc_init(void)
{
	sc7180_mmu_init();
	clock_init();
	quadspi_init(25 * MHz);
}
