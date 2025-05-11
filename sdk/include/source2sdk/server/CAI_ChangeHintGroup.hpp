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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CAI_ChangeHintGroup : public source2sdk::server::CBaseEntity
        {
        public:
            std::int32_t m_iSearchType; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            CUtlSymbolLarge m_strSearchName; // 0x4e0            
            CUtlSymbolLarge m_strNewHintGroup; // 0x4e8            
            float m_flRadius; // 0x4f0            
            uint8_t _pad04f4[0x4];
            
            // Datamap fields:
            // void InputActivate; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_ChangeHintGroup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_ChangeHintGroup) == 0x4f8);
    };
};
