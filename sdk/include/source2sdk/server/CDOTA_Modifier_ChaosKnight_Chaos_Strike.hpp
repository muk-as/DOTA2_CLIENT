#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ChaosKnight_Chaos_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_multiplier; // 0x_            
            std::int32_t crit_min; // 0x_            
            std::int32_t crit_max; // 0x_            
            std::int32_t lifesteal; // 0x_            
            float chance; // 0x_            
            std::int32_t m_nNextCrit; // 0x_            
            // m_vCritRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_vCritRecords;
            char m_vCritRecords[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ChaosKnight_Chaos_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ChaosKnight_Chaos_Strike) == 0x_);
    };
};
