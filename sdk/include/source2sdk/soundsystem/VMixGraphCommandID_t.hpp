#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Enumerator count: 38
        // Alignment: 4
        // Size: 0x4
        enum class VMixGraphCommandID_t : std::uint32_t
        {
            CMD_INVALID = 0xffffffff,
            CMD_CONTROL_INPUT_STORE = 0x1,
            CMD_CONTROL_INPUT_STORE_DB = 0x2,
            CMD_CONTROL_TRANSIENT_INPUT_STORE = 0x3,
            CMD_CONTROL_TRANSIENT_INPUT_RESET = 0x4,
            CMD_CONTROL_OUTPUT_STORE = 0x5,
            CMD_CONTROL_EVALUATE_CURVE = 0x6,
            CMD_CONTROL_COPY = 0x7,
            CMD_CONTROL_REMAP_LINEAR = 0x8,
            CMD_CONTROL_REMAP_SINE = 0x9,
            CMD_CONTROL_REMAP_LOGLINEAR = 0xa,
            CMD_CONTROL_MAX = 0xb,
            CMD_CONTROL_RESET_TIMER = 0xc,
            CMD_CONTROL_INCREMENT_TIMER = 0xd,
            CMD_CONTROL_EVAL_ENVELOPE = 0xe,
            CMD_CONTROL_SINE_BLEND = 0xf,
            CMD_PROCESSOR_SET_CONTROL_VALUE = 0x10,
            CMD_PROCESSOR_SET_NAME_INPUT = 0x11,
            CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE = 0x12,
            CMD_PROCESSOR_STORE_CONTROL_VALUE = 0x13,
            CMD_PROCESSOR_SET_VSND_VALUE = 0x14,
            CMD_SUBMIX_PROCESS = 0x15,
            CMD_SUBMIX_GENERATE = 0x16,
            CMD_SUBMIX_GENERATE_SIDECHAIN = 0x17,
            CMD_SUBMIX_DEBUG = 0x18,
            CMD_SUBMIX_MIX2x1 = 0x19,
            CMD_SUBMIX_OUTPUT = 0x1a,
            CMD_SUBMIX_OUTPUTx2 = 0x1b,
            CMD_SUBMIX_COPY = 0x1c,
            CMD_SUBMIX_ACCUMULATE = 0x1d,
            CMD_SUBMIX_METER = 0x1e,
            CMD_SUBMIX_METER_SPECTRUM = 0x1f,
            CMD_IMPULSERESPONSE_INPUT_STORE = 0x20,
            CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 0x21,
            CMD_REMAP_VSND_TO_IMPULSERESPONSE = 0x22,
            CMD_IMPULSERESPONSE_RESET = 0x23,
            CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 0x24,
            CMD_IMPULSERESPONSE_DELAY = 0x25,
        };
    };
};
