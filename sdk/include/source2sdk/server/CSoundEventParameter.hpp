#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEventParameter : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszParamName; // 0x_            
            float m_flFloatValue; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x_
            // CUtlSymbolLarge InputSetParamName; // 0x_
            // float InputSetFloatValue; // 0x_
            // void m_nGUID; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventParameter) == 0x_);
    };
};
