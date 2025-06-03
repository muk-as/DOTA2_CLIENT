#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float interval_scepter; // 0x1878            
            bool bInBufferTime; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            std::int32_t damage; // 0x1880            
            source2sdk::entity2::GameTime_t m_flLastApplyTime; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker) == 0x1888);
    };
};
