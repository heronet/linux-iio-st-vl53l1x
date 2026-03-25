/* SPDX-License-Identifier: GPL-2.0 OR BSD-2-Clause */
#ifndef VL53L1X_COMPAT_H
#define VL53L1X_COMPAT_H

#include <linux/version.h>

#if LINUX_VERSION_CODE < KERNEL_VERSION(6, 13, 0)

static inline bool iio_device_claim_direct(struct iio_dev *indio_dev)
{
	return iio_device_claim_direct_mode(indio_dev) == 0;
}

static inline void iio_device_release_direct(struct iio_dev *indio_dev)
{
	iio_device_release_direct_mode(indio_dev);
}

#define iio_push_to_buffers_with_ts(indio_dev, data, data_sz, ts) \
	iio_push_to_buffers_with_timestamp(indio_dev, data, ts)

#define devm_reset_control_get_optional_exclusive_deasserted(dev, id) \
	devm_reset_control_get_optional_exclusive(dev, id)

#endif /* 6.12 LTS or earlier */

#endif /* VL53L1X_COMPAT_H */