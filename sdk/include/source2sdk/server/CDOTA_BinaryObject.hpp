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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_BinaryObject : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bActive; // 0x4d8            
            uint8_t _pad04d9[0x3]; // 0x4d9
            std::int32_t m_nBinaryID; // 0x4dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BinaryObject because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BinaryObject) == 0x4e0);
    };
};
