/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr/kernel.h>
#include <zephyr/types.h>
#include <stddef.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>

#include <zmk/output/output_generic_api.h>

#ifdef __cplusplus
extern "C" {
#endif

struct output_split_output_relay_config {
};

struct output_split_output_relay_data {
    const struct device *dev;
    bool busy;
};

static const struct output_split_output_relay_api api = {
    .set_value = output_split_output_relay_set_value,
    .get_ready = output_split_output_relay_get_ready,
    .set_payload = output_split_output_relay_set_payload,
};

#ifdef __cplusplus
}
#endif

/**
 * @}
 */
