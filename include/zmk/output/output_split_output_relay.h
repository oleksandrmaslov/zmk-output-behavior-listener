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

/* Расширенный API для split‑relay:
 * добавляет функцию set_payload(), отправляющую буфер на периферию.
 */
struct output_split_output_relay_api {
    int (*set_value)(const struct device *dev, uint8_t value);
    int (*get_ready)(const struct device *dev);
    int (*set_payload)(const struct device *dev,
                       const uint8_t *buf, uint8_t len);
};

#ifdef __cplusplus
}
#endif
