#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Timed Block Limiter"
        #pragma pack(push, 1)
        class CSosGroupActionTimeBlockLimitSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            std::int32_t m_nMaxCount; // 0x_            
            float m_flMaxDuration; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionTimeBlockLimitSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionTimeBlockLimitSchema) == 0x_);
    };
};
